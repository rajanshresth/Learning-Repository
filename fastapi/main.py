from fastapi import FastAPI, HTTPException
from pydantic import BaseModel
from typing import List

# Create the FastAPI app
app = FastAPI()

# Define a Pydantic model for our data
class RData(BaseModel):
    id: int
    name: str
    origin: str

# In-memory "database" (just a list)
RCode: List[RData] = []

# Read (GET) - Root endpoint
@app.get("/")
def read_root():
    return {"message": "Welcome to RCode!"}

# Read (GET) - Get all tea data
@app.get("/rget", response_model=List[RData])
def get_rdata():
    return RCode

# Create (POST) - Add new tea data
@app.post("/rpost", response_model=RData)
def add_rdata(rdata: RData):
    RCode.append(rdata)
    return rdata

# Update (PUT) - Update tea data by ID
@app.put("/rput/{r_id}", response_model=RData)
def update_rdata(r_id: int, updated_d: RData):
    for index, tea in enumerate(RCode):
        if tea.id == r_id:
            RCode[index] = updated_d
            return updated_d
    raise HTTPException(status_code=404, detail="Tea not found")

# Delete (DELETE) - Delete tea data by ID
@app.delete("/rdelete/{r_id}")
def delete_rdata(r_id: int):
    for index, tea in enumerate(RCode):
        if tea.id == r_id:
            del RCode[index]
            return {"message": f"Tea with ID {r_id} deleted successfully"}
    raise HTTPException(status_code=404, detail="Tea not found")

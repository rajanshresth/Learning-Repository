from typing import Optional

from pydantic import BaseModel, Field

# Todo: Create Employee model
# Fields:
#   -id: int
#   -name: str (min 3 chars)
#   -department: optional str (default 'General')
#   -salary: float (must be >= 100000)

class Employee(BaseModel):
    int: int
    name: str = Field(
        ...,
        min_length=3,
        max_length=50,
        describtion="Employee Name",
        example="Rajan Shrestha"
    )
    department: Optional[str] = "General"
    salary: float = Field(..., ge=100000)
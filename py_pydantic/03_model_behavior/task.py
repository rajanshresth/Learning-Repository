from pydantic import BaseModel,computed_field, model_validator,field_validator,Field #type: ignore

# Todo: Create booking model
# Fields: 
#   - user_id: int
#   - room_id: int 
#   - nights: int (must >= 1)
#   - rate_per_night: float
# also, add computed field: total amount = nights*rate_per_night

class Booking(BaseModel):
    user_id: int
    room_id: int

    nights: int = Field(..., ge=1)
    #   -----   OR      -----
    # @field_validator('username')
    # def username_length(cls,v):
    #     if len(v) < 1:
    #         raise ValueError("No of night should be greater than 1")
    #     return v

    rate_per_night: float

    @computed_field
    @property
    def total_amount(self)->float:
        return self.nights * self.rate_per_night
    

input_book = {
    "user_id": "01",
    "room_id": "103",
    "nights": "7",
    "rate_per_night": "1500.8"
}

book = Booking(**input_book)
print(book)
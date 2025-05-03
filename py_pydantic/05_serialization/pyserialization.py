from pydantic import BaseModel, ConfigDict  # type: ignore
from typing import List
from datetime import datetime

class Address(BaseModel):
    street: str
    city: str
    zip_code: str

class User(BaseModel):
    id: int
    name: str
    email: str
    is_active: bool = True
    createdAt: datetime
    address: Address
    tags: List[str] = []
    model_config = ConfigDict(
        json_encoders= {datetime: lambda v: v.strftime('%d-%m-%Y %H:%M:%S')}
    )

# create a user instance
user = User(
    id=1,
    name="rajan",
    email="contact@rajanbuilds.com",
    createdAt=datetime(2025, 3, 15, 14, 30),
    address=Address(
        street="something",
        city="kathmandu",
        zip_code="01723"
    ),
    is_active=True,
    tags=["premium", "subscriber"],
)

# using model_dump() -> dict
python_dict = user.model_dump()
print("\n=================")
print(" ------ Dict ------ ")
print("=================")
print(python_dict)

# using model_dump_json()
json_str = user.model_dump_json()
print("\n\n=================")
print(" ------ JSON ------ ")
print("=================")
print(json_str)
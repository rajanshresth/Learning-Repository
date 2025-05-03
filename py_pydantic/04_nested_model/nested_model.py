from typing import List, Optional
from pydantic import BaseModel #type: ignore

class Address(BaseModel):
    street: str
    city: str
    postal_code: str

class User(BaseModel):
    id: int
    name: str
    address: Address

class Comment(BaseModel):
    id: int
    content: str
    replies: Optional[List['Comment']] = None

Comment.model_rebuild()


addresss = Address(
    street= "371 anything",
    city= 'Kathmandu',
    postal_code= '10001'
)

user = User(
    id= 1,
    name= "Rajan",
    address = addresss
)

comment = Comment(
    id= 1,
    content= "First comment",
    replies = [
        Comment(id=2,content="reply1"),
        Comment(id=3,content="reply2")
    ]
)

print("\naddress: ",addresss)
print("\nuser: ", user)
print("\ncomment: ", comment)
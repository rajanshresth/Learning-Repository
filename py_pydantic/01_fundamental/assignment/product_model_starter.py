from pydantic import BaseModel

# Todo: Create Product model with id, name, price, in_stock

class Product(BaseModel):
    id: int
    name: str
    price: float
    in_stock: bool

input_product= {
    "id": 123,
    "name": "jeans",
    "price": "123.3",
    "in_stock": "Yes"
}

product = Product(**input_product)
print(product)


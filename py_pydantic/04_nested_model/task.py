from pydantic import BaseModel #type: ignore
from typing import List

# TODO: Create Course model
# Each course has modules
# Each Module has lessons

class Lesson(BaseModel):
    lesson_id: int
    topic: str

class Modules(BaseModel):
    module_id: int
    name: str
    lessons: List[Lesson]


class Course(BaseModel):
    course_id: int
    title: str
    modules: List[Modules]

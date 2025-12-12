class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age


def test_local_student():
    total = 0
    for i in range(100000):
        s = Student("John", 20)
        total += s.age
    return total


if __name__ == "__main__":
    result = test_local_student()
    print(result)
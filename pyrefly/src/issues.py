def calculate_discount(price: float, discount: float) -> float:
    # Issue: returns a string instead of the declared float.
    return "invalid"

def get_user_age() -> int:
    # Issue: returns a string instead of an integer.
    return "twenty-two"

def main() -> None:
    result: int = calculate_discount(100.0, 10.0)
    print(result)

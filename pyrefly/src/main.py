def calculate_total(price: float, quantity: int) -> float:
    return price * quantity


def format_user(name: str, age: int) -> str:
    return f"{name} is {age} years old"


def main() -> None:
    total = calculate_total(100.0, 3)
    user = format_user("Test User", 22)
    print(total)
    print(user)


if __name__ == "__main__":
    main()

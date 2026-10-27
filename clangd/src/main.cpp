#include "User.hpp"
#include <iostream>

User::User(std::string name, int age)
    : name(std::move(name)), age(age) {}

bool User::isAdult() const {
    return age >= 18;
}

int main() {
    User user("Test User", 22);
    std::cout << user.isAdult() << '\n';
    return 0;
}

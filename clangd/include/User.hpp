#pragma once

#include <string>

class User {
public:
    User(std::string name, int age);
    bool isAdult() const;

private:
    std::string name;
    int age;
};

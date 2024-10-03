#pragma once
#include <stdexcept>
#include <string>

class Garbage {
public:
    Garbage(std::string name);
    std::string toString() const;

private:
    std::string const _name;
};
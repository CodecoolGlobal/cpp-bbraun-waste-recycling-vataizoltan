#pragma once

#include <string>

class PlasticGarbage {
public:
    PlasticGarbage(std::string name, bool isClean);

    bool isClean() const;

    void clean();
    std::string toString() const;

private:
    std::string const _name;
    bool _isClean = false;
};
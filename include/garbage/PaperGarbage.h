#pragma once

#include <string>

class PaperGarbage {
public:
    PaperGarbage(std::string name, bool isSqueezed);

    bool isSqueezed() const;

    void squeeze();
    std::string toString() const;

private:
    std::string const _name;
    bool _isSqueezed = false;
};
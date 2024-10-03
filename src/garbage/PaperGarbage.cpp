#include "PaperGarbage.h"
#include <string>

using namespace std;

PaperGarbage::PaperGarbage(string name, bool isSqueezed):_name(name),_isSqueezed(isSqueezed){};

bool PaperGarbage::isSqueezed() const
{
    return _isSqueezed;
}

void PaperGarbage::squeeze()
{
    _isSqueezed=true;
}

string PaperGarbage::toString() const
{
    return _name;
}
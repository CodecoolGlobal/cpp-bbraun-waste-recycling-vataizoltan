#include "Garbage.h"
#include <string>

using namespace std;

Garbage::Garbage(string name):_name(name){};


string Garbage::toString() const
{
    return _name;
}
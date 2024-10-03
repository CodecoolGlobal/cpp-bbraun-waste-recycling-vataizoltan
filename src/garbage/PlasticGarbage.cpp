#include "PlasticGarbage.h"
#include <string>

using namespace std;

PlasticGarbage::PlasticGarbage(string name, bool isClean):_name(name),_isClean(isClean){};

bool PlasticGarbage::isClean() const
{
    return _isClean;
}

void PlasticGarbage::clean()
{
    _isClean=true;
}

string PlasticGarbage::toString() const
{
    return _name;
}
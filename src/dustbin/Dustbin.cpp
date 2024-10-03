#include "Dustbin.h"
#include "DustbinContentError.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Dustbin::Dustbin(string const &color) : _color(color) {};

void Dustbin::throwOutGarbage(Garbage const &garbage)
{
    houseWasteContent.push_back(garbage);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage const &paperGarbage)
{
    if (paperGarbage.isSqueezed() != false)
    {
        paperContent.push_back(paperGarbage);
    }
    else
    {
        DustbinContentError("Should be squeezed");
    }
}
void Dustbin::throwOutPlasticGarbage(PlasticGarbage const &plasticGarbage)
{
    if (plasticGarbage.isClean() != false)
    {
        plasticContent.push_back(plasticGarbage);
    }
    else
    {
        DustbinContentError("SHould be clean");
    }
}

void Dustbin::showContents() const
{
    if (houseWasteContent.empty())
    {
        cout << "Garbage empty" << endl;
    }
    else
    {
        for (auto const &garbage : houseWasteContent)
        {
            cout << garbage.toString() << endl;
        }
    }
    if (paperContent.empty())
    {
        cout << "PaperGarbage empty" << endl;
    }
    else
    {
        for (auto const &papergarbage : paperContent)
        {
            cout << papergarbage.toString() << endl;
        }
    }

    if (plasticContent.empty())
    {
        cout << "PlasticGarbage empty" << endl;
    }
    else
    {
        for (auto const &plasticgarbage : plasticContent)
        {
            cout << plasticgarbage.toString() << endl;
        }
    }
}

void Dustbin::emptyContents()
{
    houseWasteContent.clear();
    paperContent.clear();
    plasticContent.clear();
}
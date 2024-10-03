#include <iostream>
#include "DustbinTests.h"
#include "Dustbin.h"
#include "DustbinContentError.h"
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"

using namespace std;

int main() {
    try {
        Dustbin dustbin={"sarga"};
        dustbin.throwOutGarbage(Garbage("tojas"));
        dustbin.throwOutGarbage(Garbage("alma"));
        dustbin.throwOutGarbage(Garbage("banan"));
        dustbin.throwOutPaperGarbage(PaperGarbage("wc papir", true));
        dustbin.throwOutPlasticGarbage(PlasticGarbage("szatyor", true));
        dustbin.showContents();
        dustbin.emptyContents();
        dustbin.showContents();
        //DustbinContentError dustbinContentError{};
        
        Tester tester{};
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}

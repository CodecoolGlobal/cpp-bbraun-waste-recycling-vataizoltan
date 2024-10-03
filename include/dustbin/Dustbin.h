#pragma once
#include <string>
#include <vector>
#include "Garbage.h"
#include "PaperGarbage.h"
#include "PlasticGarbage.h"

class Dustbin {
public:
   Dustbin(std::string const& color);

   void throwOutGarbage(Garbage const& garbage);

   void throwOutPaperGarbage(PaperGarbage const& paperGarbage);

   void throwOutPlasticGarbage(PlasticGarbage const& plasticGarbage);

   void showContents() const;

   void emptyContents();

private:
   std::string const _color;
   std::vector<Garbage> houseWasteContent;
   std::vector<PaperGarbage> paperContent;
   std::vector<PlasticGarbage> plasticContent;

};
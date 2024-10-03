#pragma once
#include <stdexcept>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"

class DustbinContentError {
public:
   DustbinContentError(std::string const& msg);
private:
   std::string const _msg;
};


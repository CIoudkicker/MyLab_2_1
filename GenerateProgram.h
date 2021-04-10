#ifndef GENERATEPROGRAM_H
#define GENERATEPROGRAM_H
#include "ClassUnit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

#include "FactoryCode.h"


class GenerateProgram{
    public:

    GenerateProgram(FactoryCode* factory);

    std::string generateProgram();

    private:
        FactoryCode *codeCreator;

};

#endif // GENERATEPROGRAM_H

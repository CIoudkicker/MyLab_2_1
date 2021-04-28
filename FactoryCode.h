#ifndef FACTORYCODE_H
#define FACTORYCODE_H
#include "ClassUnit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

class FactoryCode{

    public:

        virtual ~FactoryCode() {}
        virtual std::shared_ptr<ClassUnit> createClassUnit(std::string name, ClassUnit::Flags flag, ClassUnit::Final final) = 0;
        virtual std::shared_ptr<MethodUnit> createMethodUnit(std::string name, std::string returnType, MethodUnit::Flags flags, MethodUnit::Final final) = 0;
        virtual std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(std::string text) = 0;
};


#endif // FACTORYCODE_H

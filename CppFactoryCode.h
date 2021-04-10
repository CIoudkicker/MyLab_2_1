#ifndef CPPFACTORYCODE_H
#define CPPFACTORYCODE_H

#include "ClassUnit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

#include "FactoryCode.h"


class CppFactoryCode : public FactoryCode{

    public:

        CppFactoryCode() {}
        ~CppFactoryCode() {}


        std::shared_ptr<ClassUnit> createClassUnit(std::string name,ClassUnit::Flags flag) {
            return std::make_shared<ClassUnit>(name);
        }
        std::shared_ptr<MethodUnit> createMethodUnit(std::string name, std::string returnType, MethodUnit::Flags flags) {
            return std::make_shared<MethodUnit>(name, returnType, flags);
        }
        std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(std::string text) {
            return std::make_shared<PrintOperatorUnit>(text);
        }
};

#endif // CPPFACTORYCODE_H

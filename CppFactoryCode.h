#ifndef CPPFACTORYCODE_H
#define CPPFACTORYCODE_H

#include "CppClassUnit.h"
#include "CppMethodUnit.h"
#include "CppPrintOperatorUnit.h"

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

#include "FactoryCode.h"


class CppFactoryCode : public FactoryCode{

    public:

        CppFactoryCode() {}
        ~CppFactoryCode() {}


        std::shared_ptr<ClassUnit> createClassUnit(std::string name,ClassUnit::Flags flag, ClassUnit::Final final)override {
            return std::make_shared<CppClassUnit>(name);
        }
        std::shared_ptr<MethodUnit> createMethodUnit(std::string name, std::string returnType, MethodUnit::Flags flags, MethodUnit::Final final)override {
            return std::make_shared<CppMethodUnit>(name, returnType, flags);
        }
        std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(std::string text)override {
            return std::make_shared<CppPrintOperatorUnit>(text);
        }
};

#endif // CPPFACTORYCODE_H

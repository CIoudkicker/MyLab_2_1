#ifndef CSHARPFACTORYCODE_H
#define CSHARPFACTORYCODE_H

#include "CSharpClassUnit.h"
#include "CSharpMethodUnit.h"
#include "CSharpPrintOperatorUnit.h"

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

#include "FactoryCode.h"


class CSharpFactoryCode : public FactoryCode{

    public:

        CSharpFactoryCode() {}
        ~CSharpFactoryCode() {}


        std::shared_ptr<ClassUnit> createClassUnit(std::string name,ClassUnit::Flags flag, ClassUnit::Final final) {
            return std::make_shared<CSharpClassUnit>(name, flag);
        }
        std::shared_ptr<MethodUnit> createMethodUnit(std::string name, std::string returnType, MethodUnit::Flags flags, MethodUnit::Final final) {
            return std::make_shared<CSharpMethodUnit>(name, returnType, flags);
        }
        std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(std::string text) {
            return std::make_shared<CSharpPrintOperatorUnit>(text);
        }
};




#endif // CSHARPFACTORYCODE_H

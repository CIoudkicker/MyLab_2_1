#ifndef JAVAFACTORYCODE_H
#define JAVAFACTORYCODE_H

#include "JavaClassUnit.h"
#include "JavaMethodUnit.h"
#include "JavaPrintOperatorUnit.h"

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

#include "FactoryCode.h"


class JavaFactoryCode : public FactoryCode{

    public:

        JavaFactoryCode() {}
        ~JavaFactoryCode() {}

        /*
        std::shared_ptr<ClassUnit> createClassUnit(std::string name,ClassUnit::Flags flag) {
            return std::make_shared<JavaClassUnit>(name, flag);
        }
        */
        std::shared_ptr<ClassUnit> createClassUnit(std::string name,ClassUnit::Flags flag, ClassUnit::Final final) {
            return std::make_shared<JavaClassUnit>(name, flag, final);
        }
        std::shared_ptr<MethodUnit> createMethodUnit(std::string name, std::string returnType, MethodUnit::Flags flags, MethodUnit::Final final) {
            return std::make_shared<JavaMethodUnit>(name, returnType, flags, final);
        }
        std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(std::string text) {
            return std::make_shared<JavaPrintOperatorUnit>(text);
        }
};


#endif // JAVAFACTORYCODE_H

#include "GenerateProgram.h"


GenerateProgram::GenerateProgram(FactoryCode* factory){
    codeCreator = factory;
}

std::string GenerateProgram::generateProgram() {

    //ClassUnit myClass( "MyClass" );
    std::shared_ptr<ClassUnit> myClass = codeCreator->createClassUnit("MySharpClass",
                                                                      ClassUnit::AccessModifier::PRIVATE,
                                                                      ClassUnit::RealizationModifier::ABSTRACT);

    std::shared_ptr<MethodUnit> methodUnit1 = codeCreator->createMethodUnit("testFunc1", "void", 0, 0);
    std::shared_ptr<MethodUnit> methodUnit2 = codeCreator->createMethodUnit("testFunc2", "void", MethodUnit::Modifier::STATIC, MethodUnit::RealizationModifier::FINAL);
    std::shared_ptr<MethodUnit> methodUnit3 = codeCreator->createMethodUnit("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST, MethodUnit::RealizationModifier::ABSTRACT);
    std::shared_ptr<MethodUnit> methodUnit4 = codeCreator->createMethodUnit("testFunc4", "void", MethodUnit::STATIC, 0);
    std::shared_ptr<PrintOperatorUnit> printUnit = codeCreator->createPrintOperatorUnit(R"(Hello, World!\n)");

    try{
        methodUnit4->add(printUnit, 0);
        myClass->add(methodUnit1, ClassUnit::PUBLIC);
        myClass->add(methodUnit2, ClassUnit::PRIVATE);
        myClass->add(methodUnit3, ClassUnit::PUBLIC);
        myClass->add(methodUnit4, ClassUnit::PRIVATE);
    }catch (ExceptionsUnit *e){
        cout << e->what() << endl;
    }

    return myClass->compile(0);
}

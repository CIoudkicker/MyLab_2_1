#include "mainwindow.h"
#include <QApplication>

#include "ClassUnit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"


#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

#include "FactoryCode.h"
#include "CppFactoryCode.h"
#include "CSharpFactoryCode.h"
#include "JavaFactoryCode.h"
#include "GenerateProgram.h"

using namespace std;

void PrintAll(FactoryCode *fc){

    GenerateProgram *gp = new GenerateProgram(fc);


    std::cout << gp->generateProgram() << std::endl;
    delete fc;
    delete gp;
}

int main(int argc, char *argv[])
{
    FactoryCode *fc = new JavaFactoryCode();

    PrintAll(new CppFactoryCode());
    PrintAll(new JavaFactoryCode());
    PrintAll(new CSharpFactoryCode());


    GenerateProgram *gp = new GenerateProgram(fc);



    std::cout << gp->generateProgram() << std::endl;
    delete fc;
    delete gp;
/*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
*/
    return 1;
}

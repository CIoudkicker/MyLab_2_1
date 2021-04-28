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
#include "GenerateProgram.h"

using namespace std;

int main(int argc, char *argv[])
{
    FactoryCode *fc = new CppFactoryCode();
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

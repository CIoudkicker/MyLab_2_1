#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>
#include "PrintOperatorUnit.h"


class CppPrintOperatorUnit : public PrintOperatorUnit {

    public:

        explicit CppPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit(text) { }

        std::string compile(unsigned int level) const;

};

#endif // CPPPRINTOPERATORUNIT_H

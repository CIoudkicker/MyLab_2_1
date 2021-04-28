#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

#include "PrintOperatorUnit.h"


class JavaPrintOperatorUnit : public PrintOperatorUnit {

    public:

        explicit JavaPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit(text) { }

        std::string compile(unsigned int level) const;

};

#endif // JAVAPRINTOPERATORUNIT_H

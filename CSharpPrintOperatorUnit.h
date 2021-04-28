#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H

#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

#include "PrintOperatorUnit.h"


class CSharpPrintOperatorUnit : public PrintOperatorUnit {

    public:

        explicit CSharpPrintOperatorUnit( const std::string& text ) : PrintOperatorUnit(text) { }

        std::string compile(unsigned int level) const;

};
#endif // CSHARPPRINTOPERATORUNIT_H

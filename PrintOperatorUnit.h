#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H
#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>


class PrintOperatorUnit : public Unit {

    public:

        explicit PrintOperatorUnit( const std::string& text ) : m_text( text ) { }

        std::string compile(unsigned int level) const;

    private:

        std::string m_text;
};

#endif // PRINTOPERATORUNIT_H

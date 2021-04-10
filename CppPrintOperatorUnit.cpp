#include "CppPrintOperatorUnit.h"

std::string CppPrintOperatorUnit::compile( unsigned int level = 0 ) const {
    return generateShift( level ) + "printf( \"" + m_text
            + "\" );\n";
}

#include "JavaPrintOperatorUnit.h"

std::string JavaPrintOperatorUnit::compile( unsigned int level = 0 ) const {
    return generateShift( level ) + "printf( \"" + m_text
            + "\" );\n";
}

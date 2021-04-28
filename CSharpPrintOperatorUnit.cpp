#include "CSharpPrintOperatorUnit.h"

std::string CSharpPrintOperatorUnit::compile( unsigned int level = 0 ) const {
    return generateShift( level ) + "printf( \"" + m_text
            + "\" );\n";
}

#include "PrintOperatorUnit.h"


std::string PrintOperatorUnit::compile( unsigned int level = 0 ) const {
    return generateShift( level ) + "printf( \"" + m_text
            + "\" );\n";
}

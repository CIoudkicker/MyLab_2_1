#include "JavaMethodUnit.h"

const std::vector< std::string > JavaMethodUnit::REALIZATION_MODIFIERS = {
    "",
    "final",
    "abstract"
};

void JavaMethodUnit::add( const std::shared_ptr< Unit >& unit, Flags = 0 ) {
    m_body.push_back( unit );
}

std::string JavaMethodUnit::compile( unsigned int level = 0 ) const {
    std::string result = generateShift( level );
    if( m_flags & STATIC ) {
        result += "static ";
    } else if( m_flags & VIRTUAL ) {
        result += "virtual ";
    }
    if(m_final > 0){
        result += REALIZATION_MODIFIERS[m_final] + " ";
    }
    result += m_returnType + " ";
    result += m_name + "()";
    if( m_flags & CONST ) {
        result += " const";
    }
    result += " {\n";
    for( const auto& b : m_body ) {
        result += b->compile( level + 1 );
    }
    result += generateShift( level ) + "}\n";
    return result;
}

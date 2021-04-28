#include "CSharpMethodUnit.h"

void CSharpMethodUnit::add( const std::shared_ptr< Unit >& unit, Flags = 0 ) {
    m_body.push_back( unit );
}

std::string CSharpMethodUnit::compile( unsigned int level = 0 ) const {
    std::string result = generateShift( level );
    if( m_flags & STATIC ) {
        result += "static ";
    } else if( m_flags & VIRTUAL ) {
        result += "virtual ";
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

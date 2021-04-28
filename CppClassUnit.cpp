#include "CppClassUnit.h"
#include "ExceptionsUnit.h"

const std::vector< std::string > CppClassUnit::ACCESS_MODIFIERS = {
    "public",
    "protected",
    "private"
};

void CppClassUnit::add( const std::shared_ptr< Unit >& unit, Flags flags ) {
    int accessModifier = PRIVATE;

    if(ACCESS_MODIFIERS.size()-1 < flags){
        AddException *addException = new AddException("Exception wrong access modifiers ");
        throw addException;
    }else
    if( flags != accessModifier ) {
        accessModifier = flags;
    }

    m_fields[ accessModifier ].push_back( unit );
}

std::string CppClassUnit::compile( unsigned int level = 0 ) const{

    std::string result = generateShift( level ) + "class " + m_name + " {\n";

    for( size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i ) {
         if( m_fields[ i ].empty() ) {
            continue;
         }

         result += ACCESS_MODIFIERS[ i ] + ":\n";

         for( const auto& f : m_fields[ i ] ) {
            result += f->compile( level + 1 );
         }
            result += "\n";
     }
         result += generateShift( level ) + "};\n";
         return result;
}

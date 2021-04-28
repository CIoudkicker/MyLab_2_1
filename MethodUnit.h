#ifndef METHODUNIT_H
#define METHODUNIT_H
#include "Unit.h"
#include <iostream>
#include <memory>
#include <vector>

class MethodUnit : public Unit{
    public:

        enum Modifier {
            STATIC = 1,
            CONST = 1 << 1,
            VIRTUAL = 1 << 2
        };

        enum RealizationModifier{
            FINAL = 1,
            ABSTRACT
        };

        MethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :
            m_name( name ), m_returnType( returnType ), m_flags( flags ) { }

        MethodUnit( const std::string& name, const std::string& returnType, Flags flags, Final final ) :
            m_name( name ), m_returnType( returnType ), m_flags( flags ), m_final(final) { }

        virtual void add( const std::shared_ptr< Unit >& unit, Flags flags) = 0;

        virtual std::string compile( unsigned int level ) const = 0;

    protected:

        std::string m_name;
        std::string m_returnType;
        Flags m_flags;
        Final m_final;
        std::vector< std::shared_ptr< Unit > > m_body;

};

#endif // METHODUNIT_H

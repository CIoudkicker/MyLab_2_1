#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include "Unit.h"

#include <iostream>
#include <memory>
#include <vector>



class ClassUnit : public Unit{

    public:

        enum AccessModifier {
            PUBLIC,
            PROTECTED,
            PRIVATE,
            PROTECTED_INTERNAL,
            PRIVATE_PROTECTED,
            INTERNAL
        };


        ClassUnit( const std::string& name ) : m_name( name ) {
            m_fields.resize( ACCESS_MODIFIERS.size() );
        }

        ClassUnit( const std::string& name, Flags flag) : m_name(name), m_flags(flag) {
            m_fields.resize( ACCESS_MODIFIERS.size() );
        }

        ClassUnit(){};

        virtual ~ClassUnit(){};
        virtual void add( const std::shared_ptr< Unit >& unit, Flags flags ) = 0;
        virtual std::string compile(unsigned int level) const = 0;

    protected:
        static const std::vector< std::string > ACCESS_MODIFIERS;
        std::string m_name;
        Flags m_flags;
        using Fields = std::vector< std::shared_ptr< Unit > >;
        std::vector< Fields > m_fields;
};

#endif // CLASSUNIT_H

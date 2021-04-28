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


        enum RealizationModifier{
            FINAL = 1,
            ABSTRACT
        };

        ClassUnit( const std::string& name) : m_name(name){
            m_fields.resize( ACCESS_MODIFIERS.size() );
        }

        ClassUnit( const std::string& name, Flags flag) : m_name(name), m_flags(flag) {
            m_fields.resize( ACCESS_MODIFIERS.size() );
        }

        ClassUnit( const std::string& name, Flags flag, Final final) : m_name(name), m_flags(flag), m_final(final) {
            m_fields.resize( ACCESS_MODIFIERS.size() );
        }

        ClassUnit(){};

        virtual ~ClassUnit(){};
        virtual void add( const std::shared_ptr< Unit >& unit, Flags flags ) = 0;
        virtual std::string compile(unsigned int level) const = 0;

    protected:
        static const std::vector< std::string > ACCESS_MODIFIERS;
        static const std::vector< std::string > REALIZATION_MODIFIERS;
        std::string m_name;
        Flags m_flags;
        Final m_final;
        using Fields = std::vector< std::shared_ptr< Unit > >;
        std::vector< Fields > m_fields;
};

#endif // CLASSUNIT_H

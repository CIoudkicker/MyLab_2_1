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
            PRIVATE
        };

        static const std::vector< std::string > ACCESS_MODIFIERS;

        ClassUnit( const std::string& name ) : m_name( name ) {
            m_fields.resize( ACCESS_MODIFIERS.size() );
        }

        virtual ~ClassUnit(){};
        void add( const std::shared_ptr< Unit >& unit, Flags flags );

        std::string compile(unsigned int level) const;

    private:

        std::string m_name;
        using Fields = std::vector< std::shared_ptr< Unit > >;
        std::vector< Fields > m_fields;
};

#endif // CLASSUNIT_H

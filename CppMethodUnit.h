#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H

#include "MethodUnit.h"

class CppMethodUnit : public MethodUnit{

    public:

        enum Modifier {
            STATIC = 1,
            CONST = 1 << 1,
            VIRTUAL = 1 << 2
        };

        CppMethodUnit( const std::string& name, const std::string& returnType, Flags flags ) : MethodUnit(name, returnType, flags) { }

        void add( const std::shared_ptr< Unit >& unit, Flags flags);

        std::string compile( unsigned int level ) const;

};

#endif // CPPMETHODUNIT_H

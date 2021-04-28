#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H

#include "MethodUnit.h"

class JavaMethodUnit : public MethodUnit{
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

        static const std::vector< std::string > REALIZATION_MODIFIERS;

        JavaMethodUnit(const std::string& name, const std::string& returnType, Flags flags) : MethodUnit(name, returnType, flags) { }

        JavaMethodUnit(const std::string& name, const std::string& returnType, Flags flags, Final final) : MethodUnit(name, returnType, flags, final) { }

        void add( const std::shared_ptr< Unit >& unit, Flags flags);

        std::string compile( unsigned int level ) const;
};

#endif // JAVAMETHODUNIT_H

#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H
#include <ClassUnit.h>

#include <iostream>
#include <memory>
#include <vector>

class CSharpClassUnit : public ClassUnit{

    public:

        enum AccessModifier {
            PUBLIC,
            PROTECTED,
            PRIVATE,
            PROTECTED_INTERNAL,
            PRIVATE_PROTECTED,
            INTERNAL
        };

        static const std::vector< std::string > ACCESS_MODIFIERS;

        CSharpClassUnit( const std::string& name ) : ClassUnit(name){};

        CSharpClassUnit( const std::string& name, Flags flag ) : ClassUnit(name, flag){};

        virtual ~CSharpClassUnit(){};
        void add( const std::shared_ptr< Unit >& unit, Flags flags );

        std::string compile(unsigned int level) const;

};

#endif // CSHARPCLASSUNIT_H

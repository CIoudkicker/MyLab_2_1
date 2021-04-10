#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H
#include <ClassUnit.h>

#include <iostream>
#include <memory>
#include <vector>

class CppClassUnit : public ClassUnit{

    public:

        enum AccessModifier {
            PUBLIC,
            PROTECTED,
            PRIVATE
        };

        static const std::vector< std::string > ACCESS_MODIFIERS;

        CppClassUnit( const std::string& name ) : ClassUnit(name){};

        virtual ~CppClassUnit(){};
        void add( const std::shared_ptr< Unit >& unit, Flags flags );

        std::string compile(unsigned int level) const;

};

#endif // CPPCLASSUNIT_H

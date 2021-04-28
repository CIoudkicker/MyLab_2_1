#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include <ClassUnit.h>

#include <iostream>
#include <memory>
#include <vector>

class JavaClassUnit : public ClassUnit{

    public:

        enum AccessModifier {
            PUBLIC,
            PROTECTED,
            PRIVATE
        };

        enum RealizationModifier{
            FINAL = 1,
            ABSTRACT
        };


        static const std::vector< std::string > ACCESS_MODIFIERS;
        static const std::vector< std::string > REALIZATION_MODIFIERS;

        JavaClassUnit( const std::string& name ) : ClassUnit(name){};

        JavaClassUnit( const std::string& name, Flags flag ) : ClassUnit(name, flag){};

        JavaClassUnit( const std::string& name, Flags flag, Final final ) : ClassUnit(name, flag, final){};

        virtual ~JavaClassUnit(){};
        void add( const std::shared_ptr< Unit >& unit, Flags flags );

        std::string compile(unsigned int level) const;

};


#endif // JAVACLASSUNIT_H

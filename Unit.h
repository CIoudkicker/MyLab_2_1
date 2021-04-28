#ifndef UNIT_H
#define UNIT_H
#include <iostream>
#include <memory>
#include "ExceptionsUnit.h"

using namespace std;

class Unit{
    public:

        using Flags = unsigned int;

        using Final = unsigned int;

        virtual ~Unit() = default;

        virtual void add(const std::shared_ptr<Unit>&, Flags);

        virtual std::string compile(unsigned int level = 0 ) const = 0;

    protected:

        virtual std::string generateShift( unsigned int level ) const{
            static const auto DEFAULT_SHIFT = " ";
            std::string result;

            for( unsigned int i = 0; i < level; ++i ) {
                result += DEFAULT_SHIFT;
            }
            return result;
        }

};

#endif // UNIT_H

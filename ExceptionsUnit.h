#ifndef EXCEPTIONSUNIT_H
#define EXCEPTIONSUNIT_H

#include "QString"

class ExceptionsUnit{

    public:

        ExceptionsUnit();
        ExceptionsUnit(std::string str);
        ExceptionsUnit(ExceptionsUnit *arg);
        ~ExceptionsUnit();

        std::string what();

    private:

        std::string message;
};

class AddException : public ExceptionsUnit{

    public:
        AddException();
        AddException(std::string str);

};


#endif // EXCEPTIONSUNIT_H

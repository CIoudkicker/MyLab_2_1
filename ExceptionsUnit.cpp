#include "ExceptionsUnit.h"

ExceptionsUnit::ExceptionsUnit(){}

ExceptionsUnit::ExceptionsUnit(std::string str){
    message = str;
}

ExceptionsUnit::ExceptionsUnit(ExceptionsUnit *arg){
    message = arg->message;
}

ExceptionsUnit::~ExceptionsUnit(){}

std::string ExceptionsUnit::what(){
    return message;
}


AddException::AddException() : ExceptionsUnit("Some AddException"){}
AddException::AddException(std::string str): ExceptionsUnit(str){};




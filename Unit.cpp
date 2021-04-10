#include "Unit.h"

// все функции виртуальны


void Unit::add( const std::shared_ptr< Unit >& , Flags ) {
    throw std::runtime_error( "Not supported" );
}

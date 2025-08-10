#include "includes.hpp"
#include "core\hardware\sensor\hc_sr_204.hpp"

unsigned long sensor::hc_sr_204::get_distance( uint8_t trigger_pin, uint8_t echo_pin, int delayMS )
{
    digitalWrite( trigger_pin, HIGH );
    delayMicroseconds( 2 );
    digitalWrite( trigger_pin, LOW );
    delayMicroseconds( 10 );

    unsigned long duration = pulseIn( echo_pin, HIGH, delayMS );
    return ( duration * 0.0343 ) / 2;
}
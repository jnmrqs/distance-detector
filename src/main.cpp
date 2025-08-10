#include "includes.hpp"
#include "core\definitions.hpp"
#include "core\hardware\sensor\hc_sr_204.hpp"

LiquidCrystal_I2C lcd( 0x27, 20, 4 );

void setup( )
{
    const pin_list_t pin_list[] = {
        { PIN_2, INPUT },  // ECHO PIN
        { PIN_3, OUTPUT }, // TRIG PIN
        { PIN_7, OUTPUT }, // RED LED
        { PIN_8, OUTPUT }, // YELLOW LED
        { PIN_9, OUTPUT }, // GREEN LED
    };

    for ( int i = 0; i < sizeof( pin_list ) / sizeof( pin_list[ 0 ] ); i++ )
    {
        pinMode( pin_list[ i ].pin, pin_list[ i ].mode );
    }

    lcd.init( );
    lcd.backlight( );

    Serial.begin( 9600 );
}

void printDistance( const char* range, unsigned long distance )
{
    Serial.print( "Object is " );
    Serial.print( range );
    Serial.print( " from us: " );
    Serial.print( distance );
    Serial.println( " cm" );
}

void loop( )
{
    const pin_list_t pin_list[] = {
        { PIN_7, LOW }, // YELLOW LED
        { PIN_8, LOW }, // RED LED
        { PIN_9, LOW }, // GREEN LED
    };

    for ( int i = 0; i < sizeof( pin_list ) / sizeof( pin_list[ 0 ] ); i++ )
    {
        digitalWrite( pin_list[ i ].pin, pin_list[ i ].mode );
    }

    lcd.clear( );

    unsigned long distance = sensor::hc_sr_204::get_distance( PIN_3, PIN_2, 30000 );

    String distance_formated = String( distance );

    if ( distance >= FAR_THRESHOLD )
    {
        digitalWrite( PIN_9, HIGH );
        printDistance( "Far", distance );
        lcd.print( "Far: " );
        lcd.print( distance_formated );
    }
    else if ( distance >= MEDIUM_MIN && distance <= MEDIUM_MAX )
    {
        digitalWrite( PIN_7, HIGH );
        printDistance( "Medium", distance );
        lcd.print( "Medium: " );
        lcd.print( distance_formated );
    }
    else if ( distance >= NEAR_MIN && distance <= NEAR_MAX )
    {
        digitalWrite( PIN_8, HIGH );
        printDistance( "Near", distance );
        lcd.print( "Near: " );
        lcd.print( distance_formated );
    }
    else
    {
        Serial.print( "Out of range: " );
        Serial.print( distance );
        Serial.println( " cm" );
    }

    delay( DELAY_MS );
}
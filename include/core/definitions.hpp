#ifndef INCLUDE_CORE_DEFINITIONS_HPP
#define INCLUDE_CORE_DEFINITIONS_HPP

// Pin definitions
#define PIN_2 2
#define PIN_3 3
#define PIN_7 7
#define PIN_8 8
#define PIN_9 9

// Distance thresholds (in cm)
#define FAR_THRESHOLD 30
#define MEDIUM_MAX    20
#define MEDIUM_MIN    11
#define NEAR_MAX      10
#define NEAR_MIN      1

typedef struct
{
    uint8_t pin;
    uint8_t mode;
} pin_list_t;

#endif // !INCLUDE_CORE_DEFINITIONS_HPP
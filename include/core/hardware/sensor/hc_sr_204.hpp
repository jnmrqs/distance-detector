#ifndef INCLUDE_CORE_HARDWARE_SENSOR_HC_SR_204_HPP
#define INCLUDE_CORE_HARDWARE_SENSOR_HC_SR_204_HPP

namespace sensor::hc_sr_204
{
    unsigned long get_distance( uint8_t trigger_pin, uint8_t echo_pin, int delayMS );
} // namespace sensor::hc_sr_204

#endif // !INCLUDE_CORE_HARDWARE_SENSOR_HC_SR_204_HPP
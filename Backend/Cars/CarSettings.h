#pragma once
#include <iostream>

namespace CarSettings {
    struct Settings {
        int32_t car_type = 0;
        int32_t angle = 0;
        int32_t minimal_speed = 0;
        int32_t maximal_speed = 0;
        int32_t dist_to_light = 0;
        int32_t speed = 0;
        double position_x = 0;
        double position_y = 0;
    };

    enum class Direction {
        Up, Down, Left, Right
    };

    enum class Turn {
        Left, None, Right
    };
}
#pragma once
#include <iostream>
#include <ctime>
#include <random>
#include "CarSettings.h"

using namespace CarSettings;

class Car {
public:

    Settings car_settings;

    Direction car_direction = Direction::Up;

    Turn car_turn = Turn::None;

    Car() = default;

    ~Car() = default;

    Car(Settings, Direction, Turn);

    Car(Direction, Turn);
};

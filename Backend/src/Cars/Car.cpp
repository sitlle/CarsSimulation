#include "../../Cars/Car.h"
#include "../../UserSettings/UserCarSettings.h"

Car::Car(CarSettings::Settings settings, CarSettings::Direction direction,
         CarSettings::Turn turn) {
    car_settings = settings;
    car_direction = direction;
    car_turn = turn;
}

Car::Car(CarSettings::Direction direction, CarSettings::Turn turn) {
    car_direction = direction;
    car_turn = turn;
    car_settings.speed = UserCarSettings::maximal_speed + UserCarSettings::minimal_speed;
}

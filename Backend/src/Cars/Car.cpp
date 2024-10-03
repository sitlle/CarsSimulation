#include "../../Cars/Car.h"

Car::Car(Settings settings, Direction direction, Turn turn) {
    car_settings = settings;
    car_direction = direction;
    car_turn = turn;
}

Car::Car(Direction direction, Turn turn) {
    car_direction = direction;
    car_turn = turn;
}

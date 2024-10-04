#include <iostream>
#include <vector>
#include "Cars/Car.h"
#include "Cars/Cars.h"
#include "Process/CreateCars.h"
#include "Random.h"

int main() {
    for (int i = 0; i < 10; ++i) {
    CreateCars::CreateRandomCar(CarSettings::Direction::Down, CarSettings::Turn::None,
                                static_cast<double>(Random::mt() % 360),
                                static_cast<double>(Random::mt() % 200),
                                static_cast<double>(Random::mt() % 200));
    }
    return 0;
}

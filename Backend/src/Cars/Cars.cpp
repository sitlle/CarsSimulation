#include "../../Cars/Cars.h"

using namespace CarSettings;

namespace Cars {
    std::vector<Car> cars;

    void UpdateCars() {
        for (auto& car : cars) {
            // update position without turn to left and right
            switch (car.car_direction) {
                case Direction::Up:
                    car.car_settings.position_y++;
                    break;
                case Direction::Down:
                    car.car_settings.position_y--;
                    break;
                case Direction::Left:
                    car.car_settings.position_x--;
                    break;
                case Direction::Right:
                    car.car_settings.position_x++;
                    break;
            }
        }
    }
}
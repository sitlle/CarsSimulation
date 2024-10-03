cmake_minimum_required(VERSION 3.28)
project(CarsSimulation)

set(CMAKE_CXX_STANDARD 20)

add_executable(CarsSimulation Backend/main.cpp
        Backend/Cars/Car.h
        Backend/src/Cars/Car.cpp
        Backend/TrafficLight/Light.h
        Backend/src/TrafficLight/Light.cpp
        Backend/TrafficLight/TrafficLight.h
        Backend/src/TrafficLight/TrafficLight.cpp
        Backend/TrafficLight/LightSettings.h
        Backend/Cars/CarSettings.h
        Backend/Cars/Cars.h
        Backend/src/Cars/Cars.cpp
        Backend/Process/CreateCars.h
        Backend/src/Cars/CreateCars.cpp
        Backend/src/UserSettings/UserLightSettings.cpp
        Backend/src/UserSettings/UserLightSettings.cpp
        Backend/UserSettings/UserCarSettings.h
        Backend/src/UserSettings/UserCarSettings.cpp
        Backend/Random.h
        Backend/src/Random.cpp
)

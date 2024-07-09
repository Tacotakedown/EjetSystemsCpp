/*
 * This File serves as the entry point to the systems running in a single threaded environment. The use of the debug GUI simply causes too much clutter to put in with the main thread
 */

#ifndef EJETSYSTEMS_SYSTEMSMAIN_HPP
#define EJETSYSTEMS_SYSTEMSMAIN_HPP

#include "E170Systems/E170Systems.hpp"

void SystemMain() {
    auto initValues = E170Systems::E170SystemInitializer{
            .altitude = 0.0f,
            .heading=0.0f,
            .pitch=0.0f,
            .bank=0.0f,
            .longitude=0.0f,
            .latitude=0.0f
    };
    auto *systems = new E170Systems::E170Systems(initValues); // I'm going to heap allocate all the system class and if it doesn't work or causes issues, we can go back to stack

    systems->Run();

    delete systems;

}


#endif //EJETSYSTEMS_SYSTEMSMAIN_HPP
//
// Created by Taco on 7/9/2024.
//

#ifndef EJETSYSTEMS_SYSTEM_HPP
#define EJETSYSTEMS_SYSTEM_HPP

#include "E170Systems/E170Systems.hpp"

class System {

public:
    System(E170Systems::E170SystemInitializer &State) : m_SystemState(State) {}

    virtual void Update(float dt) = 0;

private:
    E170Systems::E170SystemInitializer &m_SystemState;

};


#endif //EJETSYSTEMS_SYSTEM_HPP

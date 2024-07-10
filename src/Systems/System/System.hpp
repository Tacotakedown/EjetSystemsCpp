//
// Created by Taco on 7/9/2024.
//

#ifndef EJETSYSTEMS_SYSTEM_HPP
#define EJETSYSTEMS_SYSTEM_HPP


struct E170SystemInitializer {
    float altitude;
    float heading;
    float pitch;
    float bank;
    float longitude;
    float latitude;
};

class System {

public:
    System(E170SystemInitializer &State) : m_SystemState(State) {}

    virtual void Update(float dt) = 0;

private:
    E170SystemInitializer &m_SystemState;

};


#endif //EJETSYSTEMS_SYSTEM_HPP

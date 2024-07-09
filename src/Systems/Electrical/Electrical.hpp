//
// Created by Taco on 7/9/2024.
//

#ifndef EJETSYSTEMS_ELECTRICAL_HPP
#define EJETSYSTEMS_ELECTRICAL_HPP

#include "System/System.hpp"
#include "E170Systems/E170Systems.hpp"


class Electrical : public System {
public:
    Electrical(E170Systems::E170SystemInitializer &state);

    void Update(float dt) override;

};


#endif //EJETSYSTEMS_ELECTRICAL_HPP

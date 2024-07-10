//
// Created by Taco on 7/9/2024.
//

#ifndef EJETSYSTEMS_HYDRAULIC_HPP
#define EJETSYSTEMS_HYDRAULIC_HPP

#include "System/System.hpp"


class Hydraulic : public System {

public:
    Hydraulic(E170SystemInitializer &state);

    void Update(float dt) override;
};


#endif //EJETSYSTEMS_HYDRAULIC_HPP

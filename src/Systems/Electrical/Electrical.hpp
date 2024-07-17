#pragma once

#include "System/System.hpp"

class Electrical final : public System {
public:
    explicit Electrical(E170SystemInitializer &state);


    void Update(float dt) override;
};

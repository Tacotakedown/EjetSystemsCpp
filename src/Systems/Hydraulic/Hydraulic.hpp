#pragma once

#include "System/System.hpp"

class Hydraulic final : public System {
public:
    explicit Hydraulic(E170SystemInitializer &state);

    void Update(float dt) override;
};

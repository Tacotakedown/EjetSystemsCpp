#pragma once

struct E170SystemInitializer {
    float altitude;
    float heading;
    float pitch;
    float bank;
    float longitude;
    float latitude;

    bool abort;
};

class System {
public:
    explicit System(E170SystemInitializer &State) : m_SystemState(State) {
    }

    virtual void Update(float dt) = 0;

protected:
    ~System() = default;

private:
    E170SystemInitializer &m_SystemState;
};

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
    System() = default;

    virtual void Update(float dt) = 0;

protected:
    ~System() = default;


};

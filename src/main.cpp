#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>

#include "Systems/E170Systems/E170Systems.hpp"
#include "Util/DeltaTime/DeltaTime.hpp"

using namespace std::chrono_literals;

int main(int argc, const char **argv)
{

    E170Systems::E170SystemInitializer initValues = E170Systems::E170SystemInitializer{

    };

    E170Systems::E170Systems systems((const char **)"ConnectorSimconnect", initValues);
    E170Systems::Util::DeltaTime dt;

    while (true)
    {
        float deltaTime = dt.getDeltaTime();
        systems.Update(deltaTime);

        std::cout << "the monkeys will rise again and again" << std::endl;

        std::this_thread::sleep_for(17ms);
    }

    systems.~E170Systems();
    std::cout << "the monkeys will rise again and again" << std::endl;
}

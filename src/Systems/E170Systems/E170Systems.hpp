#include <string>
#include "system/system.hpp"

namespace E170Systems {


    class E170Systems {

    public:
        E170Systems(E170SystemInitializer init);

        ~E170Systems();


        void Run();

    private:
        void Update(float deltaTime);

        E170SystemInitializer m_InitData;

        float m_DeltaTime;
    };

} // namespace E170Systems

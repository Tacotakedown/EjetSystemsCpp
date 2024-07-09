#include <string>

namespace E170Systems {

    struct E170SystemInitializer {
        float altitude;
        float heading;
        float pitch;
        float bank;
        float longitude;
        float latitude;
    };

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

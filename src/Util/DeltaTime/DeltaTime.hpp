#include <chrono>

namespace E170Systems::Util
{
    typedef std::chrono::high_resolution_clock highResClock;
    typedef std::chrono::time_point<std::chrono::high_resolution_clock> timePointHighResClock;

    class DeltaTime
    {

    public:
        DeltaTime();
        float getDeltaTime();

    private:
        timePointHighResClock m_LastTime;
    };

} // namespace E170Systems::Util

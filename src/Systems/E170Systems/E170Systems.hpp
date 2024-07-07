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
  E170Systems(const char **simconnectId, E170SystemInitializer init);
  ~E170Systems();

  void Update(float deltaTime);

private:
  E170SystemInitializer m_InitData;
};

} // namespace E170Systems

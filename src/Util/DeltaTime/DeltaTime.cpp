#include "DeltaTime.hpp"

namespace E170Systems::Util {
DeltaTime::DeltaTime() : m_LastTime(highResClock::now()) {}

float DeltaTime::getDeltaTime() {
  auto currentTime = highResClock::now();
  std::chrono::duration<float> deltaTime = currentTime - m_LastTime;
  m_LastTime = currentTime;
  return deltaTime.count();
}

} // namespace E170Systems::Util

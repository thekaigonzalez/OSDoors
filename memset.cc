#include <cstdint>
#include <cstddef>

typedef struct {
  uint16_t *AllocSet;
  
  uint32_t *SecondSet;
  
  uint32_t *SuperAllocSet;
  
  int alreadyAllocator;
} WelcomeScreenAllocator;

int malloc (uint16_t *uint_16, size_t memory)
{
  WelcomeScreenAllocator SCREEN;
  
  return SCREEN.alreadyAllocator;
}

int load(int T) {
  return T;
}

int main() {
  load(malloc (reinterpret_cast<uint16_t *>(1), 3000));
}
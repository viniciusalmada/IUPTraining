#include <cstdlib>
#include "iup.h"

int main()
{
  IupOpen(nullptr, nullptr);
  IupMessage("Windows title", "Hello, World from IUP");
  IupClose();
  return EXIT_SUCCESS;
}

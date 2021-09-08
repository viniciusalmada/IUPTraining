#include <cstdlib>

#include "NoteDialog.h"
#include "iup.h"

int ButtonExitCb(Ihandle* self)
{
  if (self)
    return IUP_CLOSE;
  return IUP_ERROR;
}

int main()
{
  IupOpen(nullptr, nullptr);

  const NoteDialog dlg{};
  dlg.ShowXY(IUP_CENTER, IUP_CENTER);

  IupMainLoop();

  IupClose();
  return EXIT_SUCCESS;
}

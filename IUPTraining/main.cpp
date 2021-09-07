#include <cstdlib>
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

  Ihandle* label = IupLabel("Hello world from IUP");
  Ihandle* button = IupButton("OK", nullptr);
  Ihandle* vbox = IupVbox(label, button, nullptr);

  IupSetAttribute(vbox, "ALIGNMENT", "ACENTER");
  IupSetAttribute(vbox, "GAP", "10");
  IupSetAttribute(vbox, "MARGIN", "10x10");

  Ihandle* dlg = IupDialog(vbox);
  IupSetAttribute(dlg, "TITLE", "Hello world");

  IupSetCallback(button, "ACTION", ButtonExitCb);

  IupShowXY(dlg, IUP_CENTER, IUP_CENTER);

  IupMainLoop();

  IupClose();
  return EXIT_SUCCESS;
}

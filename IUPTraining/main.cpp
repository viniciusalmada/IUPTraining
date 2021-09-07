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

  Ihandle* multitext = IupText(nullptr);
  Ihandle* vbox = IupVbox(multitext, nullptr);

  IupSetAttribute(multitext, "MULTILINE", "YES");
  IupSetAttribute(multitext, "EXPAND", "YES");

  Ihandle* dlg = IupDialog(vbox);
  IupSetAttribute(dlg, "TITLE", "Simple Notepad");
  IupSetAttribute(dlg, "SIZE", "QUARTERxQUARTER");

  IupShowXY(dlg, IUP_CENTER, IUP_CENTER);
  IupSetAttribute(dlg, "USERSIZE", nullptr);

  IupMainLoop();

  IupClose();
  return EXIT_SUCCESS;
}

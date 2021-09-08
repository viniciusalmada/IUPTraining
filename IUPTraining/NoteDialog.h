#ifndef NOTEDIALOG_IUP_TRAINING
#define NOTEDIALOG_IUP_TRAINING
#include <iup.h>

class NoteDialog
{
private:
  Ihandle* m_dlg;

public:
  NoteDialog();

  void ShowXY(int x, int y) const;
};

inline NoteDialog::NoteDialog()
{
  Ihandle* multitext = IupText(nullptr);
  Ihandle* vbox = IupVbox(multitext, nullptr);

  IupSetAttribute(multitext, "MULTILINE", "YES");
  IupSetAttribute(multitext, "EXPAND", "YES");

  m_dlg = IupDialog(vbox);
  IupSetAttribute(m_dlg, "TITLE", "Simple Notepad");
  IupSetAttribute(m_dlg, "SIZE", "QUARTERxQUARTER");

  IupShowXY(m_dlg, IUP_CENTER, IUP_CENTER);
  IupSetAttribute(m_dlg, "USERSIZE", nullptr);
}

inline void NoteDialog::ShowXY(const int x, const int y) const
{
  IupShowXY(m_dlg, x, y);
}



#endif

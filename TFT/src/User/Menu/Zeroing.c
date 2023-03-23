#include "Zeroing.h"
#include "includes.h"

const MENUITEMS zeroItems = {
  // title
  LABEL_ZEROING,
  // icon                          label
  {
    {ICON_ZEROING,                 LABEL_ZEROING},
    {ICON_X_ZEROING,               LABEL_X},
    {ICON_Y_ZEROING,               LABEL_Y},
    {ICON_Z_ZEROING,               LABEL_Z},
    {ICON_BLTOUCH_DEPLOY,          LABEL_PROBING_Z},
    
    {ICON_NULL,                    LABEL_NULL},
    {ICON_NULL,                    LABEL_NULL},
    {ICON_BACK,                    LABEL_BACK},
  }
};

void menuZeroing(void)
{
  KEY_VALUES key_num = KEY_IDLE;

  menuDrawPage(&zeroItems);

  while (MENU_IS(menuZeroing))
  {
    key_num = menuKeyGetValue();
    switch (key_num)
    {
      case KEY_ICON_0: 
        storeCmd("G92 X0 Y0 Z0\n");   
        break;

      case KEY_ICON_1: 
        storeCmd("G92 X0\n");   
        break;

      case KEY_ICON_2: 
        storeCmd("G92 Y0\n"); 
        break;

      case KEY_ICON_3: 
        storeCmd("G92 Z0\n"); 
        break;

      case KEY_ICON_4: 
        // Change G92 Zx.y to your touch plate height
        storeCmd("G38.2 Z0\nG92 Z6.5\nG1 Z16.5 F450\n");
        break;

      case KEY_ICON_7: 
        CLOSE_MENU();      
        break;

      default: 
        break;
    }

    loopProcess();
  }
}

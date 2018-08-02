#include <stdio.h>
#include <windows.h>
#include "display.h"
#include "Generic\Platform\CheckAccount\checkaccount.h"

void Display(void)
{
   char szUserName[MAX_NAME] = "";
   unsigned long dwNameLen = sizeof(szUserName);
   GetUserName(szUserName, &dwNameLen);
   if (0 == CheckAccount(szUserName, &dwNameLen))
   {
      printf("hello[%s]!\n", szUserName);
   }
   else
   {
      printf("%s\n", "get username failed!");
   }
}
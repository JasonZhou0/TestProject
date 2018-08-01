#include <stdio.h>
#include <windows.h>
#include "checkaccount.h"


int CheckAccount(char *name, unsigned int *len)
{
   if (0 < GetUserName(name, len))
   {
      return 0;
   }
   else
   {
      return -1;
   }
}

#include <stdio.h>

int main() {
   char defaultString[20];
   for (int a=0;a < 19; a++){ 
   defaultString[a] =  getchar();
   if (defaultString[a] == '\t') { defaultString[a] = ' ';};
   if (defaultString[a] == '\n') { defaultString[a] = '\0'; break;};
   }
   printf("\n%s",defaultString);
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
char m[17];
strcpy(m,"@akademiasovy.sk");
char firstName[38];
char lastName[20];
char bYear[4];
int i,j;
printf("Enter first name\n");
scanf(" %s",&firstName);
printf ("Enter last name\n");
scanf(" %s",&lastName);
printf ("Enter year of birthday\n");
scanf(" %s",&bYear);
 i = strlen(firstName);
 for(j=0;j<i;j++)tolower(firstName[j]);
 j = strlen(lastName);
for(i=0;i<j;i++)tolower(lastName[i]);
char n =tolower(firstName[0]);
char c [2]={'.','\0'};
char y [2]={bYear[2],bYear[3]};
strcat(firstName ,c);
strcat(firstName, lastName );
strcat(firstName, c );
strcat(firstName, y );
strcat(firstName, m );
printf("%s",firstName);
}

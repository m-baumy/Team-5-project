#include <stdio.h>
#include <string.h>
	
char reverse(char *string) {
int i, len, temp;
len = strlen(string);
for (i = 0; i < len/2; i++) {
temp = string[i];
string[i] = string[len - i - 1];
string[len - i - 1] = temp;
}
}
int i;
void En (char purestr [100],char str [100],int x) {
      for(i = 0; (i < 100 && purestr[i] != '\0'); i++)
          purestr[i] = purestr[i] + 3;
           
          
  	printf("\nEncrypted string: %s\n", purestr);
}
void De(char purestr [100],char str [100],int x) {
      for(i = 0; (i < 100 && purestr[i] != '\0'); i++)
          purestr[i] = purestr[i] - 3;
           printf("\nDecrypted string: %s\n", purestr);  
}

int main() {
   int i, x;
   char str[100];
   char choice ;
   char purestr [100];
   char counter [100];
   while (1) {
 
   printf("\nPlease enter a string:\t");
   scanf(" %[^\n]%*c",str) ;
    reverse(str);
   for (i=0;i<strlen(str);i++)
   {
       purestr[i]=str[i];
   }
   
   printf("\nPlease choose following options:\n");
   printf("1 = Encryption\n");
   printf("2 = Decryption\n");
   scanf("%d", &x);
   if (x == 1) {
   	
   	En (purestr, str, x);
   }
   else if(x ==2) {
   De(purestr, str ,x);
   }
   else {
   	printf("Error");
   }
   
}
return 0 ;
}

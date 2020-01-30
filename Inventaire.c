#include <stdio.h>
#include <string.h>


int main()
{
    char str1[] = "epee", str2[] = "potion", str3[] = "arc";
    int trier;
    
    trier = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", trier);
   
    trier = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", trier);
	
	trier = strcmp(str2, str3);
    printf("strcmp(str2, str3) = %d\n", trier);
	
	
    return 0;
}




#include<stdio.h>
#include<string.h>      
int main()
{   
    char name_one[50];
    char name_two[50];
    printf("\n\nProgram ischeck whether a string is a palindrome or not without using string functions.\n");
    printf("\nEnter any string: "); 
    gets(name_one);

    int lenth=strlen(name_one);
    int p=0;

    for(int i=lenth-1; i>=0; i--) {
        name_two[p]=name_one[i];
        p++;
    }
    name_two[p] = '\0';
    
    // printf("%s",name_two);
    int lenth_s=strlen(name_two);

    // printf("\n'p' = %d.", p);

    // printf("\nname_one = %d.\n", lenth);

    // printf("name_two = %d.\n", lenth_s);

    // printf("\nname_two = %s", name_two);

    int compare=strcmp(name_one,name_two);
    if(compare==0) {
        printf("\nGiven string is a Palindrome.");
    }
    else {
        printf("\nGiven string is not a Palindrome.");
    }


}

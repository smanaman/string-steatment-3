// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int freq[26] = {0};
    int f[26]={0};
    char str[30] = "Development";
    
    for(int i=0; str[i]!='\0'; i++){
       if(str[i] >= 'a' && str[i] <= 'z'){
           freq[str[i] - 'a']++;   
       
       }else if(str[i] >= 'A' && str[i] <= 'Z'){
           f[str[i] - 'A']++;
       }
    }
    
    for(int i=0; i<26; i++){
       if(freq[i]>0){
           printf("%c => %d\n",i+'a',freq[i]);
       } 
    }
    for(int i=0; i<26; i++){
       if(f[i]>0){
           printf("%c => %d\n",i+'A',f[i]);
       } 
    }
    
    
    return 0;

}
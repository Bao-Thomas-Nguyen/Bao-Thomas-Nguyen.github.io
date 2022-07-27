#include <stdio.h>
#include <stdint.h>

 int main(int argc, char const *argv[])
 {
   
    char str1[]= "con-co-be be";
  


     for(int i = 0; i < sizeof(str1); i++)
        {
            if(str1[i] != '-')
            {
                printf(" vi tri:%d,  %c\n ",i,str1[i]);
                
            }
              
        }
       
    
    return 0;
 }
 

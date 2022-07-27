#include <stdio.h>
#include <stdint.h>



int sosanh(char array1[], char array2[])
{
    int len_array1 = 0, len_array2 = 0;

    while (array1[len_array1] != '\0')
        len_array1++;
    while (array2[len_array2] != '\0')
        len_array2++;

    if(len_array1 != len_array2)
        return 0;
    else{
        for(int i = 0; i < len_array1; i++)
        {
            if(array1[i] != array2[i])
                return 0;
        }
        return 1;
    }
}
 

int main()
{
    printf("Nhap chuoi ky tu 1: ");
    char str1[100];
    scanf("%s", str1);
    printf("Nhap chuoi ky tu 2: ");
    char str2[100];
    scanf("%s", str2);
    if(sosanh(str1, str2))
        printf("2 chuoi giong nhau\n");
      
    else 
        printf("2 chuoi khac nhau\n");
    
    return 0;
}
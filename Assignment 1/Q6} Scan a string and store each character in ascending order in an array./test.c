#include<stdio.h> 
int main()
{
    char str[10], temp ;
    int i,j;
    printf("Enter the string:");
    scanf("%[^\n]s", str); 
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0'; j++)
        {
            if(str[i]>str[j])
            {
                 temp = str[i];
                 str[i] = str[j]; 
                 str[j] = temp;
            }

        }

    }
    printf("Sorted the String in Ascending order:\n");
    for(i=0; str[i]!= '\0'; i++)
    {
         printf("%c",str[i]);
    }

}

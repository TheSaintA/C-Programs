#include<stdio.h>
#include<stdlib.h>
int main(){
    int i , j, k, l;
    // Code of first pyramid starts from here
    for( i=1; i<=5; i++)
    {
        for( j=5-i; j>=1; j--)
        {
            printf(" ");
        }
        for( k=1; k<=i; k++)
        {
            printf("%d",k);
        }
        for( l=k-2; l>=1; l--)
        {
            printf("%d",l);
        }
    printf("\n");
    }
    //Code of first pyramid ends here...
    //Code of inverted pyramid starts from here...
    for( i=4; i>=1; i--)
    {
        for( j=5; j>i; j--)
        {
            printf(" ");
        }
        for( k=1; k<=i; k++)
        {
            printf("%d",k);
        }
        for( l=k-2; l>=1; l--)
        {
            printf("%d",l);
        }
    printf("\n");
    }
    //Code of inverted pyramid starts from here...
return 0;
}

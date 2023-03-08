#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=0;
    int even_counter=0;
    int odd_counter=0;
    int *even_ptr;
    int *odd_ptr;
    printf("Enter the n value:\n");
    scanf("%d",&n);
    while(i<n){
        if(i%2==0){
            even_counter++;
        }else{
            odd_counter++;
        }
        i++;
    }
    even_ptr=(int*)malloc(even_counter*sizeof(int));
    odd_ptr=(int*)malloc(odd_counter*sizeof(int));
    for(int j=0;j<n;j++){
        if(j%2==0){
            *(even_ptr+j)=j;
        }else{
            *(odd_ptr+j)=j;
        }
    }
    for(int j=0;j<n;j++){
        if(j%2==0){
            printf("%d\t",*(even_ptr+j));
        }else{
            printf("%d\t",*(odd_ptr+j));
        }
    }
    free(even_ptr);
    free(odd_ptr);
    return 0;
}

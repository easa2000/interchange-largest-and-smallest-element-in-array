// program to interchange the largest and the smallest number in the array

#include<stdio.h>
void main(){
    int n,i,arr[20],small,small_pos,large,large_pos,temp;
    printf("\n Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++){
        printf("\n Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    small_pos = 0;
    large = arr[0];
    large_pos = 0;
    for(i=1;i<n;i++){
        if(arr[i] < small){
            small = arr[i];
            small_pos = i;
        }
        if(arr[i] > large){
            large = arr[i];
            large_pos = i;
        }
    }

    printf("\n The smallest of these numbers is : %d",small);
    printf("\n The position of the smallest number in the array is: %d",small_pos);

    printf("\n The smallest of these numbers is : %d",large);
    printf("\n The position of the smallest number in the array is: %d",large_pos);

    temp = arr[large_pos];
    arr[large_pos] = arr[small_pos];
    arr[small_pos] = temp; 

    for(i=0;i<n;i++){
        printf("\n %d ",arr[i]);
    }

}

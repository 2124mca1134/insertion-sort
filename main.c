
#include <stdio.h>
void insertionSort(int arr[], int items)
{
    int i,j,temp;
    for(i=1; i<items;i++)
    {
        temp =arr[i];
        j = i-1;
    while(arr[j]>temp && j>=0){
        arr[j+1] = arr[j];
         j--;
    }
    arr[j+1]=temp;
}
}
void disp(int arr[], int items){
    int i;
    for(i=0;i<items;i++)
    printf("%d\n",arr[i]);
}
int main()
{
    int arr[]={12,11,13,5,6};
    int items=5,i;
     sizeof(arr[0]);
    insertionSort(arr,items);
    disp(arr,items);
    return 0;
}


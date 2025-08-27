#include <stdlib.h>
int part(int r[],int start,int END){
 int randIndex = start + rand() % (END - start);
    // swap pivot with start
    int temp = r[start];
    r[start] = r[randIndex];
    r[randIndex] = temp;
//above one entire gpt syntax ngl to you 
//beasutiful code but for 5000 elemts it fails i gess recursion sucks ass in tc man
    int x =r[start];
    int i= start;
    for(int j=i+1;j<END;j++){
        if(r[j]<=x){i++;temp=r[i];
        r[i]=r[j];
        r[j]=temp;
        }
    }temp=r[start];
        r[start]=r[i];
        r[i]=temp;  
    return i;
}
int selectt(int arr[],int start,int end ,int target){
int pivot = part(arr,start,end);
    if(pivot==target){return arr[pivot];}
    if(pivot>target){return selectt(arr,start,pivot,target);}
    return selectt(arr,pivot+1,end,target);
}
int findKthLargest(int* nums, int numsSize, int k) {
    return selectt(nums,0,numsSize,numsSize-k);
;}

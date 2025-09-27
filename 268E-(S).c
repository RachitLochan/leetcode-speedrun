int missingNumber(int* nums, int numsSize) {
    int sum=0,total=0;
    
    for(int i=0;i<=numsSize;i++){
        total=total+i;
    }
    for(int i=0;i<numsSize;i++){
        sum=sum+nums[i];
    }
    return total-sum;
}

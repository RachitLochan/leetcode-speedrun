int findPeakElement(int* nums, int numsSize) {
    int i;
    //int num[numsSize+2]               //how to do this in logn man but still beats all 100 they say ok i gess feel good though
    //num[-1] = num[numsSize] = -999999;
    if(numsSize==1){return 0;}
    if(numsSize==2){if(nums[0]<nums[1]){return 1;}}
    for(i=1;i<numsSize-1;i++){
        if(nums[i]>nums[i+1]){if(nums[i]>nums[i-1]){return i;}}
    }
    if(nums[numsSize-1]>nums[numsSize-2]){return numsSize-1;}
    return 0;
}

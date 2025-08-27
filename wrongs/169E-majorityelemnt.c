int majorityElement(int* nums, int numsSize) {
    int num=nums[0],freq=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i-1]==nums[i]){freq++;num=nums[i];}
        if(freq>numsSize/2){return nums[i];}
        else{freq--;num=nums[i];}

    }return num;
}

int majorityElement(int* nums, int numsSize) {
    int num=0,freq=0;
    for(int i=0;i<numsSize;i++){
    
        if(freq==0){num=nums[i];}
        if(num==nums[i]){freq++;}   //tookcode help from swarnim28
        else{freq--;}

    }return num;
}

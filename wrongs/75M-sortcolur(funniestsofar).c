void sortColors(int* nums, int numsSize) {
     int left=0,right=numsSize-1,cur=0;
     while(cur<numsSize){
        int temp=nums[cur];
        if(nums[cur]==0){nums[cur]=nums[left];nums[left]=temp;left++;}
        if(nums[cur]==2){nums[cur]=nums[right];nums[right]=temp;right--;}
        cur++;
     }
}

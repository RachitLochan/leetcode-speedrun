int longestConsecutive(int* nums, int numsSize) {
    ;int count1=0,count2=0,left=0;int max=-9999999;int len=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]>max){max=nums[i];}
    }
   int right=max;
   int arr[max+1];
    for(int i=0; i<max+1; i++){
        arr[i]=0;
    }
    for(int i=0; i<numsSize; i++){
        arr[nums[i]]=nums[i];
    }
    for(int i=0; i<max; i++){

        if(arr[left]==arr[left+1]-1){count1++;}
        left++;
        if(arr[right]==arr[right-1]+1){count2++;}
        right--;
        if(count1>len){len=count1;}
        if(len<count2){len=count2;}
        if(arr[left]==0){count1=0;}
        if(arr[right]==0){count2=0;}
    }return len+1;
}

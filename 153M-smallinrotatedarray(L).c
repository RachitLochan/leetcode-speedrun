int findMin(int* nums, int numsSize) {int start=0,end=numsSize-1;
    
    
        while(start<end){
            if(nums[start]<nums[end]){return nums[start];}
        int mid=(start+end)/2;
        if(nums[mid]>nums[end]){start=mid+1;}
        else{end=mid;}
        }return nums[start];
           
}

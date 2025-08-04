int searchInsert(int* nums, int numsSize, int target) {
    int low,high,mid;

    low=0;high=numsSize-1;

while(low<=high){
    mid=(low+high)/2;
    if(nums[mid]==target){return mid;}

    if(nums[mid]>target){
        high=mid-1;
    }
    if(nums[mid]<target){
        low=mid+1;
    }
}   
    return low;//great leassion isted of mid return daym Prashant_here
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

int*sol=(int*)malloc(2*sizeof(int)); //dono why for soem reason but it usees the break 

int start =0;int end=numsSize-1;int mid;int first=-1,last=-1; //-1 for some reason
    while(start<=end){
        mid=(start+end)/2;
        if(nums[mid]==target){if(mid==0||nums[mid-1]!=target){first=mid;break;}else{end=mid-1;}} //super genios logic by  Mohammed Raziullah Ansari//searh left thats why 1 more else here 
        else if(nums[mid]<target){start=mid+1;}
        else{end=mid-1;} // (nums[mid]>target)
        
    }
    start=0;end=numsSize-1;

    while(start<=end){
        mid=(start+end)/2;
        if(nums[mid]==target){if(mid==numsSize-1||nums[mid+1]!=target){last=mid;break;}else{start=mid+1;}} //in shock from such a bif brain move man will def use this 
        else if(nums[mid]<target){start=mid+1;}
        else{end=mid-1;} //(nums[mid]>target)
    } sol[0]=first;sol[1]=last;
    *returnSize=2;
    return sol;
}/*This still won’t work correctly in all cases, because you left out the loop progression when a match is found but isn’t the boundary case.
Right now, if nums[mid] == target and mid isn’t the first (or last) occurrence, you don’t change start or end — meaning mid stays the same forever and the loop can run infinitely.

Example that will hang:

c
Copy
Edit
nums = [5, 5, 5], target = 5 */

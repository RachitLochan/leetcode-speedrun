int singleNonDuplicate(int* nums, int numsSize) {
int mid=numsSize/2;int start=0;int end=numsSize-1;
while(start<=end){    //i used to do while(mid > 1 || mid < numsSize) this is wrong
if(mid==0){return nums[0];} //edge case gpt ofc

if(mid==numsSize-1){return nums[numsSize-1];}         //the below error is fixed here now

if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){return nums[mid];} //here eroor occorecd as if mid is last mid+1 is unknown

    else if(mid%2==0)
    {//the side you match is the side to go 
    if(nums[mid]==nums[mid+1]){start=mid+1;}
    else if(nums[mid]==nums[mid-1]){end=mid-1;}
    }

else if(mid%2!=0) //odd //match side is left as it is paired so no odd
{
if(nums[mid]==nums[mid+1]){end=mid-1;}
else if (nums[mid]==nums[mid-1]){start=mid+1;}
}mid=(start+end)/2;
     }
          return nums[mid];  } 

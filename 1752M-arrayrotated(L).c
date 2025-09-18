bool check(int* nums, int numsSize) { int count=0;

if(nums[numsSize-1]>nums[0]){count++;}   // edge cases are as floowes array is true if it is soreted and not roated as roation at 0 is allawoesd
    for(int i=0;i<numsSize-1;i++){       // if rotater more than 2 times thasn it is invalid ofc
        if(nums[i]>nums[i+1])            // invaid id unsorted or decresing or not soreted
        count++;
        if(count>1){return false;}
    }if(count>1){return false;}
    else {return true;} 
}

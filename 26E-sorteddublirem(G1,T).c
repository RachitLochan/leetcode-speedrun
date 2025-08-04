int removeDuplicates(int* nums, int numsSize) {
    int count=0;
    int k=0;

    for(int i=0;i<numsSize;i=i+count){
        count=0;
        for(int j=i;j<numsSize;j++){   //was using crazy nums[i]!=nums[j] in for  middle line (j<numsSize)loop dono if that way works or not 
            if(nums[i]==nums[j]){count++;}
        
        }
        nums[k]=nums[i];
        k++;
    }return k;
}

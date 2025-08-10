int singleNumber(int* nums, int numsSize) { int result=0;
    for(int i=0;i<numsSize;i++){
        
        result^=nums[i];
    }return result;
    
}/* hash tried but forgot
if(numsSize==1){return numsSize[0];}
    int hash[numsSize+1];
    for(int i=0;i<numsSize+1;i++){
        hash[i]=0;
    }
    for(int i=0;i<numsSize;i++){
        hash[i]=nums[i]%numsSize+1;
    }
    for(int i=0;i<numsSize+1;i++){
        if(hash[i]==1){return ;}
    }*/

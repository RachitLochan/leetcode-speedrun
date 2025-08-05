void moveZeroes(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){                                //abolutly hate it thought of the logic myself but had to gpt like 4 times of the numsize-- as it wont
            for(int j=i;j<numsSize-1;j++){            //take in the loop itslef a new variable last that i do last-- 
                nums[j]=nums[j+1];                    //still stuffed up from the i-- thiung i need tharapy for being this stupid
            }nums[numsSize-1]=0;i--;numsSize--;
        }
    }
}


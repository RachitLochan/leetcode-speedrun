int maxSubArray(int* nums, int numsSize) {
    int sum=0;int max=-9999999;int bigger=0;
    for(int i=0;i<numsSize; i++){
        sum+=nums[i];
        if(sum>max){bigger=sum;}
        else{bigger=max;}
        if(sum<0){sum=0;}
        max=bigger;
    }
    return max;
}
//probably the fasted time i have solver an medium question thanks apna collage in under 10 mins

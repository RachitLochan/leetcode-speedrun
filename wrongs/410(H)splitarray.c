int splitArray(int* nums, int numsSize, int k) {
    int leftarray[numsSize],rightarray[numsSize],sum=0,visit[numsSize];
    memset(visit, 0, sizeof(visit));
    //leftarray[numsSize]=99999999;
    //rightarray[numssize]=99999999;
    for(int i=0;i<numsSize;i++){
        sum=sum+nums[i];
        leftarray[i]=sum;
    }
    for(int i=0;i<numsSize;i++){
        sum=sum-nums[i];
        rightarray[i]=sum;
        
    }
//can do a search on left and right if left bif go left if right big go right
    sum=numsSize/2;//reuse to save space lol
    while(visit[1]=0){
        if(leftarray[sum]>rightarray[sum]){sum--;visit[sum]=visit[sum]+1;}
        if(leftarray[sum]<rightarray[sum]){sum++;visit[sum]=visit[sum]+1;}
        if(visit[sum]>1){break;}
        }
        if(leftarray[sum]<rightarray[sum]){return rightarray[sum]; }
        else return leftarray[sum];

return 0;
}

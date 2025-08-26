int trap(int* height, int heightSize) {
    int sum=0;
    int leftheight[heightSize];
    int rightheight[heightSize];
    int max=0;
    for(int i=heightSize-1;i>=0;i--){
        
        if(height[i]>max){max=height[i];
        rightheight[i]=height[i];}
        else{rightheight[i]=max;}
    }
    max=0;
    for(int i=0;i<heightSize;i++){
        
        if(height[i]>max)
        {max=height[i];leftheight[i]=height[i];}
        else{leftheight[i]=max;}
    }
    for(int i=0;i<heightSize;i++){
        if(leftheight[i]<rightheight[i]){
            sum=(sum+leftheight[i])-height[i];
        }
        else{sum=(sum+rightheight[i])-height[i];}
    }
    return sum;}
// happy tired rexaxed on my first leetcode hard thans neetcode did my fiesr opensoure issue raise too today on wrong run case of Q347

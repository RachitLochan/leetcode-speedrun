int minEatingSpeed(int* piles, int pilesSize, int h) {
    int max=piles[0];int min=piles[0];
    int start=1; float value=0.0;
    int end;
    for(int i=0;i<pilesSize;i++){
        if(piles[i]>max){max=piles[i];}
        if(piles[i]<min){min=piles[i];}
    }end=max;
    if (pilesSize==h){return max;}
    int mid;
    while(start<end){
    mid=(start+end)/2;
    for(int i=0;i<pilesSize;i++){
        float calc = (float)piles[i]/mid;
        if(calc<1){calc=1;}
        float checker=calc;
        int intcalc = checker;
        if(calc>intcalc){calc=intcalc+1;}
    value+=calc;
    }
    if (value==h){return mid;}
    if(value>h){start=mid+1;}
    if(value<h){end=mid;}  //Use end = mid for minimum problems Use end = mid - 1 for maximum problems
    value=0;
    }


return mid;}

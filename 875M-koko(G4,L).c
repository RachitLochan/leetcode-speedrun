#include<math.h>
int minEatingSpeed(int* piles, int pilesSize, int h) {
    int max=piles[0];int min=piles[0];
    int start=1; long long value=0;
    int end;
    for(int i=0;i<pilesSize;i++){
        if(piles[i]>max){max=piles[i];}
        if(piles[i]<min){min=piles[i];}
    }end=max;
    if (pilesSize==h){return max;}
    int mid;
    while(start<end){
    value=0;
    mid=(start+end)/2;
    for(int i=0;i<pilesSize;i++){
      value += (piles[i] + mid - 1) / mid;//value += (int)ceil(piles[i] / mid);
    }
    // if (value==h){return mid;} not needed as lowest needed and self handeld i gesss
    if(value>h){start=mid+1;}
    if(value<=h){end=mid;}  //used <and=h//Use end = mid for minimum problems Use end = mid - 1 for maximum problems
    
    }


return start;}//not return mid man(you are mid man)

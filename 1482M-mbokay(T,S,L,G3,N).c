int possible(int day,int m,int k,int bloomDaySize,int arr[]){
int boq=0,count=0;
for (int i=0;i<bloomDaySize;i++){
    if(arr[i]<=day){count++;}
    else{boq=boq+count/k;count=0;}
}
boq += count / k; // this line is MISSING gpt says make sence as last one we exit the loop
if(m<=boq){return 1;}
else return -1;

    
}
int minDays(int* bloomDay, int bloomDaySize, int m, int k) {
    int result=-1,mid,max=bloomDay[0],min=bloomDay[0];
    if((long long)m*k>bloomDaySize){return -1;}
    for (int i=0;i<bloomDaySize;i++){
        if(bloomDay[i]>max){max=bloomDay[i];}
        if(bloomDay[i]<min){min=bloomDay[i];}
    }//int high=max,low=min; no need man
    while(min<=max){
        mid=(min+max)/2;
        if (possible(mid,m,k,bloomDaySize, bloomDay)==1)
        {result = mid;max=mid-1;}
        if (possible(mid,m,k,bloomDaySize, bloomDay)==-1){min=mid+1;}
    }return result;
}

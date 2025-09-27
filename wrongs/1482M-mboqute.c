int minDays(int* bloomDay, int bloomDaySize, int m, int k) {int day=0,max=0,j=0;
    if(bloomDaySize<m*k){return -1;}
    for(int i=0;i<bloomDaySize;i++){
        if(bloomDay[i]>max){max=bloomDay[i];}
    }
    for(int i=0;i<max;i++){int k1=k;
       while(k1>0)
       { 
        if(bloomDay[j]==bloomDay[j+1])
        {k1--;;j++;}
       else{k1=-1;}
       }
       if(k1==0){m--;}
       day++;
    }if(m==0){return day;}
    else return -1;
}

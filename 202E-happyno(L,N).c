bool isHappy(int n) {int sum;
    
        if(n==1 || n== 7){return true;}
        if(n<10) {return false;}
    
    else{
        sum=0;
        while(n>0){
        int last=n%10;
    sum=sum+(last*last);
    n=n/10;//remove last and again calulate
    }
    }return isHappy(sum) ;   //recursuin but why understanfd
}

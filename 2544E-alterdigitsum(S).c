int alternateDigitSum(int n) {
    int i=0,j=0,k=0;
    //first reverse
    while(n>0){
        i=n%10;
        j=j*10+i;
        n=n/10;
    }
    n=j;
    i=1,j=0;
    while(n>0){
        j=n%10;
        k=k+i*j;
        i=i*-1;
        n=n/10;
    }return k;
}

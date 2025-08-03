int fib(int n){
    int fibt[9999];
    fibt[0]=0;
    fibt[1]=1;
    if(n>1){
    for(int i=2;i<=n;i++){
        fibt[i]=fibt[i-1]+fibt[i-2];
    }}
    return fibt[n];
}

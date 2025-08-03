int fib(int n){
    if(n<2){return n;}
    int one =0;
    int two =1;
    int sol=0;
    for(int i=2;i<=n;i++){
        sol=one+two;
        one=two;
        two=sol; //dsaym smart use recusroion with no recustion daym
    }
    return sol;
}

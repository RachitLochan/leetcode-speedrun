int climbStairs(int n) {
    if (n<4){return n;}
    int first =2;
    int second =3;
    for(int i=3;i<n;i++){
       int temp=first;
        first=second;
        second=temp+first;
    }
return second;
}
//just understand more ddeply again with neetcode

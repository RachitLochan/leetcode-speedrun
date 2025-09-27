#define MOD 1000000007

long long quickmaths(int x,long long xp){ //why long long underdatndfd 
long long res=1;
long long mul=x;
while(xp>0){
    if(xp%2==1){res=(res*mul)% MOD;}
    mul = (mul * mul) % MOD; //smaller asn logic
    xp=xp/2;//binary convert
}
return res;
}

int countGoodNumbers(long long n) {
    //as far as my understaning all 5 even numbers allowed in even place and 4 prime no allowe on odd place
    // #define MOD 1000000007 basically a cp terick

return (int)(((quickmaths(5, (n + 1) / 2) % MOD) * (quickmaths(4, n / 2) % MOD)) % MOD);

}

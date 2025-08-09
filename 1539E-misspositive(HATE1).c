int findKthPositive(int* arr, int arrSize, int k) {
    int miss=0;
    int n=0;
    int k1=0;int i=1;
    while(k!=k1){           //my idea to use a while insted of for as i do fro k and dont know a limit for k and 
        if(n<arrSize)        // and it is said that if in for conition the terminating variavle is changeing it gives erreo hence while loop
        {
            if(i==arr[n]){n++;i++;}           //i just wanna say onr thing thati still dont inderstand else and else if pplz help me universe p[lz plz plz
            else
            {
                miss=i;i++;k1++;
            }
        }
    else {miss=i;i++;k1++;}
    }
return miss;
}


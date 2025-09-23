int addDigits(int num) {int last,sum;
    if(num<10){return num;}
    else{
        while(num>0){last=num%10;
    sum=sum+last;
    num=num/10;
    }}                               //i used logic from happy num bers 202 question recustion way daym it works man
    return addDigits(sum);
}

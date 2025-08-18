int romanToInt(char* s) {
    int digit=0;int size = strlen(s);int x[size];int j=0;
    for(int i=0; i<size; i++){
    if(s[i]=='I'){x[j]=1;} //dont use"" appranty use ''
    if(s[i]=='V'){x[j]=5;}
    if(s[i]=='X'){x[j]=10;}
    if(s[i]=='L'){x[j]=50;}
    if(s[i]=='C'){x[j]=100;}
    if(s[i]=='M'){x[j]=1000;}
    if(s[i]=='D'){x[j]=500;}
    j++;
    }j  =0;
//i canuse a dumb trick and use just 1 for  loop by dp stlye initialise last and seond last then check in all loop i fit lower or higher and add but nah mkae last two and keep making and checkin next from last again and agaibnn in looop but nah
 for(int i=size-1; i>=0; i--){
    
    //if(i==0){if (x[0]<x[1]){digit=digit+x[i];}else{digit=digit-x[i];}}
    
    if(i==size-1 ||  x[i]>=x[i+1]){digit=digit+x[i];} // was doing i==0 ||  x[i]<=x[i-1] ulta check did lil work but    
    else{digit=digit-x[i];}
    
 }
return digit;
}

bool isPalindrome(char* s) {
    //97 to 122 small 65 to 90 big 48 to 57 numbers
    int size=0;
    for(int i=0;s[i]!='\0';i++){
                if((s[i]>=97 && s[i]<=122 )|| (s[i]>=48 && s[i]<=57) || (s[i]>=65 && s[i]<=90)) {size++;}
        if(s[i]>=65 && s[i]<=90){s[i]=s[i]+32;}
  
       }
        
    char rev[size+1];
    char arr[size+1];int a=0;

        for(int i=0;s[i]!='\0';i++){

        if((s[i]>=97 && s[i]<=122 )|| (s[i]>=48 && s[i]<=57)){
            arr[a]=s[i];a++;
        }
    }arr[a]='\0';a=0;
    for(int i=strlen(s)-1;i>=0;i--){ 
        
        if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
            rev[a]=s[i];a++;
        }}rev[a]='\0';
    
    for(int i=0;rev[i]!='\0';i++){
        if(arr[i]!=rev[i]){return false;}
    }

    return true;
}

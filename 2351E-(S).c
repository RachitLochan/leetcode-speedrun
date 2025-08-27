char repeatedCharacter(char* s) {
int i=0;int f[26]={0};
    while(s[i]!='\0'){
        int a = s[i] -'a';
        f[a]=f[a]+1;
        if(f[a]>1){return s[i];}
        i++; 
    }
    return s[i];
}//please learn bit maulupaion and do this next time with bits

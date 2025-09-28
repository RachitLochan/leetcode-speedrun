void reverse(int start, int end, char* s) {
    while (start < end) {
        char temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
    }
}

char* reverseWords(char* s) {
    int n = strlen(s);
    
   
    reverse(0, n - 1, s);

    
    int i = 0, j = 0;
    while (i < n) {
       
        while (i < n && s[i] == ' ') i++;

     
        while (i < n && s[i] != ' ') s[j++] = s[i++];

       
        while (i < n && s[i] == ' ') i++;

     
        if (i < n) s[j++] = ' ';
    }
    s[j] = '\0'; 

    
    int start = 0;
    for (i = 0; i <= j; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(start, i - 1, s);
            start = i + 1;
        }
    }

    return s;
}

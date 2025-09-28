char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB ? lenA : lenB) + 2; // +1 for carry, +1 for '\0'

    char* result = (char*)malloc(maxLen);
    result[maxLen - 1] = '\0';

    int i = lenA - 1;
    int j = lenB - 1;
    int k = maxLen - 2;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0) ? a[i--] - '0' : 0;
        int bitB = (j >= 0) ? b[j--] - '0' : 0;
        int sum = bitA + bitB + carry;
        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    return result + k + 1;
}

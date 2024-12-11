bool isMark(char c) {
    return c == ' ' || c == '.' || c == ',' || c == '\0';
}

int wordLen(char*& a, int i, int& cl) {
    int res = 0;
    while (!isMark(a[i])) {
        res++;
        i += 1 + (((int)a[i] >> 7) & 1);
    }
    cl = i - 1;
    return res;
}

char* changeText(char*& a, char*& b, int k) {
    char* ans = new char[200];
    int n = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        int cLen = 0, len = wordLen(a, i, cLen);
        if (len == 0) {
            ans[n++] = a[i];
            continue;
        }
        if (len == k) {
            for (int j = 0; b[j] != '\0'; j++) {
                ans[n++] = b[j];
            }
        }
        else {
            while (i <= cLen) {
                ans[n++] = a[i++];
            }
        }
        i = cLen;
    }
    ans[n] = '\0';
    return ans;
}
char* shortest(char*& s, int n) {
    int j = 0, cnt = 0, ans = 100;
    for (int i = 0; i < n; i++) {
        cnt++;
        if (s[i] != s[i + 1]) {
            if (cnt < ans) {
                ans = cnt;
                j = i - cnt + 1;
            }
            cnt = 0;
        }
    }
    char *res = new char[ans + 1];
    for (int i = 0; i < ans; i++) {
        res[i] = s[j];
    }
    res[ans] = '\0';
    return res;
}

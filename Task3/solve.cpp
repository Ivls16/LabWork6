int ctoi(char*& a, int i, int sz) {
    int res = 0;
    for (; sz-- && a[i] != '\0'; i++) {
        res <<= 8;
        res += (int)a[i];
    }
    return res;
}

int count(char*& a, int i, int sz, int code) {
    int res = 0;
    for (; a[i] != '\0'; i += sz) {
        if (ctoi(a, i, sz) == code) {
            res++;
        }
        else {
            break;
        }
    }
    return res;
}

void archive(char*& a, char*& ans) {
    int n = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        int sz = ((((int)a[i] >> 7)) & 1) + 1;
        int code = ctoi(a, i, sz);
        int cnt = count(a, i, sz, code);
        if (cnt > 1) {
            ans[n++] = (char)255;
            if (cnt > 10) {
                ans[n++] = (char)('0' + cnt / 10);
            }
            ans[n++] = (char)('0' + cnt % 10);
        }
        for (int j = 0; j < sz; j++) {
            ans[n++] = a[i + j];
        }
        i += sz * cnt - 1;
    }
    ans[n] = '\0';
}
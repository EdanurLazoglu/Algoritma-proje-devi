<pre>```cpp 
#include <iostream>
#include <vector>
using namespace std;

// LPS dizisini oluþturur.
void computeLPSArray(const string &pattern, vector<int> &lps) {
    int length = 0;
    lps[0] = 0;
    int i = 1;

    while (i < pattern.length()) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1]; // Geri gitmeyi saðlar
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// KMP algoritmasý metin içinde desen arar.
void KMPSearch(const string &text, const string &pattern) {
    int n = text.length();
    int m = pattern.length();

    vector<int> lps(m);
    computeLPSArray(pattern, lps);

    int i = 0; // metin için indeks
    int j = 0; // desen için indeks

    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            cout << "Desen bulundu, indeks: " << i - j << endl;
            j = lps[j - 1]; // eþleþme bitti, devam et.
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0) {
                j = lps[j - 1]; // geri dönmeyi saðlar.
            } else {
                i++;
            }
        }
    }
}

// Test Örneði
int main() {
    string text = "ababcabcabababd";
    string pattern = "ababd";```

    KMPSearch(text, pattern);

    return 0;
}
```<pre>

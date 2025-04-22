#include <iostream>
#include <string>
using namespace std;

void binString(int n, int lastPlace, string ans) {
    if (n == 0) {
        cout << ans << endl;
        return;
    }

  

    // Add '1' in the next place only if the last place was not '1'
    if (lastPlace != 1) {
        binString(n - 1, 1, ans + '1'); //lastPlace keeps track of whether the last added digit was 1 or 0.
        binString(n - 1, 0, ans + '0'); //lastPlace keeps track of whether the last added digit was 1 or 0.
    }else{
         binString(n - 1, 0, ans + '0');
    }
}

int main() {
    string ans = "";
    binString(3, 0, ans); // Generate binary strings of length 3
    return 0;
}

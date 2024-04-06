#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> so;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        so.insert(num);
    }

    cout << so.size() << endl;

    return 0;
}

#include <iostream>
#include <set>
#include <queue>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    set<int> seen;
    queue<int> q;
    seen.insert(N);
    q.push(N);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        if (curr - A > 0 && seen.find(curr - A) == seen.end()) {
            seen.insert(curr - A);
            q.push(curr - A);
        }
        if (curr - B > 0 && seen.find(curr - B) == seen.end()) {
            seen.insert(curr - B);
            q.push(curr - B);
        }
    }
    cout << seen.size();
    return 0;
}
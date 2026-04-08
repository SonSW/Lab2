#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int l) {
    if(vec.size() >= M) {
        for(int x : vec)
            cout << x+1 << " ";
        cout << endl;
    } else {
        for(int i=l; i<=N-M+vec.size(); i++) {
            vec.push_back(i);
            func(i+1);
            vec.pop_back();
        }
    }
}

int main() {
    cin >> N >> M;
    func(0);
}

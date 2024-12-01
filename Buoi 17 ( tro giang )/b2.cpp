//Graph
//chuyen tu danh sach ke sang danh sach canh

#include <bits/stdc++.h>

using namespace std;
vector<string> adj[1001];
void xuly(int i, string s){
    stringstream ss(s);
    string word;
    while(ss >> word){
        int j = stoi(word);
        if(j > i){
            cout << i << ' ' << j << endl;
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    for(int i = 1; i <= m ; i++){
        string s;
        getline(cin, s);
        xuly(i, s);
    }
    
    return 0;
}
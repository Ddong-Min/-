#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    string str, pat;
    cin >> str >> pat;
    int pos = -1, num=0, idx=0;
    vector<queue<int>> q(26, queue<int>()); //왜 queue<int>()에서 괄호는 왜 쓴것일까
    
    for(int i=0; i<str.size();i++){
        q[str[i]-'a'].push(i);
    }

    while(1){
        int ch = pat[idx]-'a';
        while(!q[ch].empty() && pos > q[ch].front()){
            q[ch].pop();
        }
        if(!q[ch].empty()){
            pos=q[ch].front();
            q[ch].pop();
        }
        else{
            break;
        }
        idx++;

        if(idx == pat.size()){
            idx=0;
            pos=-1;
            num++;
        }
    }
    cout << num;
}

#include <bits/stdc++.h>
using namespace std;

#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define PQ priority_queue
#define LEN(v) int(v.size())
#define ALL(v) v.begin(),v.end()
#define INF 2e9
#define LINF 1e18
#define MAX 100002

vector<int> v;

int main(){
	int N, X, T, ans=0;
	cin >> N >> X;
	for(int i=0; i<N; i++){
		cin >> T;
		v.push_back(T);
	}
	while(1){
		for(int i=0; i<N; i++){
			if(v[i]-X < 0){
				ans = (i+1);
				break;
			}
			X++;
		}
		if(ans) break;
	}
	cout << ans;
}
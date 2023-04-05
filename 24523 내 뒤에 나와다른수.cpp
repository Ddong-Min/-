
/*실패한 풀이 ..... 시간초과
#include<iostream>
using namespace std;

int main(){
    int n, min;
    int* arr;
    cin >> n;
    arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        min = -1;
        for(int j=i+1; j<n; j++){
            if(arr[i] != arr[j] && min == -1) min = j+1; //다른 값이 나온 첫경우
            else if(arr[i] != arr[j]){  
                if(arr[min] > arr[j]) min = j+1;
            } // 다른 값이 나온 두번째 이상의 경우
        }
        cout << min << " ";
    }
    free(arr);
}
*/

/*성공한 풀이
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, min;
    int* arr;
    cin >> n;
    vector<int> a(n+1);
    vector<int> b(n+1, -1);   

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    
    int idx = -1; 
    for(int i=n; i>1; i--){
        b[i]=idx;
        if(a[i-1]!=a[i]){
            idx = i;
        }
    }
    b[1]=idx;
    for(int i=1; i<=n; i++){
        cout << b[i]  << " ";
    }

}
*/
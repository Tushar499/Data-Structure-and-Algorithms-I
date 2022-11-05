#include<iostream>
using namespace std;

struct Res{
    int mx;
    int mn;
};

Res find_maxmin(int A[], int i, int j){

    if (i==j){
//        Res res;
//        res.mx = A[i];
//        res.mn = A[i];
//        return res;
//        Res res = {A[i], A[i]};
//        return res;
        return {A[i], A[i]};
    } else {
        int mid = (i+j)/2;
        Res res1 = find_maxmin(A, i, mid);
        Res res2 = find_maxmin(A, mid+1, j);
        int mx = max(res1.mx, res2.mx);
        int mn = min(res1.mn, res2.mn);
        return {mx, mn};
    }
}


int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    Res res = find_maxmin(A, 0, n-1);
    cout << res.mx << " " << res.mn << endl;
}

/**
5
5 3 -1 10 7
*/


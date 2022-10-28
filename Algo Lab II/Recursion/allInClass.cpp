#include<iostream>
using namespace std;

/// 2 * 3 * 3 + 4 * 5 * 2 + 8 * 7 * 1 + 16 * 9 * 0 +

int series(int first, int second, int third, int n){
    if (n==1){
        return first*second*third;
    } else {
        return first*second*third
            + series(first*2, second+2, third-1, n-1);
    }
}


int calc_evensum2(int A[], int n){
    if (n<0){
        return 0;
    }
    else {
        if (A[n]%2==0)
            return calc_evensum2(A, n-1)+A[n];
        else
            return calc_evensum2(A, n-1);
    }
}

int calc_evensum(int A[], int n){
    if (n==0){
        if (A[n]%2) return A[n];
        else return 0;
    }
    else {
        if (A[n]%2==0)
            return calc_evensum(A, n-1)+A[n];
        else
            return calc_evensum(A, n-1);

    }
}


int calc_sum(int A[], int n){
    if (n==0) return A[0];
    else {
        return calc_sum(A, n-1)+A[n];
    }
}

void print_odd(int A[], int n){
    if (n<0) return;
    else {
        print_odd(A,n-1);
        if (A[n]%2!=0)
            cout << A[n] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    print_odd(A, n-1);
    cout << calc_sum(A, n-1) << endl;
}

/**
4
10 5 -3 -6
*/

/*
void print_special(int a, int b){
    if (a>b) return;
    else {
        if (is_special(a))
            cout << a << " ";
        print_special(a+1, b);
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    print_even(x, y);
}
*/

/*
void print_even2(int a, int b){
    if (a>b) return;
    else {
        cout << a << " ";
        print_even2(a+2, b);
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    if (x%2!=0) x++;
    print_even2(x, y);
}
*/

/*
void print_even(int a, int b){
    if (a>b) return;
    else {
        if (a%2==0) cout << a << " ";
        print_even(a+1, b);
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    print_even(x, y);
}
*/

/*
int fib(int n){
    if (n==1)
        return 0;
    else if (n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}
*/


/*
int power(int x, int y){
    if (y==0)
        return 1;
    else
        return x*power(x,y-1);
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << endl;
}
*/

/*
long Fact(int n){
    if (n==0)
        return 1;
    else
        return Fact(n-1)*n;
}

int main(){
    int n;
    cin >> n;
    cout << Fact(n) << endl;
}
*/

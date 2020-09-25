#include<bits/stdc++.h>
using namespace std;

#define MAX 20
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int main() {
    int n,k;
    int a[MAX];
    cin>>n>>k;
    nhapMang(a,n);
    sort(a,a+n);
    int min = a[k-1] - a[0];
    for(int i=0;i<=n-k;i++) {
        if(a[i+k-1] - a[i] < min)
            min = a[i+k-1] - a[i];
    }
    cout<<min;
    return 0;
}

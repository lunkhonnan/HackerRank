#include <bits/stdc++.h>

using namespace std;
#define MAX 100000
void nhapMang(int a[],int b[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
}
// sap xep dua nhung phan tu co t[i] = 1 len dau
void sort1(int a[],int b[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            if(b[j] < b[j+1]) {
                swap(b[j],b[j+1]);
                swap(a[j],a[j+1]);
            }
        }
    }
}
// sap xep l[i] giam dan
void sort(int a[],int b[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] < a[j+1] && b[j+1] == 1)
                swap(a[j],a[j+1]);
        }
    }
}
int compareValue(int a[],int b[],int n,int k) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        while(k-->0) {
            sum += a[i];
            i++;
        }
        if(b[i] == 0)   
            sum += a[i];
        else sum -= a[i];
    }
    return sum;
}
int main() {
    int n,k;
    int a[MAX];
    int b[MAX];
    cin>>n>>k;
    nhapMang(a,b,n);
    sort1(a,b,n);
    sort(a,b,n);
    cout<<compareValue(a,b,n,k);
    return 0;
}
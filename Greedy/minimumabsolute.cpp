#include<bits/stdc++.h>
using namespace std;

void nhapMang(int a[],long long n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int problem(int a[],long long n) {
    int min = abs(a[0]-a[1]);
    int i = 0;
    while(i<n) {
        int j=0;
        while(j<n) {
            if(min > abs(a[i] - a[j]) && i!=j) {
                min = abs(a[i] - a[j]);
                break;
            }
            j++;
        }
        i++;
    }
    return min;
}
int main() {
    long long n;
    int a[100000];
    cin>>n;
    nhapMang(a,n);
    cout<<problem(a,n)<<endl;
    return 0;
}
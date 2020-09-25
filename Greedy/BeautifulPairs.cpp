#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
bool chuaxet[100];
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++) {
        chuaxet[a[i]] = true;
        cin>>a[i];
    }
}
void problem(int a[],int b[],int n) {
    int i=0;
    int count = 0;
    while(i<n) {
        int j=0;
        while(j<n) {
            if(a[i] == b[j] && chuaxet[a[i]] == true) {
                chuaxet[a[i]] == false;
                count++;
            }
            j++;
        }
        i++;    
    }
    cout<<count;
}
int main() {
    int n;
    int a[MAX],b[MAX];
    cin>>n;
    nhapMang(a,n);
    nhapMang(b,n);
    sort(a,a+n);
    sort(b,b+n);
    problem(a,b,n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
vector<int> s;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void problem(int a[],int n) {
    
}
int main() {
    int a[MAX];
    int n;
    cin>>n;
    nhapMang(a,n);
    // sort(a,a+n);
    problem(a,n);
    int sum = 0;
    for(int i=0;i<s.size();i++)
        cout<<s[i];
    // cout<<sum;
    return 0;
}
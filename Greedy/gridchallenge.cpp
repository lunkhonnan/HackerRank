#include <bits/stdc++.h>

#define MAX 100000
using namespace std;
void nhapMang(char a[][MAX],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
}
void swap(char &a,char &b) {
    char temp = a;
        a = b;
        b =temp;
}
void problem(char a[][MAX],int n) {
    int i=0;
    while(i<n) {
        for(int j=0;j<n-1;j++) {
            if(a[i][j] > a[i][j+1]) 
                swap(a[i][j],a[i][j+1]);
        }
        for(int j=0;j<n-1;j++) {
            if(a[j][i] > a[j+1][i])
                swap(a[j][i],a[j+1][i]);
        }
        i++;
    }
}
int main() {
    char a[MAX][MAX];
    int n;
    cin>>n;
    nhapMang(a,n);
    problem(a,n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            cout<<a[i][j];
            cout<<endl;
    }
    return 0;
}
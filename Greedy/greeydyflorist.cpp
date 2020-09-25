// Moi nguoi mua mot bong hoa cho den khi du K nguoi thi tang previousPurchases ++
#include<bits/stdc++.h>
using namespace std;

#define MAX 50
void nhapMang(int cost[],int n) {
    for(int i=0;i<n;i++)
        cin>>cost[i];
}
int problem(int cost[],int n,int k) {
    int minCost = 0;
    int previousPurchases = 0;
    int tempCount = 0;
    if(k>=n) {
        for(int i=0;i<n;i++)
            minCost += cost[i];
    }
    else {
        for(int i=n-1;i>=0;i--) {
            if(tempCount == k) {
                tempCount = 0;
                previousPurchases++;
            }
            minCost += cost[i]*(previousPurchases + 1);
            tempCount ++;
        }
    }
    return minCost;
}
int main() {
    int n,k;
    int cost[MAX];
    cin>>n>>k;
    nhapMang(cost,n);
    sort(cost,cost+n);
    cout<<problem(cost,n,k);
    return 0;
}

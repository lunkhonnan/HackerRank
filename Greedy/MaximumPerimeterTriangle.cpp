    #include<bits/stdc++.h>
    using namespace std;

    #define MAX 100000
    bool have = 0;

    void nhapMang(int s[],int n) {
        for(int i=0;i<n;i++)
            cin>>s[i];
    }
    void problem(int s[],int n) {
        int i=n-1;
        while(i>=2) {
            int j=i-1;
            int t=j-1;
            while(t != -1) {
                if((s[i] + s[j] > s[t]) && (s[j] + s[t] > s[i]) && (s[t] + s[i]  > s[j])) {
                    cout<<s[t]<<" "<<s[j]<<" "<<s[i];
                    have = 1;
                    return;
                }
                t--;
            }
            i--;
        }
        if(!have) {
            cout<<-1;
        }
    }
    int main() {
        int s[MAX];
        int n;
        cin>>n;
        nhapMang(s,n);
        sort(s,s+n);
        problem(s,n);
        return 0;
    }
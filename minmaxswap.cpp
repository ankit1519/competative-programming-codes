#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                int temp=a[i];
                a[i]=b[i];
                b[i]=temp;
            }
        }
        int a1=*max_element(a, a + n);
        int b1=*max_element(b, b + n);
        cout<<a1*b1<<endl;
    }
    return 0;
}
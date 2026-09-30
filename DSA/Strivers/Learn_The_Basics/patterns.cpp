#include <bits/stdc++.h>
using namespace std;

void p1(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<"*";
        }
        cout<<endl;
    }   
}

void p2(int n){
    for(int i=n;i>0;i--){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
void p2(int n){
for(int i=0;i<n;i++){
for(int j=0;j<=i;j++){
cout<<"*";
}
cout<<endl;
}
}
*/

void p3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void p4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void p5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";    
        }
        cout<<endl;
    }
}

/*
void p5(int n){
for(int i=1;i<=n;i++){
for(int j=0;j<(n-i+1);j++){
cout<<"*";
}
cout<<endl;
}
}
*/
 
/*
void p6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<(j+1);
        }
        cout<<endl;
    }
}*/


void p6(int n){
for(int i=n;i>0;i--){
for(int j=1;j<=i;j++){
cout<<j;
}
cout<<endl;
}
}

void p7(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<(n-i);j++) cout<<" ";
        for(int j=0;j<((2*i)+1);j++) cout<<"*";
        for(int j=1;j<n-i;j++) cout<<" ";
        cout<<endl;
    }
}

void p8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++) cout<<" ";
        for(int j=0;j<(2*(n-i)-1);j++) cout<<"*";
        for(int j=0;j<i;j++) cout<<" ";
        cout<<endl;
    }
}

void p9(int n){
    p7(n);
    p8(n);
}

void p10(int n){
    for(int i=0;i<(2*n)-1;i++){
        if(i<n){
            for(int j=0;j<=i;j++) cout<<"*";
            cout<<endl;
        }
        else {
            for(int j=0;j<((2*n)-i-1);j++) cout<<"*";
            cout<<endl;
        }

    }
}

void p11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0 && j%2==0) cout<<"1";
            else if(i%2!=0 && j%2!=0) cout<<"1";
            else if(i%2!=0 && j%2==0) cout<<"0";
            else cout<<"0";
        }
        cout<<endl;
    }
}

/*
void p11(int n){
    int num=1;
for(int i=0;i<n;i++){
if(i%2==0) num=1;
else num=0;
for(int j=0;j<=i;j++){
cout<<num;
num=1-num;
}
cout<<endl;
}
}
*/

void p12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j;
        for(int j=0;j<(2*(n-i));j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<(i-j+1);
        //for(int j=i;j>=1;j++) cout<<j;
        cout<<endl;
    }
}

void p13(int n){
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
}

void p14(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++) cout<<j;
        cout<<endl;
    }
}

void p15(int n){
    for(int i=n;i>0;i--){
        for(char j='A';j<'A'+i;j++) cout<<j;
        cout<<endl;
    }
}

/*
void p15(int n){
for(int i=0;i<n;i++){
for(char j='A';j<'A'+(n-i);j++) cout<<j;
cout<<endl;
}
}
*/

void p16(int n){
    for(int i=0;i<n;i++){
        char k='A'+i;
        for(char j='A';j<='A'+i;j++) cout<<k;
        cout<<endl;
    } 
}

void p17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++) cout<<" ";
        char ch ='A';
        for(int j=0;j<(2*i+1);j++){
            cout<<ch;
            if(j<i) ch++;
            //if(j<=((2*i)+1)/2) ch++;
            else ch--;
        }
        for(int j=0;j<(n-i-1);j++) cout<<" ";
        cout<<endl;
    }
}

void p18(int n){
    for(int i=n;i>0;i--){
        char ch = 'A';
        for(int j=0;j<=(n-i);j++) cout<<char(ch+(i+j-1));
        cout<<endl;
    }
}

/*
void p18(int n){
for(int i=0;i<n;i++){
for(char j='E'-i;j<='E';j++){
cout<<j;
}
cout<<endl; 
}
}
*/

void p19(int n){
for(int i=0;i<2*n;i++){
    if(i<n){
        for(int j=n;j>i;j--) cout<<"*";
        for(int j=0;j<2*i;j++) cout<<" ";
        for(int j=n;j>i;j--) cout<<"*";
        cout<<endl;
    }
    else{
        for(int j=0;j<=(i-n);j++) cout<<"*";
        for(int j=0;j<2*(2*n-i-1);j++) cout<<" ";
        for(int j=0;j<=(i-n);j++) cout<<"*";
        cout<<endl;
    }
}
}

void p20(int n){
    for(int i=0;i<(2*n)-1;i++){
        if(i<n){
            for(int j=0;j<=i;j++) cout<<"*";
            for(int j=0;j<2*(n-i-1);j++) cout<<" ";
            for(int j=0;j<=i;j++) cout<<"*";
            cout<<endl;
        }
        else{
            for(int j=0;j<(2*n)-i-1;j++) cout<<"*";
            for(int j=0;j<2*(i-n+1);j++) cout<<" ";
            for(int j=0;j<(2*n)-i-1;j++) cout<<"*";
            cout<<endl;
        }
    }
}

/*
void p201(int n){
    int spaces =2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
        cout<<"*";
        }
        for(int j=1;j<=spaces;j++){
        cout<<" ";
        }
        for(int j=1;j<=stars;j++){
        cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces -=2;
        else spaces +=2;
    }
}
*/

void p21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}  

/*
void p22(int n){
    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){

            for(int k=1; k<=n; k++){
                if(i==k || i==2*n-k || j==k || j==2*n-k){
                    cout << n-k+1<< "  ";
                    break;
                }
            }
        }
        cout << endl;
    }
}
*/

void p22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){

            int k = n - min({i, j, 2*n-2-i, 2*n-2-j});

            cout << k;
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        p1(n);
        //p2(n);
        //p3(n);
        //p4(n);
        //p5(n);
        //p6(n);
        //p7(n);
        //p8(n);
        //p9(n);
        //p10(n);
        //p11(n);
        //p12(n);
        //p13(n); 
        //p14(n);
        //p15(n);
        //p16(n);
        //p17(n);
        //p18(n);
        //p19(n);
        //p20(n);
        //p21(n);
        //p22(n);

}  
}


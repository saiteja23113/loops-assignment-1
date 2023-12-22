/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
1.
#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<100;i++){
        if(i%2!=0) cout<<i<<" ";
    }

    return 0;
}

2
#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<100;i++){
        if(i%3==0) cout<<i<<" ";
    }

    return 0;
}

3
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n*i<<endl;
    }

    return 0;
}

4
#include <iostream>

using namespace std;

int main()
{
    int a=4;
    int d=3;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a+(i-1)*d<<" ";
    }

    return 0;
}

5
#include <iostream>

using namespace std;

int main()
{
    int a=3;
    int d=4;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a*=d;
       
    }

    return 0;
}

6
#include <iostream>

using namespace std;

int main()
{
    for(int i=65;i<91;i++){
        cout<<char(i)<<" ";
    }
    cout<<endl;
    for(int i=97;i<=122;i++){
        cout<<char(i)<<" ";
    }

    return 0;
}
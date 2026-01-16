/* Dimik Poblem 10
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        double fin = (b*6.0)/(300.0-c);
        int x;
        double req;
        if(b>a)
        {
            req=0.0;
        }
        else{
            x=((a + 1)-b);
            req=(x*6.0)/c;
        }
        printf("%0.2lf %0.2lf\n",fin,req);


    }
}
Dimik - 11
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int num;
        scanf("%d",&num);
        long long fact=1;
        for(int j=1;j<=num;j++)
        {
            fact=fact*j;
        }
        printf("%lld\n",fact);
    }
}
Dimik - 12
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int num;
        scanf("%d",&num);
        long long x=5;
        int zeros=0;
        while(x<=num)
        {
            zeros=zeros+num/x;
            x=x*5;
        }
        printf("%d\n",zeros);
    }
}
Dimik -17
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        char str[1001];
        gets(str);
        int j=0;
        int vowels=0;
        while(str[j]!='\0')
        {
            if(str[j]=='a'||str[j]=='A'||str[j]=='e'||str[j]=='E'||str[j]=='i'||str[j]=='I'||str[j]=='o'||str[j]=='O'||str[j]=='u'||str[j]=='U')
                vowels=vowels+1;
            j++;
        }
        printf("Number of vowels = %d\n",vowels);
    }
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0) n=n+1;
    for(int i=1;i<=6;i++)
    {
        printf("%d\n",n);
        n=n+2;
    }
}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
        printf("%d^2 = %d\n",i,i*i);
}

E swap
#include<stdio.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d\n",x,y);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
}

F

#include<stdio.h>

void solve()
{
    int x,n;
    scanf("%d %d",&x,&n);
    int sum=0;
    for(int i=0;i<=n;i=i+2)
    {
        int p=1;
        for(int j=1;j<=i;j++)
            p=p*x;
        sum=sum+p;
    }
    printf("%d\n",sum);
}

int main()
{
    solve();
}
#include <stdio.h>

void solve(int row,int n)
{
    if(row>n) return;
    for(int i=1;i<=n-row;i++)
        printf(" ");
    for(int i=1;i<=2*row-1;i++)
        printf("*");
    printf("\n");
    solve(row+1,n);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve(1,n);
}*/
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0;
    if(a>b)
    {
        int x=a;
        a=b;
        b=x;
    }
    for(int i=a+1;i<b;i++)
        if(i%2!=0)
            sum=sum+i;
    printf("%d\n",sum);
}





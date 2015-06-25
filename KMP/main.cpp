#include <iostream>
#include <string.h>

using namespace std;

int KMP(char *p, char *q)
{
    int a[11] = {0}, i = 0,j = 1, flag = 0, targ = 1;//用于记录匹配表
    while(j < strlen(q))
    {
        flag = 0;
        i = 0;
        j = targ;
        if(q[i]!= q[j])
        {
            j++;
            targ = j;
        }
        else
        {
            flag++;
            if(a[j] == 0)
            a[j] = flag;
            while((q[i++] == q[j++])&& (j < strlen(q)))
            {
                flag++;
                if(a[j] == 0)
                a[j] = flag;
            }
        }
    }
    i = 0;
    while(i < strlen(p))
    {
        j = 0;
        if (p[i] != q[j])
        {
            i++;
            continue;
        }
        else
        {
            targ = i;
            while (p[++i] == q[++j])
            {
                //cout<<j<<endl;
                //cout<<strlen(q)<<endl;
                if(j == strlen(q) - 1)
                {
                    //cout<<"OK"<<endl;
                    return targ;
                }
            }
            i = targ + j - a[j -1];
        }
    }
    return -1;
}
int main()
{
    char m[100];//主匹配项
    char n[10];//要求查找项
    cout << "input your main word" << endl;
    cin.getline(m, 100);
  //  cout<<strlen(m)<<endl;
    cout<<"input your match word"<<endl;
    cin.getline(n,10);

    int k = KMP(m,n);
    if (k == -1)
    {
        cout<<"can not find"<<endl;
    }
    else
    {
        cout<<"pass and the value is "<<k<<endl;
    }

    return 0;
}

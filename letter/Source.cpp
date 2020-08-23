#include<iostream>
#include<string>
int main()
{
    using namespace std;

    int i = 0, u = 0, l = 0;
    char a[10000], c;
    cin >> a;
    while (a[i])
    {
        c = a[i];
        if (islower(c))
        {
            l++;
        }
        if (isupper(c))
        {
            u++;
        }
        i++;
    }
    if (l == 0 && u != 0)
    {
       cout<<"All Capital Letter";
    }
    else if (l != 0 && u == 0)
    {
        cout << "All Small Letter";
    }
    else
    {
        cout << "Mix";
    }
}

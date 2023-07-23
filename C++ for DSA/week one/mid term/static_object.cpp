//Yes It is possible...

#include<bits/stdc++.h>
using namespace std;
class staticobject
{
    public:
        int x;

        staticobject(int y)
        {
            x=y;
        }
};
//funtion returning a static object
staticobject fun()
{
    static staticobject object(10000);//static object
    return object;
}

int main()
{
    staticobject value=fun();
    cout<<value.x;
      
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float x[10],y[10],sxy=0, sxsy=0, sx2=0, sxw2=0,sx=0,sy=0;
    cin>>n;

    float a0,a1;

    for(int i=0;i<n; i++)
    {
        cin>>x[i]>>y[i];
        sxy = sxy+(x[i]*y[i]);
        sx = sx+x[i];
        sy = sy+y[i];
        sx2 = sx2 + (x[i]*x[i]);
    }


    cout<<"Sxy = "<<sxy<<endl;
    cout<<"SxSy = "<<sx*sy<<endl;
    cout<<"Sx2 = "<<sx2<<endl;
    cout<<"Sxw2 = "<<sx*sx<<endl;

    a1 = ((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
    a0 = (sy/n)-(a1*(sx/n));

    cout <<"Y = "<<a0<<" + "<<a1<<" X"<<endl;

}

#include <iostream>
// #pragma pack(1)

using namespace std;

struct Zaq
{
    int q:1;
    int w;
    int e:2;
};

struct Zaw
{
    int q:1;
    int e:2;
    int w;
};

struct Zsq
{
    int q:30;
    int e:2;
    int w;
};

struct Zsw
{
    int len;
    int data[0];
};


void zz(int *x)
{
    cout<<*x<<"\n";
    *x = 22; // not modified, but dont do this
}


int main()
{

    cout<<sizeof(Zaq)<<"\n";
    cout<<sizeof(Zaw)<<"\n";
    cout<<sizeof(Zsq)<<"\n";
    cout<<sizeof(Zsw)<<"\n";

    // Zsw *packet = static_cast<Zsw*>(new uint8_t[30]);    //doesnt work
    Zsw *packet = reinterpret_cast<Zsw*>(new uint8_t[30]);
    packet->len = 10;
    packet->data[2] = 33;

    cout<<sizeof(&packet)<<"\n";

    const int x = 33;
    // zz(&x); // doesnt work
    zz(const_cast<int*>(&x));
    cout<<x<<"\n";


    return 0;
}

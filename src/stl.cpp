#include<iostream>
#include<vector>
#include<array>

using namespace std;

int  main()
{
    vector<int> v_x;
    vector<int>::iterator v_it;
    
    v_x.push_back(99);
    cout << v_x.size() << "\n";
    
    v_x.resize(10);
    cout << v_x.size() << "\n";

    v_x.reserve(20);
    cout << "reserve \n";
    cout << v_x.size() << "\n";
    cout << v_x.capacity() << "\n";

    cout << "loop \n";
    for(v_it = v_x.begin(); v_it != v_x.end(); v_it++)
    {
        cout << *v_it << "\n";
    }

    cout << "------------\n";

    array<int, 10> a_x;
    array<int, 10>::iterator a_it;
    
    a_x[22] = 9;
    a_x.at(22) = 9; // throws error
    cout << a_x.size() << "\n";
    

    cout << "loop \n";
    for(a_it = a_x.begin(); a_it != a_x.end(); a_it++)
    {
        cout << *a_it << "\n";
    }

    cout << "------------\n";
    

    return 0;
}

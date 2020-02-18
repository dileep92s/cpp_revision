#include<iostream>
#include<array>

using namespace std;

class SortingAlgo
{
    protected:
    array<int,10> arr{4,3,2,6,7,1,9,5,8,0};

    public:
    virtual void sort() = 0;
    virtual ~SortingAlgo() = default;
    virtual void printArr();
};

void SortingAlgo::printArr()
{
    array<int,10>::const_iterator it;

    for(it = arr.cbegin(); it!=arr.cend(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";
}

class InsertionSort: public SortingAlgo
{
    public:
    void sort()
    {
        for(uint i=0; i<arr.size(); i++)
        {
            for(uint j=i+1; j<arr.size(); j++)
            {
                if(arr[j] < arr[i])
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
};


class BubbleSort: public SortingAlgo
{
    public:
    void sort()
    {
        for(uint i=0; i<arr.size(); i++)
        {
            for(uint j=0; j<arr.size()-1; j++)
            {
                if(arr[j+1] < arr[j])
                {
                    int tmp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = tmp;
                }
            }
        }

    }

};

int main()
{
    SortingAlgo *algo = new BubbleSort;
    algo->sort();
    algo->printArr();
    delete  algo;

    algo = new InsertionSort;
    algo->sort();
    algo->printArr();
    delete algo;

    algo = nullptr;
    
    return 0;
}
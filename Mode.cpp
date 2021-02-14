#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> myvector;
    myvector= {10, 20, 0, 10, 21, 255, 26, 27};
    int count =1;
    vector<int> mode;
    sort(myvector.begin(), myvector.end());
    for(int i =0; i < myvector.size() -1; i++)
    {
        int currentCount =1;
        int j = i+1;
        while(myvector[j] == myvector[i])
        {
            currentCount++;
            j++;
        }
        if(currentCount > count)
        {
            count = currentCount;
            mode.clear();
            mode.push_back(myvector[i]);
        }
        else if(currentCount !=1 && currentCount == count)
            mode.push_back(myvector[i]);
        i = j-1;    
    }

    if(mode.empty())
        cout << "no mode" << endl;
    else
    {
        cout << "[";
        for(int i =0; i < mode.size(); i++)
            cout << mode[i] << ","; 
        cout << "]" << count;
    }    
}
    

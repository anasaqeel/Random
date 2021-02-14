/*

  Author: Anas Aqeel
  This is a cheap implementation of finding the mode using map

*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main()
{
    vector<int> myvector;
    myvector= {10, 20, 0, 10, 21, 255, 26, 27, 20, 255, 30, 50, 255};
    int count =1;
    vector<int> mode;
    map<int, int> mmap;
    for(int i =0; i < myvector.size(); i++)
    {
        int currentCount = ++mmap[myvector[i]];
        if(currentCount > count)
        {
            count = currentCount;
            mode.clear();
            mode.push_back(myvector[i]);
        }
        else if(currentCount !=1 && currentCount == count)
            mode.push_back(myvector[i]);   
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


    

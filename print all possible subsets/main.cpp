#include <iostream>
#include <vector>

using namespace std;

void subsets (vector<int> &v, int index, vector<int> &current){

    if(index == v.size()){

        cout << "{";
        for(int x : current) cout << x << " ";

        cout << "}" << '\n';

        return;

    }

    current.push_back(v[index]);
    subsets(v,index+1,current);

    current.pop_back();
    subsets(v,index+1,current);


}

int main()
{
    vector<int> v = {1,2,3};
    vector<int> current;

   subsets(v,0,current);

    return 0;
}

#include <vector>
#include<iostream>
#include <string>
using namespace std;

int main()
{
vector<int> v1={5,2,7,4,12};
v1.pop_back();
v1.push_back(100);

	for (int i=0; i <v1.size() ; i++)
	{
	cout<<v1[i]<<"";
	}

	string name = "Red";
	name += "DataPlace";
	cout<<name<<endl;
}

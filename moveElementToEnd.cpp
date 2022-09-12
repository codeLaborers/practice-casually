#include<vector>
using namespace std;

vector<int> moveElementToEnd(vector<int> &array, int target){
	int i=0;
	int j=array.size()-1;
	while(i<j){
		while(i<j && array[j]==target){
			j--;
		}
		if(array[i]==target){
			swap(array[i], array[j]);
		}
		i++;
	}
	return array;
}

#include<vector>
using namespace std;
vector<int> moveElementToEnd(vector<int> &array, int target){
	int position=0;
	for(int i=0;i<array.size();i++){
		if(array[i] != target){
			swap(array[i], array[position]);
			position++;
		}
	}
	return array;
}

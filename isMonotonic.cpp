#include<vector>
using namespace std;


bool breaksDirection(int direction, int currentIdx, int previousIdx);

bool isMonotonic(vector<int> array){
	if(array.size()<=2){
		return true;
	}
	int direction=array[1]-array[0];
	for(int i=2;i<array.size();i++){
		if(direction==0){
			direction=array[i]-array[i-1];
			continue;
		}
		if(breaksDirection(direction, array[i], array[i-1])){
			return false;
		}
	}
	return true;
}

bool breaksDirection(int direction, int currentIdx, int previousIdx){
	int difference=currentIdx-previousIdx;
	if(direction>0){
		return difference<0; 
	}
	return difference>0;
}

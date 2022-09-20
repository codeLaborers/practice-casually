#include<vector>
#include<algorithm>
using namespace std;

int longestPeak(vector<int> array){
	int maxL=0;
	int i=1;
	while(i<array.size()-1){
		bool isPeak=array[i]>array[i-1] && array[i]>array[i+1];
		if(!isPeak){
			i++;
			continue;
		}
		int leftIdx=i-2;
		while(array[leftIdx]<array[leftIdx+1]){
			leftIdx--;
		}
		int rightIdx=i+2;
		while(array[rightIdx]>array[rightIdx-1]){
			rightIdx++;
		}
		int cnt=rightIdx-leftIdx-1;
		maxL=max(maxL, cnt);
		return maxL;
	}
}

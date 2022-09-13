#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum){
	sort(array.begin(), array.end());
	vector<vector<int>> res;
	for(int i=0;i+2<array.size();i++){
		int left=i+1;
		int right=array.size()-1;
		while(left<right){
			int currentSum=array[i]+array[left]+array[right];
			if(currentSum==targetSum){
				res.push_back({array[i], array[left], array[right]});
				left++;
				right--;
			}
			else if(currentSum<targetSum){
				left++;
			}
			else if(currentSum>targetSum){
				right--;
			}
		}
	}
	return res;
}

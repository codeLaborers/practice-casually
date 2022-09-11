#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo){
	sort(arrayOne.begin(), arrayOne.end());
	sort(arrayTwo.begin(), arrayTwo.end());
	int firstIdx=0;
	int secondIdx=0;
	int current=INT_MAX;
	int smallest=INT_MAX;
	vector<int> smallestPair;
	while(firstIdx<arrayOne.size() && secondIdx<arrayTwo.size()){
		int firstNum=arrayOne[firstIdx];
		int secondNum=arrayTwo[secondIdx];
		if(firstNum>secondNum){
			current=firstNum-secondNum;
			secondIdx++;
		}
		else if(secondNum>firstNum){
			current=secondNum-firstNum;
			firstIdx++;
		}
		else{
			return vector<int>{firstNum, secondNum};
		}
		if(current<smallest){
			smallest=current;
			smallestPair={firstNum, secondNum};
		}
	} 
	return smallestPair;
}

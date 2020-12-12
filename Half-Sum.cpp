#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int calculate_sum(const std::vector<int> &original_set){
	// Calculate the sum of a subset
	int ret = 0;
	for (uint i = 0; i < original_set.size(); i++){
		ret+=original_set[i];
	}
	return (ret);
}

bool half_sum_check(std::vector<int> &half_sum_subset, const std::vector<int> original_set, const int half_sum, int current_sum, const uint index){

	// Recursive Function
	/************************************************************
	 Uncomment this to debug the half_sum_subsets being generated
	std::cout << "{";
	for (uint i = 0; i < half_sum_subset.size();i++){
		std::cout << half_sum_subset[i];
		if (i != half_sum_subset.size()-1){
			std::cout << ", ";
		}
	}
	std::cout << "}" << std::endl;
	*************************************************************/

	if (current_sum==half_sum){
		// We are done because we found a subset whose sum is a half sum of the original_set

		// Base Case
		return true;
	}
	if (current_sum>half_sum){
		return false;
		// If current sum is greather then no matter how many values we add it will still be greater than half_sum given all our values are positive.
	}

	for (uint i = index; i < original_set.size(); i++){

		current_sum+=original_set[i];
		half_sum_subset.push_back(original_set[i]);
		if (half_sum_check(half_sum_subset, original_set, half_sum, current_sum, i+1)){
				return true;
		}
		else{
			half_sum_subset.pop_back();
			current_sum-=original_set[i];
		}
	}
	// If after checking all the possible subsets and none of them produced a suitable subset which contains a half-sum then a half-sum must not exist for this original_set.
	return false;


}

int main(int argc, char const *argv[])
{
	int value; // This the value which will be pushed into the set of numbers to calculate the sum.
	std::vector<int> original_set;

	// Begin by taking in input from the user to populate the set with given numbers greater than 0. 
	std::cout << "Please enter values for the set (or enter -1 if you are finished populating the set)" << std::endl;
	while(true){
		std::cin >> value;
		if (value == -1){
			break;
		}
		else{
			original_set.push_back(value);
		}
	}
	int sum = calculate_sum(original_set);
	if (((sum-1) % 2)==0){
		std::cout << "The set of numbers cannot have a half sum given that the Half-Sum of the set will be a floating point value and each value in the set is a natural number." << std::endl;
		return 0;
	}
	int half_sum = sum/2;
	std::vector<int> half_sum_subset;
	if (half_sum_check(half_sum_subset, original_set, half_sum, 0, 0)){
		std::cout << "Here is a subset which gives a half sum of the original set." << std::endl;
		std::cout << "{";
		for (uint i = 0; i < half_sum_subset.size();i++){
			std::cout << half_sum_subset[i];
			if (i != half_sum_subset.size()-1){
				std::cout << ", ";
			}
		}
		std::cout << "}" << std::endl;
	}
	else{
		std::cout << "No subset exists which gives a half sum of the original set." << std::endl;
	}
	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

float calculate_sum(const std::vector<float> &original_set){
	// Calculate the sum of a subset
	float ret = 0;
	for (uint i = 0; i < original_set.size(); i++){
		ret+=original_set[i];
	}
	return (ret);
}

bool half_sum_check(std::vector<float> &half_sum_subset, const std::vector<float> original_set, const float half_sum, float current_sum, const uint index){

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
		// We can return true because we found a subset whose sum is a half sum of the 
		// original_set

		// Base Case
		return true;
	}
	/***************************************************************************************
	You can uncomment this code if all inputs will be greater than 0. It may improve run 
	time. Otherwise uncommenting this will cause undefined behavior in cases where input may
	be negative.

	if (current_sum>half_sum){
		return false;
		// If current sum is greather then no matter how many values we add it will still be 
		// greater than half_sum given all our values are positive.
	}
	***************************************************************************************/

	for (uint i = index; i < original_set.size(); i++){

		// Loop through the original_set and enumrate through all possible subsets until one
		// which has a sum equal to the half sum.

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
	float value; // This the value which will be pushed into the set of numbers to calculate the sum.
	std::vector<float> original_set;

	// Begin by taking in input from the user to populate the set with given numbers greater than 0. 
	std::cout << "Please enter values for the set (or enter any character if you are finished populating the set)" << std::endl;
	while(std::cin >> value){
		original_set.push_back(value);
	}
	std::cin.setstate(std::cin.rdstate()&~std::ios_base::failbit); 

	// Standard output so the user is aware of what their input is.
	std::cout << std::endl << "The set you entered is: {";
	for (uint i = 0; i < original_set.size();i++){
		std::cout << original_set[i];
		if (i != original_set.size()-1){
			std::cout << ", ";
		}
	}
	std::cout << "}" << std::endl;


	float sum = calculate_sum(original_set);
	std::cout << std::endl << "The sum of the set is: " << sum << std::endl;
	float half_sum = sum/2;
	std::cout << "The half sum of the set is: " << half_sum << std::endl << std::endl;


	std::vector<float> half_sum_subset;
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

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
void check_half_sum_subset(std::vector<int> &half_sum_subset, const std::vector<int> original_set, const int half_sum){
	// Check if a subset exists which can calculate the half_sum
	int size_of_original_set = original_set.size();
	int current_sum=0;
	int half_sum_found = false;
	for (int i = 0; i < size_of_original_set-1; i++){
		// We subtract 1 from the size because the last value in the set is checked in the second for loop.
		current_sum=original_set[i];
		half_sum_subset.push_back(original_set[i]);
		if (current_sum==half_sum){
			half_sum_found=true;
			break;
		}

		for (int j = i+1; j < size_of_original_set; j++){
			current_sum+=original_set[j];
			half_sum_subset.push_back(original_set[j]);
			if (current_sum==half_sum){
				half_sum_found=true;
				break;
			}
			if (current_sum > half_sum){
				// If the current_sum is greater than half_sum than the current subset cannot be correct
				while(j > i-1){
					half_sum_subset.pop_back();
					j--;
				}
				break;
			}
		}
		if (half_sum_found){
			break;
		}
	}
	return;
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
		std::cout << "The set of numbers cannot have a half sum given that the sum of the set is odd and each value is a natural number." << std::endl;
		return 0;
	}
	int half_sum = sum/2;
	std::vector<int> half_sum_subset;
	check_half_sum_subset(half_sum_subset, original_set, half_sum);
	if (half_sum_subset.empty()){
		std::cout << "No subset exists which gives a half sum of the original set." << std::endl;
	}
	else{
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
	return 0;
}

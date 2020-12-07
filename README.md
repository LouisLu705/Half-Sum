# Half-Sum
 Given a set of numbers, there exists a sum from those set of numbers. In C++ I have created a short program which finds if there is a subset in the given set of numbers where the sum of the subset is half the original sum calculated.
 
Note the following constraint(s):
 The set of numbers must be positive integers.
 (-1) marks the end of inputs.
 If a possible subset exists only one of the subsets are output. There may still be multiple subsets which solve the half_sum requirement.
 
To run it you must compile the cpp file and run the executable.

Here are example inputs and output:

Please enter values for the set (or enter -1 if you are finished populating the set)
1 1 1 3 4 4 5 6 9 -1
Here is a subset which gives a half sum of the original set.
{1, 3, 4, 4, 5}

(Note that above another subset which solvese the half_sum is {1, 3, 4, 9})
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Please enter values for the set (or enter -1 if you are finished populating the set)
1 1 -1
Here is a subset which gives a half sum of the original set.
{1}
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Please enter values for the set (or enter -1 if you are finished populating the set)
3 5 -1
No subset exists which gives a half sum of the original set.
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Please enter values for the set (or enter -1 if you are finished populating the set)
4 6 8 -1
No subset exists which gives a half sum of the original set.

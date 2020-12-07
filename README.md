# Half-Sum
 Given a set of numbers, there exists a sum from those set of numbers. In C++ I have created a short program which finds if there is a subset in the given set of numbers where the sum of the subset is half the original sum calculated.
 
Note the following constraint(s):<br />
 The set of numbers must be positive integers.<br />
 (-1) marks the end of inputs.<br />
 If a possible subset exists only one of the subsets are output. There may still be multiple subsets which solve the half_sum requirement.<br />
 <br />
To run it you must compile the cpp file and run the executable.<br />
<br />
Here are example inputs and output:<br />
<br />
Please enter values for the set (or enter -1 if you are finished populating the set)<br />
1 1 1 3 4 4 5 6 9 -1<br />
Here is a subset which gives a half sum of the original set.<br />
{1, 3, 4, 4, 5}<br />
<br />
(Note that above another subset which solves the half_sum is {1, 3, 4, 9})<br />
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\<br />
Please enter values for the set (or enter -1 if you are finished populating the set)<br />
1 1 -1<br />
Here is a subset which gives a half sum of the original set.<br />
{1}<br />
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\<br />
Please enter values for the set (or enter -1 if you are finished populating the set)<br />
3 5 -1<br />
No subset exists which gives a half sum of the original set.<br />
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\<br />
Please enter values for the set (or enter -1 if you are finished populating the set)<br />
4 6 8 -1<br />
No subset exists which gives a half sum of the original set.<br />
<br />

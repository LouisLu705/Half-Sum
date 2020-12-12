# Half-Sum
Given a set of numbers, there exists a sum from those set of numbers. In C++ I have created a short program which finds if there is a subset in the given set of numbers where the sum of the subset is half the original sum calculated.<br />
Note this solution utilizes a brute force approach by enumerting through all possible subsets given a set of values. Therefore this solution may not run for very large sets. This is a personal project to verify some things I have learned in class recently.
 
Note the following constraint(s):<br />
 If a possible subset exists only one of the subsets are printed out. There may still be multiple subsets which solve the half_sum requirement.<br />
 <br />
To run it you must compile the cpp file and run the executable.<br />
<br />
Here are example inputs and output:<br />
<br />
Please enter values for the set (or enter any character if you are finished populating the set)
1 1 1 3 4 4 5 6 9 x<br />
<br />
The set you entered is: {1, 1, 1, 3, 4, 4, 5, 6, 9}<br />
<br />
The sum of the set is: 34<br />
The half sum of the set is: 17<br />
<br />
Here is a subset which gives a half sum of the original set.<br />
{1, 1, 1, 3, 5, 6}<br />
(Note that above another subset which solves the half_sum is {1, 3, 4, 9})<br />
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\<br />
Please enter values for the set (or enter any character if you are finished populating the set)
-2 -2 x<br />
<br />
The set you entered is: {-2, -2}<br />
<br />
The sum of the set is: -4<br />
The half sum of the set is: -2<br />
<br />
Here is a subset which gives a half sum of the original set.<br />
{-2}<br />
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\<br />
Please enter values for the set (or enter any character if you are finished populating the set)
1 1 3 5 7 9 x<br />
<br />
The set you entered is: {1, 1, 3, 5, 7, 9}<br />
<br />
The sum of the set is: 26<br />
The half sum of the set is: 13<br />
<br />
Here is a subset which gives a half sum of the original set.<br />
{1, 3, 9}<br />
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\<br />
Please enter values for the set (or enter any character if you are finished populating the set)
1 32.5 0.89 -123.23 683.12 0 -9.1 x<br />
<br />
The set you entered is: {1, 32.5, 0.89, -123.23, 683.12, 0, -9.1}<br />
<br />
The sum of the set is: 585.18<br />
The half sum of the set is: 292.59<br />
<br />
No subset exists which gives a half sum of the original set.<br />

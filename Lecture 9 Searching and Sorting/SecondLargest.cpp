/*
Second Largest in array

You have been given a random integer array/list(ARR) of size N. You are required to find and return the second
largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31
(It is the smallest value for the range of Integer)

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run.
Then the test cases follow.

The first line of each test case or query contains an integer 'N' representing the size of the array/list.

The second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the second largest in the array/list if exists, -2147483648 otherwise.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5

Time Limit: 1 sec

Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
13

Sample Input 2:
1
5
9 3 6 2 9
Sample Output 2:
6

Sample Input 3:
2
2
6 6
4
90 8 90 5
Sample Output 3:
-2147483648
8
*/
#include<iostream>
#include<climits>
using namespace std;
typedef long long int lli;

int findSecondLargest(int *input, int n)
{
	int max1 = INT_MIN, max2 = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if ((input[i] > max2) and (input[i] != max1))
		{
			if (input[i] > max1)
			{
				max2 = max1;
				max1 = input[i];
			}

			else
				max2 = input[i];
		}
	}

	return max2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}






//There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.
// 
//In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.
// 
//Your score is the sum of the points of the cards you have taken.
// 
//Given the integer array cardPoints and the integer k, return the maximum score you can obtain.
// 
//Example 1:
//Input: cardPoints = [1,2,3,4,5,6,1], k = 3
//Output: 12
// 
//Example 2:
//Input: cardPoints = [2,2,2], k = 2
//Output: 4
// 
//Example 3:
//Input: cardPoints = [9,7,7,9,7,7,9], k = 7
//Output: 55


#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&cardPoints,int k,vector<vector<int>>&dp,int ind1,int ind2)
{
	if(k==0)
	{
		return 0
	}
	
	if(dp[ind1][ind2]!=-1)
	{
		return dp[ind1][ind2];
	}
	
	return dp[ind1][ind2]=max(cardPoints[ind1]+func(cardPoints,k-1,dp,ind1-1,ind2),cardPoints[ind2]+func(cardPoints,k-1,dp,ind1,ind2-1));
}
int main()
{
	int sizeofarray;
	vector<int>cardPoints(sizeofarray);
	int k;
	cout<<"Enter the size of the array :"<<endl;
	cin>>sizeofarray;
	cout<<"Enter the cardPoints :"<<endl;
	for(int i=0;i<sizeofarray;i++)
	{
		cin>>cardPoints[i];
	}
	cout<<"Enter the K value : "<<endl;
	cin>>k;
	vector<vector<int>dp(sizeofarray,vector<int>(sizeofarray,-1));
	int i=0;
	int j=sizeofarray-1;
    cout<<func(cardPoints,k,dp,i,j);
	
	
}

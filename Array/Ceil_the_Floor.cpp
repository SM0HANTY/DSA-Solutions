//Ceil the floor

/*Problem statement
You're given a sorted array 'a' of 'n' integers and an integer 'x'.



Find the floor and ceiling of 'x' in 'a[0..n-1]'.



Note:
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.
*/

#include <algorithm>
using namespace std;
int floor(vector<int> &a,int n,int x){
	int ans=-1;
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]<=x){
			ans=a[mid];
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return ans;
}

int ceil(vector<int> &a,int n,int x){
	int ans=-1;
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]>=x){
			ans=a[mid];
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int,int>p;
	sort(a.begin(),a.end());
	int f=floor(a,n,x);
	int c=ceil(a,n,x);
	p.first=f;
	p.second=c;
	return p;

}

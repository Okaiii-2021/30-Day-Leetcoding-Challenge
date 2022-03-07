#include <iostream>


using namespace std;

int main() {

	int nums[4] = {1,2,3,4};
	int n = sizeof(nums)/sizeof(nums[1]);
	cout << n << endl;
	int flag;
	int ans = 0; // output -> numbers of sub
	
	
	
	for (int len=3; len <= n; len++) {

		for (int j=0;  j<=n-len; j++ ) {  // vi tri dau cua tap con
			flag = 1;

			//vi tri ket thuc
			int end = j+len-1;
			cout << "begin " << j << endl;
			cout << "end_value " << end << endl;

			for (int t = (j+1); t<end; t++) {
				cout << "t_value "<< t<< endl;
				if (( nums[t]- nums[t-1]  ) != (nums[t+1]-nums[t])) {
					flag = 0;
					break;
				} 
				 
			}
			if (flag){
				ans++;
				cout << "ans_val " << ans<< endl<< endl;
			} 
		}
	}
	cout << "answer "<< ans;




	return 0;
}

# include <stdio.h>
# include <vector>
# include <iostream>

using namespace std;

void merge(vector<int> &nums1,int m,vector<int> &nums2,int n ){

  int i = nums1.size() - 1;
              m--;
              n--;
                    while (n >= 0) {
                        while (m >= 0 && nums1[m] > nums2[n]) {
                            swap(nums1[i--], nums1[m--]);
                        }
                        swap(nums1[i--], nums2[n--]);
                    }    

}

int main(){
    //  vector<int> *nums1={1,2,3,0,0,0},*nums2={4,5,6};
    vector<int> nums1,nums2;
    nums1={1,2,3,0,0,0};
    nums2={2,5,6};

    int m=3,n=3;

    merge(nums1,m,nums2,n);

    return 0;
}
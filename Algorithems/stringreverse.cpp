# include <stdio.h>
# include <vector>
# include <math.h>

using namespace std;
 
 void reverseString(vector<char>& s) {
        char aaa;
        for (int i=0;i<floor(s.size()/2);i++){
             aaa=s[i];
             s[i]=s[s.size()-1-i];
             s[s.size()-1-i]=aaa;

        }
        
    }

    void reverseString1(vector<char>& s) {
        int n = s.size();
        for (int left = 0, right = n - 1; left < right; ++left, --right) {
            swap(s[left], s[right]);
        }
    }


    int main(){
   vector<char> nownumber={'h','e','l','l','o'};
   int k=3;

//    arrayrotate(nownumber,k);
   reverseString1(nownumber);

   for(int j=0;j< nownumber.size();j++){
               
                printf("%C",nownumber[j]);
               
            } 
scanf("input:"); //asd

             return 0;
            // system(pause);

}
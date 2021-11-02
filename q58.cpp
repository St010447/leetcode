
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string temp;
    vector <string> ans;
    int lengthOfLastWord(string s) {
        s.insert(s.begin(),' ');
        s.insert(s.end(),' ');
        for(int i = 0; i < s.size(); i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                ans.push_back(temp);
                temp="";
            }
        }
    // cout << ans[ans.size()-1];
    
        return (ans[ans.size()-1]).length();
    }
};

int main(){
    Solution A;
    cout<<A.lengthOfLastWord("test 1 2 3 445454");
    return 0;
}
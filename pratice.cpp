#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for (int i = 0; i < keymap.size(); i++) {
        int loc = 1;
        loc +=i;  
        int c = 0;
        if (loc > keymap.size() - 1) { break; }
        for (int j = 0; j < targets[i].length(); j++) {  
            if (keymap[i].find(targets[i][j]) == string::npos && keymap[loc].find(targets[i][j]) == string::npos) {
                c = -1;
                break;
            }
            if (keymap[i].find(targets[i][j]) == keymap[loc].find(targets[i][j])) {
                c += keymap[i].find(targets[i][j]) + 1;
            }
            else if (keymap[i].find(targets[i][j]) < keymap[loc].find(targets[i][j])) {
                c += keymap[i].find(targets[i][j]) + 1;
            }
            else {
                c += keymap[loc].find(targets[i][j]) + 1;
            }
        }
        answer.push_back(c);
    }
    return answer;
}
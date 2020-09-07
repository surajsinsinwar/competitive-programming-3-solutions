
//    How strange it is : 
//        We wish to wear high brands,
//        but we feel most comfortable in pajaymas.
//
//        We wish to sit in Taj & Marriot with elight people,
//        but we enjoy roadside tea with friends and with people we love.
//
//        We wish to own big cars and go on long drives,
//        yet we talk our heart out only while walking down a long road.  
//
//    " Don't be serious, Enjoy Life as it Comes ".  
//
//    WORDS OF RATAN TATA         

#include<bits/stdc++.h>

using namespace std;

int main() {
  int cases;
  int words;
  int count;
  string input;
  multimap<string,string> m;
  multimap<string,string>::iterator it;
  pair<multimap<string,string>::iterator,multimap<string,string>::iterator> ret;
 
  cin >> cases;
 
  while (cases--) {
    m.clear();
 
    cin >> words;
    cin.ignore(100, '\n');
 
    for (int i = 0; i < words; i++) {
      getline(cin, input);
      string tmp(input);
      sort(tmp.begin(), tmp.end());
      m.insert(make_pair(tmp, input));
    }
 
    while (getline(cin, input)) {
      if (input == "END")
        break;
 
      string tmp(input);
      sort(tmp.begin(), tmp.end());
 
      cout << "Anagrams for: " << input << endl;
 
      if (m.count(tmp) == 0) {
        cout << "No anagrams for: " << input << endl;
      } else {
        count = 0;
        ret = m.equal_range(tmp);
        for (it = ret.first; it != ret.second; it++) {
          count++;
          printf("%3d) ", count);
          cout << (*it).second << endl;
        }
      }
    }
 
    if (cases)
      cout << endl;
  }
 
  return 0;
}
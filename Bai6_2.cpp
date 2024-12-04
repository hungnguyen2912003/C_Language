#include <iostream>
#include <cstring>
#include <regex>
#include <map>
#include <vector>
#include <set>

int main() {
    std::string inp;
    std::getline(std::cin, inp);
    std::regex rgx("[^a-zA-Z0-9 -]");
    std::regex spaceremoval("[ ]+");
    inp = std::regex_replace(inp, rgx, "");
    inp = std::regex_replace(inp, spaceremoval, " ");
    
    inp += " ";

    std::map<int, std::vector<std::string> > myMap;
    myMap.clear(); 
    std::set<int> mySet;
    mySet.clear();
    int found = 0;
    while (found < (int) inp.size()) {
        int curFound = inp.find(" ", found);
        // if (curFound = -1) break;
        // std::cout << found << " " << curFound << "\n";
        myMap[curFound - found].push_back(inp.substr(found, curFound - found));
        mySet.insert(curFound - found);
        found = curFound + 1;
    }
    for (auto i : myMap[*mySet.rbegin()]) {
        std::cout << i << " " << *mySet.rbegin() << " ";
    }
}

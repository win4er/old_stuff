#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

bool check(std::string word1, std::string word2) {
    for (int i = 0; i < word1.size(); ++i) {
	if (word1[i] != word2[i]) {
	    return false;
	}
    }
    return true;
}

int main() {
    std::ifstream file("ENRUS.TXT");
    std::string line;
    while (std::getline(file, line)) {
	std::cout << line << line.size() << std::endl;
    }
    std::string word = "aaron";
    std::cout << word << word.size() << std::endl;
    return 0;
}

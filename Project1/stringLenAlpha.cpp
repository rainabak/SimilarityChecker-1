#include <iostream>
#include <vector>
#include <string>

class StringLength {
public:
	int length(const std::string& str) {
		return str.length();
	}

	int getScore(const std::vector<std::string>& wordVec) {
		int score = 0;
		int len1 = length(wordVec[0]);
		int len2 = length(wordVec[1]);
		if (len1 == len2) {
			score += 60;
		}
		else {
			int min = 0, max = 0;
			// 2배 이상이면 0점
			if (len1 > len2)	min = len2, max = len1;
			else  min = len1, max = len2;

			if (max / min >= 2) {
				score += 0;
			}
			else {
				score += max - min;
			}
		}
		return score;
	}	
};
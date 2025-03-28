#include <iostream>
#include <vector>
#include <string>

class StringLengthAlphabet {
public:
	int length(const std::string& str) {
		return str.length();
	}

	int getScore(const std::vector<std::string>& wordVec) {
		int score = 0;   
		int len1 = length(wordVec[0]);
		int len2 = length(wordVec[1]);
		if (len1 == len2) {
			score = 60;
		}
		else {
			int min = len1, max = len2;
			if (len1 > len2)	min = len2, max = len1;

			if (max >=  min * 2) {	score = 0;	}
			else {
				int gap = max - min;
				score = (int)((1.0 - (gap*1.0) / (min * 1.0)) * 60);				
			}
		}
		return score;
	}	
};
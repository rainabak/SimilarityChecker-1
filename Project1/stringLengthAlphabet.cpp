#include <iostream>
#include <vector>
#include <string>

class StringLengthAlphabet {
public:
	int length(const std::string& str) {
		return str.length();
	}

	int getScore(const std::vector<std::string>& wordVec) {
		int len1 = length(wordVec[0]);
		int len2 = length(wordVec[1]);
		if (len1 == len2) {
			return 60;
		}
		else {
			int min = len1, max = len2;
			if (len1 > len2)	min = len2, max = len1;

			if (max >=  min * 2) {	
				return 0;	}
			else {
				return (int)((1.0 - ((max - min) * 1.0) / (min * 1.0)) * 60);
			}
		}
		return 0;
	}	

	int getAlphabetScore(std::string input1, std::string input2) {
		int sameCnt = 0;
		int totalCnt = 0;

		totalCnt += length(input1);
		totalCnt += length(input2);

		for (int inputIndex1 = 0; inputIndex1 < input1.size(); inputIndex1++) {
			if (isValidAlphabet(input1[inputIndex1]) == false) continue;
			for (int inputIndex2 = 0; inputIndex2 < input2.size(); inputIndex2++) {
				if (isValidAlphabet(input2[inputIndex2]) == false) continue;
				if (input1[inputIndex1] == input2[inputIndex2]) {
					sameCnt += 2;
				}
			}
		}
		int score = (int)(((sameCnt * 1.0) / (totalCnt * 1.0)) * 40.0);
		if (score > 40)	score = 40;
		return score;
	}

	bool isValidAlphabet(char input) {
		if (input >= 'A' && input <= 'Z') return true;
		return false;
	}
};
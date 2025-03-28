#include <iostream>
#include <vector>
#include <string>

class StringLenthAlpha {
public:
	int length(const std::string& str) {
		return str.length();
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
					sameCnt +=2;
				}
			}
		}
		int score = (int)(((sameCnt *1.0)/ (totalCnt*1.0)) * 40.0);
		if (score > 40)	score = 40;
		return score;
	}

	bool isValidAlphabet(char input) {
		if (((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))) return true;
		return false;
	}
};
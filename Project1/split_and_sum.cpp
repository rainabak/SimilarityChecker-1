#include <iostream>
#include <vector>
#include <string>

class SplitAndSum {
public:
	int getResult(std::string input) {
		std::vector<std::string> splited = split(input);
		std::vector<int> numArray = switchNumArray(splited);
		return getAllSum(numArray);
	}

	int stoi(std::string num) {
		return std::stoi(num);
	}

	std::vector<int> switchNumArray(std::vector<std::string> input) {
		std::vector<int> result;
		for (int i = 0; i < input.size(); i++) {
			result.emplace_back(stoi(input[i]));
		}
		return result;
	}

	int getAllSum(std::vector<int> input) {
		int sum = 0;
		for (int i = 0; i < input.size(); i++) {
			sum += input[i];
		}
		return sum;
	}

	std::vector<std::string> split(const std::string& input) {
		std::vector<std::string> result;
		std::string target = input + '-';

		int endIndex = -1;
		while (1) {
			int startIndex = endIndex + 1;
			endIndex = target.find('-', startIndex);
			if (endIndex == std::string::npos) 	break;
			int length = endIndex - startIndex;
			std::string stringToken = target.substr(startIndex, length);
			result.emplace_back(stringToken);
		}
		return result;
	}
};
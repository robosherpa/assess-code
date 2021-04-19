#include "src/mostRecentObject.cpp"

#include <gtest/gtest.h>
#include <iostream>
#include <unordered_map>
#include <thread>

TEST (MostRecentObjectTest, Test_EMPTY) {
	std::unordered_map<std::string, int64_t> data;
	char search_char = 'p';
	std::string s= mostRecentLetter(data, search_char);
	EXPECT_EQ(s, "");
}

TEST (MostRecentObjectTest, Test_FindP) {
	std::unordered_map<std::string, int64_t> data;
	data["detroit"]=7;
	data["p"]=2;
	data["peter"]=3;
	data["pan"]=5;
	data["delta"]=16;
	data["c"]=4;
	data["charlie"]=9;
	char search_char = 'p';
	std::string s= mostRecentLetter(data, search_char);
	std::string expected_result = "pan";
	EXPECT_EQ(s, expected_result);
}


TEST (MostRecentObjectTest, Test_FindEmpty) {
	std::unordered_map<std::string, int64_t> data;
	data["detroit"]=7;
	data["p"]=2;
	data["peter"]=3;
	data["pan"]=5;
	data["delta"]=16;
	data["c"]=4;
	data["charlie"]=9;
	char search_char;
	std::string s= mostRecentLetter(data, search_char);
	std::string expected_result = "";
	EXPECT_EQ(s, expected_result);
}

TEST (MostRecentObjectTest, Test_FindD) {
	std::unordered_map<std::string, int64_t> data;
	data["detroit"]=7;
	data["p"]=2;
	data["peter"]=3;
	data["pan"]=5;
	data["delta"]=16;
	data["c"]=4;
	data["charlie"]=9;
	char search_char = 'd';
	std::string s= mostRecentLetter(data, search_char);
	std::string expected_result = "delta";
	EXPECT_EQ(s, expected_result);
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

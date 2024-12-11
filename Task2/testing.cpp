#include "gtest/gtest.h"
#include "solve.h"

TEST(DEFAULT_CASE, DCASE_1) {
    char *a = "мадара никита некит гей пенис никто,,";
    char *b = "лол";
    int k = 5;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "мадара никита лол гей лол лол,,"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_2) {
    char *a = "сипипи никита некит при пенис никто,,";
    char *b = "лол";
    int k = 6;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "лол лол некит при пенис никто,,"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_3) {
    char *a = "мадара никита некит гей пенис никто,,";
    char *b = "лол";
    int k = 7;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "мадара никита некит гей пенис никто,,"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_4) {
    char *a = "мадара никита некит гей пенис никто,,";
    char *b = "лол";
    int k = 3;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "мадара никита некит лол пенис никто,,"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_5) {
    char *a = "поит хуйня";
    char *b = "залупа";
    int k = 5;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "поит залупа"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_6) {
    char *a = "поит хуйня";
    char *b = "залупа";
    int k = 4;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "залупа хуйня"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_7) {
    char *a = "привт..,, знаки препинания";
    char *b = "прив";
    int k = 5;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "прив..,, прив препинания"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_8) {
    char *a = "привт..,, знаки препинания";
    char *b = "byby";
    int k = 5;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "byby..,, byby препинания"), 0);
    delete[] ans;
}

TEST(CORNER_CASE, CCASE_1) {
    char *a = "";
    char *b = "";
    int k = 5;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, ""), 0);
    delete[] ans;
}

TEST(CORNER_CASE, CCASE_2) {
    char *a = "aa";
    char *b = "bb";
    int k = 0;
    char *ans = changeText(a, b, k);
    EXPECT_EQ(strcmp(ans, "aa"), 0);
    delete[] ans;
}

void test() {
    testing::InitGoogleTest();
    RUN_ALL_TESTS();
}
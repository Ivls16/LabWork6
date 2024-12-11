#include "gtest/gtest.h"
#include "solve.h"

TEST(CORNER_CASE, CCASE_1) {
    char *a = "";
    char* res = shortest(a, 0);
    EXPECT_EQ(res[0], '\0');
    delete[] res;
}

TEST(CORNER_CASE, CCASE_2) {
    char *a = "00000";
    char *res = shortest(a, 5);
    EXPECT_EQ(strlen(res), 5);
    EXPECT_EQ(strncmp(a, res, 5), 0);
    delete[] res;
}

TEST(CORNER_CASE, CCASE_3) {
    char *a = "11111";
    char *res = shortest(a, 5);
    EXPECT_EQ(strlen(res), 5);
    EXPECT_EQ(strncmp(a, res, 5), 0);
    delete[] res;
}

TEST(DEFAULT_CASE, DCASE_1) {
    char *a = "00111";
    char *res = shortest(a, 5);
    EXPECT_EQ(strlen(res), 2);
    EXPECT_EQ(strncmp("00", res, 5), 0);
    delete[] res;
}

TEST(DEFAULT_CASE, DCASE_2) {
    char *a = "00011";
    char *res = shortest(a, 5);
    EXPECT_EQ(strlen(res), 2);
    EXPECT_EQ(strncmp("11", res, 5), 0);
    delete[] res;
}

TEST(DEFAULT_CASE, DCASE_3) {
    char *a = "00001";
    char *res = shortest(a, 5);
    EXPECT_EQ(strlen(res), 1);
    EXPECT_EQ(strncmp("1", res, 5), 0);
    delete[] res;
}

TEST(DEFAULT_CASE, DCASE_4) {
    char *a = "1111000011110000";
    char *res = shortest(a, 16);
    EXPECT_EQ(strlen(res), 4);
    EXPECT_EQ(strncmp("1111", res, 16), 0);
}

TEST(DEFAULT_CASE, DCASE_5) {
    char *a = "0000111100001111";
    char *res = shortest(a, 16);
    EXPECT_EQ(strlen(res), 4);
    EXPECT_EQ(strncmp("0000", res, 16), 0);
}

TEST(DEFAULT_CASE, DCASE_6) {
    char *a = "1111000000000000";
    char *res = shortest(a, 16);
    EXPECT_EQ(strlen(res), 4);
    EXPECT_EQ(strncmp("1111", res, 16), 0);
}

TEST(DEFAULT_CASE, DCASE_7) {
    char *a = "1111000011111111";
    char *res = shortest(a, 16);
    EXPECT_EQ(strlen(res), 4);
    EXPECT_EQ(strncmp("1111", res, 16), 0);
}

void test() {
    testing::InitGoogleTest();
    RUN_ALL_TESTS();
}
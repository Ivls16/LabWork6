#include "gtest/gtest.h"
#include "solve.h"

TEST(DEFAULT_CASE, DCASE_1) {
    char *a = "мадара никита некит гей пенис никто,";
    char *ans = new char[200];
    archive(a, ans);
    EXPECT_EQ(strcmp(ans, "мадара никита некит гей пенис никто,"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_2) {
    char *a = "мадара не никита некит гей без пениса никто";
    char *ans = new char[200];
    archive(a, ans);
    EXPECT_EQ(strcmp(ans, "мадара не никита некит гей без пениса никто"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_3) {
    char *a = "lolkekk";
    char *ans = new char[200];
    archive(a, ans);
    char cmp[200] = "lolke"; cmp[5] = char(255); cmp[6] = '2'; cmp[7] = 'k';
    EXPECT_EQ(strcmp(ans, cmp), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_4) {
    char *a = "bebrddd";
    char *ans = new char[200];
    archive(a, ans);
    char cmp[200] = "bebr"; cmp[4] = char(255); cmp[5] = '3'; cmp[6] = 'd';
    EXPECT_EQ(strcmp(ans, cmp), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_5) {
char *a = "мадара никита некит гей пенис никто,";
char *ans = new char[200];
archive(a, ans);
EXPECT_EQ(strcmp(ans, "мадара никита некит гей пенис никто,"), 0);
delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_6) {
    char *a = "мадара никита некит гей пенис никто,";
    char *ans = new char[200];
    archive(a, ans);
    EXPECT_EQ(strcmp(ans, "мадара никита некит гей пенис никто,"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_7) {
    char *a = "мадара никита некит гей пенис никто,";
    char *ans = new char[200];
    archive(a, ans);
    EXPECT_EQ(strcmp(ans, "мадара никита некит гей пенис никто,"), 0);
    delete[] ans;
}

TEST(DEFAULT_CASE, DCASE_8) {
    char *a = "мадара никита некит гей пенис никто,";
    char *ans = new char[200];
    archive(a, ans);
    EXPECT_EQ(strcmp(ans, "мадара никита некит гей пенис никто,"), 0);
    delete[] ans;
}

TEST(CORNER_CASE, CCASE_1) {
    char *a = "";
    char *ans = new char[200];
    archive(a, ans);
    EXPECT_EQ(strcmp(ans, ""), 0);
    delete[] ans;
}

TEST(CORNER_CASE, CCASE_2) {
    char *a = "a";
    char *ans = new char[200];
    archive(a, ans);
    EXPECT_EQ(strcmp(ans, "a"), 0);
    delete[] ans;
}

void test() {
    testing::InitGoogleTest();
    RUN_ALL_TESTS();
}
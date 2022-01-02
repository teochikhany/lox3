#include "Utils.h"


TEST(comparaison, greater_true) {

    Value lastElement = custom_main_top_stack("5 > 2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}


TEST(comparaison, greater_false) {

    Value lastElement = custom_main_top_stack("1 > 2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}


TEST(comparaison, lower_true) {

    Value lastElement = custom_main_top_stack("4 < 5;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}


TEST(comparaison, lower_false) {

    Value lastElement = custom_main_top_stack("4 < 2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}

/////////////////


TEST(comparaison, greater_equal_true) {

    Value lastElement = custom_main_top_stack("5 >= 2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}


TEST(comparaison, greater_equal_false) {

    Value lastElement = custom_main_top_stack("1 >= 2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}


TEST(comparaison, lower_equal_true) {

    Value lastElement = custom_main_top_stack("4 <= 5;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}


TEST(comparaison, lower_equal_false) {

    Value lastElement = custom_main_top_stack("4 <= 2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}

/////////

TEST(comparaison, equal_false) {

    Value lastElement = custom_main_top_stack("4 == 2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}


TEST(comparaison, equal_true) {

    Value lastElement = custom_main_top_stack("3 == 3;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}


TEST(comparaison, equal_decimal_false) {

    Value lastElement = custom_main_top_stack("4.1 == 4.2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}


TEST(comparaison, equal_decimal_true) {

    Value lastElement = custom_main_top_stack("3.54 == 3.54;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}


TEST(comparaison, diff_false) {

    Value lastElement = custom_main_top_stack("4 != 4;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}


TEST(comparaison, diff_true) {

    Value lastElement = custom_main_top_stack("3 != 2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}


TEST(comparaison, diff_decimal_false) {

    Value lastElement = custom_main_top_stack("4.2 != 4.2;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}


TEST(comparaison, diff_decimal_true) {

    Value lastElement = custom_main_top_stack("3.54 != 3.78;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}
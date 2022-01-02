#include "pch.h"


TEST(types, bool_true) {

    Value lastElement = custom_main_top_stack("true;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(true, lastElement.getBool());
}


TEST(types, bool_false) {

    Value lastElement = custom_main_top_stack("false;");

    EXPECT_TRUE(lastElement.isBool());
    EXPECT_EQ(false, lastElement.getBool());
}


TEST(types, nil) {

    Value lastElement = custom_main_top_stack("nil;");

    EXPECT_TRUE(lastElement.isNil());
}

TEST(types, numbers_entier) {

    Value lastElement = custom_main_top_stack("5;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(5.0, lastElement.getDouble());
}


TEST(types, numbers_decimal) {

    Value lastElement = custom_main_top_stack("5.52;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(5.52, lastElement.getDouble());
}


TEST(types, strings) {

    Value lastElement = custom_main_top_stack(" \"this is a string\"; ");

    EXPECT_TRUE(lastElement.isStr());
    EXPECT_EQ("\"this is a string\"", lastElement.getString());
}
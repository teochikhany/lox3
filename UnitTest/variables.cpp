#include "pch.h"


TEST(global_var, bool_true) {

    Value variable = custom_main_first_global("var x = true;", "x");
    EXPECT_TRUE(variable.isBool());
    EXPECT_EQ(true, variable.getBool());
}


TEST(global_var, bool_false) {

    Value variable = custom_main_first_global("var x = false;", "x");
    EXPECT_TRUE(variable.isBool());
    EXPECT_EQ(false, variable.getBool());
}


TEST(global_var, nil) {

    Value variable = custom_main_first_global("var x = nil;", "x");
    EXPECT_TRUE(variable.isNil());
}


TEST(global_var, number) {

    Value variable = custom_main_first_global("var x = 2.5;", "x");
    EXPECT_TRUE(variable.isNumber());
    EXPECT_EQ(2.5, variable.getDouble());
}


TEST(global_var, string) {

    Value variable = custom_main_first_global("var x = \"variable\";", "x");
    EXPECT_TRUE(variable.isStr());
    EXPECT_EQ("\"variable\"", variable.getString());
}
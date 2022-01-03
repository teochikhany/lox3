#include "Utils.h"


TEST(global_var_define, bool_true) {

    Value variable = custom_main_first_global("var x = true;", "x");
    EXPECT_TRUE(variable.isBool());
    EXPECT_EQ(true, variable.getBool());
}


TEST(global_var_define, bool_false) {

    Value variable = custom_main_first_global("var x = false;", "x");
    EXPECT_TRUE(variable.isBool());
    EXPECT_EQ(false, variable.getBool());
}


TEST(global_var_define, nil) {

    Value variable = custom_main_first_global("var x = nil;", "x");
    EXPECT_TRUE(variable.isNil());
}


TEST(global_var_define, nil_2) {

    Value variable = custom_main_first_global("var x;", "x");
    EXPECT_TRUE(variable.isNil());
}


TEST(global_var_define, number) {

    Value variable = custom_main_first_global("var x = 2.5;", "x");
    EXPECT_TRUE(variable.isNumber());
    EXPECT_EQ(2.5, variable.getDouble());
}


TEST(global_var_define, string) {

    Value variable = custom_main_first_global("var x = \"variable\";", "x");
    EXPECT_TRUE(variable.isStr());
    EXPECT_EQ("\"variable\"", variable.getString());
}


////////////////


TEST(global_var_get, bool_true) {

    Value topStack = custom_main_top_stack("var x = true; x;");
    EXPECT_TRUE(topStack.isBool());
    EXPECT_EQ(true, topStack.getBool());
}


TEST(global_var_get, bool_false) {

    Value topStack = custom_main_top_stack("var x = false; x;");
    EXPECT_TRUE(topStack.isBool());
    EXPECT_EQ(false, topStack.getBool());
}


TEST(global_var_get, nil) {

    Value topStack = custom_main_top_stack("var x = nil; x;");
    EXPECT_TRUE(topStack.isNil());
}


TEST(global_var_get, nil_2) {

    Value topStack = custom_main_top_stack("var x; x;");
    EXPECT_TRUE(topStack.isNil());
}


TEST(global_var_get, number) {

    Value topStack = custom_main_top_stack("var x = 2.5; x;");
    EXPECT_TRUE(topStack.isNumber());
    EXPECT_EQ(2.5, topStack.getDouble());
}


TEST(global_var_get, string) {

    Value topStack = custom_main_top_stack("var x = \"variable\"; x;");
    EXPECT_TRUE(topStack.isStr());
    EXPECT_EQ("\"variable\"", topStack.getString());
}
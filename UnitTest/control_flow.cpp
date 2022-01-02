#include "Utils.h"


TEST(control_flow, if_true) {

    Value lastElement = custom_main_top_stack("if (true) { 3.4; }");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(3.4, lastElement.getDouble());
}


TEST(control_flow, if_else_true) {

    Value lastElement = custom_main_top_stack("if (true) { 3.4; } else { 5.2; }");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(3.4, lastElement.getDouble());
}


TEST(control_flow, if_else_false) {

    Value lastElement = custom_main_top_stack("if (false) { 3.4; } else { 5.2; }");
    lastElement.Print();

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(5.2, lastElement.getDouble());
}
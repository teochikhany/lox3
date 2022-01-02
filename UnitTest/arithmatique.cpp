#include "pch.h"


TEST(arithmatique, addition) {

    Value lastElement = custom_main_top_stack("2+5;");

    EXPECT_TRUE(lastElement.isNumber() );
    EXPECT_EQ(7.0, lastElement.getDouble() );
}


TEST(arithmatique, addition_negative) {

    Value lastElement = custom_main_top_stack("2 + (-5);");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(-3.0, lastElement.getDouble());
}


TEST(arithmatique, addition_negative_2) {

    Value lastElement = custom_main_top_stack("2 + -5;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(-3.0, lastElement.getDouble());
}


TEST(arithmatique, multiplication) {

    Value lastElement = custom_main_top_stack("3 * 4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(12.0, lastElement.getDouble());
}


TEST(arithmatique, multiplication_negative) {

    Value lastElement = custom_main_top_stack("3 * -4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(-12.0, lastElement.getDouble());
}


TEST(arithmatique, substraction) {

    Value lastElement = custom_main_top_stack("4 - 1;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(3.0, lastElement.getDouble());
}


TEST(arithmatique, substraction_negative) {

    Value lastElement = custom_main_top_stack("3 - 4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(-1.0, lastElement.getDouble());
}


TEST(arithmatique, order_precendence) {

    Value lastElement = custom_main_top_stack("3 + 6 * 4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(27.0, lastElement.getDouble());
}


TEST(arithmatique, order_precendence_2) {

    Value lastElement = custom_main_top_stack("(3 + 6) * 4;");

    EXPECT_TRUE(lastElement.isNumber());
    EXPECT_EQ(36.0, lastElement.getDouble());
}

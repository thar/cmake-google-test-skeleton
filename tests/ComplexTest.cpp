#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Complex.h"

TEST(ComplexTest, GivenZeroComplex_thenRealPartZeroAndImagPartZero) {

    Complex complex(0, 0);

    EXPECT_EQ(0, complex.getRealPart());
    EXPECT_EQ(0, complex.getImaginaryPart());

}
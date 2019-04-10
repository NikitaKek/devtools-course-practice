// Copyright 2019 Guseva Catherine

#include <gtest/gtest.h>

#include <cmath>

#include "include/complex_number.h"

TEST(Guseva_Catherine_ComplexNumberTest, Can_multiply_module) {
	// Arrange
	int ab1;
	int ab2;
	int abr;
	ComplexNumber z(13.0, 12.0);
	ComplexNumber z1(12.0, 13.0);

	// Act
	ab1 = fabs(z.getRe() + z.getIm());
	ab2 = fabs(z1.getRe() + z1.getIm());
	abr = ab1 * ab2;

	// Assert
	EXPECT_EQ(abr, ab1 * ab2);
}

TEST(Guseva_Catherine_ComplexNumberTest, Cant_divide_by_zero) {
	// Arrange
	ComplexNumber z1(1.0, 2.0);
	ComplexNumber z2(0.0, 0.0);

	// Act & Assert
	ASSERT_ANY_THROW(z1 / z2);
}

TEST(Guseva_Catherine_ComplexNumberTest, Can_assign_complex) {
	// Arrange
	double re = 55.5;
	double im = 44.4;

	// Act
	ComplexNumber a(re, im);
	ComplexNumber c(2.0, 2.0);

	// Assert
	ASSERT_NO_THROW(c = a);
}

TEST(Guseva_Catherine_ComplexNumberTest, Can_add_complex_twice) {
	// Arrange
	ComplexNumber z1(1.0, 3.0);
	ComplexNumber z2(1.0, 7.0);
	ComplexNumber z3(2.0, 2.0);

	// Act
	ComplexNumber z = z1 + z2 + z3;

	// Assert
	ComplexNumber expected_z(4.0, 12.0);
	EXPECT_EQ(expected_z, z);
}

TEST(Guseva_Catherine_ComplexNumberTest, Can_difference_complex_twice) {
	// Arrange
	ComplexNumber z1(10.0, 5.0);
	ComplexNumber z2(1.0, 3.0);
	ComplexNumber z3(5.0, 2.0);

	// Act
	ComplexNumber z = z1 - z2 - z3;

	// Assert
	ComplexNumber expected_z(4.0, 0.0);
	EXPECT_EQ(expected_z, z);
}

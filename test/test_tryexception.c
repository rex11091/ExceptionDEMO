#include "unity.h"
#include "tryexception.h"
#include "CException.h"
#include "Exception.h"
#include "stdio.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_tryexception(void)
{
    tryException(0);
}

void test_tryexception2(void)
{
    tryException(5);
}
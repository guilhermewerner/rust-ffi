#pragma once

#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus
namespace Library
{
#endif

#ifdef __cplusplus
    extern "C"
    {
#endif

        float Add(float num1, float num2);

        /**
         * Dealloc a string pointer.
         */
        void DeallocString(char *ptr);

        float Divide(float num1, float num2);

        char *Hello(char *input);

        float Multiply(float num1, float num2);

        float Subtract(float num1, float num2);

#ifdef __cplusplus
    }
#endif

#ifdef __cplusplus
}
#endif

#include <assert.h>
#include <stdio.h>

#include "zwops.h"

int main()
{
    assert(5 ==zw_sum(3, 2));
    assert(0 == zw_sum(0, 0));
    assert(0 == zw_sum(1, -1));
    return 0;
}


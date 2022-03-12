#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#define GLM_ENABLE_EXPERIMENTAL
#include <stdio.h>
#include "lib/glm/glm/glm.hpp"

int main(int argc, char const* argv[]) {
    // test if glm linking worked
    auto abs = glm::abs(-5);
    printf("hello world! abs: %i", abs);
    return 0;
}

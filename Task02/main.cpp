#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#define GLM_ENABLE_EXPERIMENTAL
#include <stdio.h>
#include <iostream>
#include "./lib/glm/glm/glm.hpp"
#include "./lib/glm/glm/ext.hpp"
#include "./lib/glm/glm/gtc/matrix_transform.hpp"
#include "./lib/glm/glm/gtx/hash.hpp" 
#include <vector>

#define SCREEN_WIDTH 800.0f
#define SCREEN_HEIGHT 600.0f

void foreach(std::function<void(glm::vec3, int i)> f, glm::vec3* v) {
    for (size_t i = 0; i < 8; i++) {
        f(v[i], i);
    }
}

void arrayLog(const char* name, std::function<void()>f) {
    std::cout << name << ": [" << std::endl;
    f();
    std::cout << "]" << std::endl;
}

glm::vec2 transformToPixelSpace(glm::vec2 ndc) {
    return glm::vec2(
        (ndc.x + 1.0f) * SCREEN_WIDTH * 0.5f,
        (1.0f - ndc.y) * SCREEN_HEIGHT * 0.5f
    );
}

int main(int argc, char const* argv[]) {
    auto model = glm::mat4(1.0f);

    glm::vec3 cube_vertices[] = {
        glm::vec3(1.0f, 1.0f, 1.0f),
        glm::vec3(1.0f, -1.0f, 1.0f),
        glm::vec3(-1.0f, -1.0f, 1.0f),
        glm::vec3(-1.0f, 1.0f, 1.0f),
        glm::vec3(1.0f, 1.0f, -1.0f),
        glm::vec3(1.0f, -1.0f, -1.0f),
        glm::vec3(-1.0f, -1.0f, -1.0f),
        glm::vec3(-1.0f, 1.0f, -1.0f)
    };


    auto view = glm::lookAt(
        glm::vec3(0, 0, -2),
        glm::vec3(0, 0, 0),
        glm::vec3(0, 1, 0)
    );



    auto projection = glm::perspective(
        glm::radians(90.0f),
        SCREEN_WIDTH / SCREEN_HEIGHT,
        0.1f,
        100.0f
    );


    model = glm::rotate(model, glm::radians(45.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    model = glm::translate(model, glm::vec3(0.0f, 2.0f, 0.0f));


    glm::mat4 mvp = projection * view * model;

    std::cout << "model: " << glm::to_string(model) << std::endl;
    std::cout << "view: " << glm::to_string(view) << std::endl;
    std::cout << "projection: " << glm::to_string(projection) << std::endl;
    std::cout << "mvp Matrix: " << glm::to_string(mvp) << std::endl;

    glm::vec2 screenpos[8];
    arrayLog("Cube vertices", [&]() {
        foreach([](glm::vec3 v, int i) {
            std::cout << "Vertex " << i << ": " << glm::to_string(v) << std::endl;
            }, cube_vertices);
        }
    );

    arrayLog("Screen positions", [&]() {
        foreach([&](glm::vec3 vertex, int i) {
            screenpos[i] = transformToPixelSpace(glm::vec2(mvp * glm::vec4(vertex, 1.0f)));
            std::cout << i << ":" << glm::to_string(glm::vec2(screenpos[i])) << std::endl;
            }, cube_vertices);
        }
    );


    return 0;
}

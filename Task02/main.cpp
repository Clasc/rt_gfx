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

int main(int argc, char const* argv[]) {
    std::cout << "Hello world!" << std::endl;

    // create a cube and render it via a camera
    glm::mat4 model = glm::mat4(1.0f);
    glm::mat4 view = glm::mat4(1.0f);
    glm::mat4 projection = glm::mat4(1.0f);
    glm::mat4 mvp = glm::mat4(1.0f);
    glm::mat4 mv = glm::mat4(1.0f);
    glm::mat4 normal = glm::mat4(1.0f);


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

    glm::vec3 cube_position = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 cube_rotation = glm::vec3(0.0f, 0.0f, 0.0f);
    glm::vec3 cube_scale = glm::vec3(1.0f, 1.0f, 1.0f);
    glm::vec3 cube_translation = glm::vec3(0.0f, 0.0f, 0.0f);

    // apply transformations to the cube
    model = glm::translate(model, cube_position);
    model = glm::rotate(model, glm::radians(cube_rotation.x), glm::vec3(1.0f, 0.0f, 0.0f));
    model = glm::rotate(model, glm::radians(cube_rotation.y), glm::vec3(0.0f, 1.0f, 0.0f));
    model = glm::rotate(model, glm::radians(cube_rotation.z), glm::vec3(0.0f, 0.0f, 1.0f));
    model = glm::scale(model, cube_scale);



    // create Camera 
    glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
    glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
    glm::mat4 view = glm::lookAt(cameraPos, cameraPos + cameraFront, glm::vec3(0.0f, 1.0f, 0.0f));
    glm::mat4 projection = glm::perspective(glm::radians(45.0f), 1.0f, 0.1f, 10.0f);

    // look at cube 
    model = glm::translate(model, glm::vec3(0.0f, 0.0f, -1.0f));
    mvp = projection * view * model;
    mv = view * model;
    normal = glm::transpose(glm::inverse(mv));

    // Compute the screen coordinates of the 8 vertices of the cube
    glm::vec4 screen_coords[8];
    for (int i = 0; i < 8; i++) {
        screen_coords[i] = projection * view * model * glm::vec4(cube_vertices[i], 1.0f);
        screen_coords[i] /= screen_coords[i].w;
        screen_coords[i] = (screen_coords[i] + 1.0f) / 2.0f;
    }

    // Print the screen coordinates of the 8 vertices of the cube
    for (int i = 0; i < 8; i++) {
        std::cout << "Vertex " << i << ": " << screen_coords[i].x << ", " << screen_coords[i].y << std::endl;
    }

    return 0;
}
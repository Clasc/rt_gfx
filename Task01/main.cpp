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

namespace task {
    std::vector<glm::vec3> create_vecs() {
        return std::vector<glm::vec3>{
            glm::vec3(1.0f, 0.0f, 0.0f),
                glm::vec3(0.0f, 2.0f, 0.0f),
                glm::vec3(0.0f, 0.0f, 4.0f)
        };
    }

    void print_seperator() {
        std::cout << "__________________" << std::endl;
    }

    glm::mat4 create_rotation_mat(const glm::vec3 axis, const float angle) {
        // create a rotation matrix from the given vector
        auto normalized = glm::normalize(axis);
        auto model = glm::mat4(1.0);
        glm::rotate(model, angle, normalized);
        return glm::rotate(model, angle, normalized);
    }

    void print_vector(const char* name, glm::vec3 vec) {
        std::cout << name << " :" << glm::to_string(vec) << std::endl;
    }

    glm::vec3 rotate_around(const glm::vec3 source, const glm::vec3 axis, const float angle) {
        // auto rotated_vec = glm::rotate(Model, angle, vec); // where x, y, z is axis of rotation (e.g. 0 1 0)
        // see page 36
        auto rotation_matrix = create_rotation_mat(axis, angle);
        return rotation_matrix * glm::vec4(source, 0.0f);
    }

    void rotate_all(const glm::vec3 axis, const float angle) {
        auto vecs = create_vecs();
        for (const auto v : vecs) {
            print_vector("origin", v);
            auto result = rotate_around(v, axis, angle);
            print_vector("result", result);
            print_seperator();
        }
    }

    void print_angle_axis(const glm::vec3 axis, const float angle) {
        std::cout << "angle: " << angle << std::endl;
        print_vector("axis", axis);
    }
}

int main(int argc, char const* argv[]) {
    auto const angle = glm::radians(90.0f);
    auto rotation_vector = glm::vec3(0.0f, 0.0f, 1.0f);
    task::print_angle_axis(rotation_vector, angle);
    std::cout << "--- rotate vectors --- " << std::endl << std::endl;
    task::rotate_all(rotation_vector, angle);
    return 0;
}
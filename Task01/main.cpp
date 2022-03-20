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
        std::cout << "--------------------" << std::endl;
    }

    glm::mat4 create_rotation_mat(const glm::vec3 axis, const float angle) {
        // create a rotation matrix from the given vector
        auto normalized = glm::normalize(axis);
        auto model = glm::mat4(1.0);
        glm::rotate(model, angle, normalized);
        return glm::rotate(model, angle, normalized);
    }

    void log_structure(const char* name, glm::vec3 vec) {
        std::cout << name << " :" << glm::to_string(vec) << std::endl;
    }

    void log_structure(const char* name, glm::mat4 mat) {
        std::cout << name << " :" << glm::to_string(mat) << std::endl;
    }

    glm::vec3 rotate_around(const glm::vec3 source, glm::mat4 rotation_mat) {
        return rotation_mat * glm::vec4(source, 0.0f);
    }

    void rotate_all(glm::mat4 rotation_mat) {
        auto vecs = create_vecs();
        for (const auto v : vecs) {
            log_structure("origin", v);
            auto result = rotate_around(v, rotation_mat);
            log_structure("result", result);
            print_seperator();
        }
    }

    void print_angle_axis(const glm::vec3 axis, const float angle) {
        std::cout << "angle: " << angle << std::endl;
        log_structure("axis", axis);
    }

    void log_section(const char* section) {
        std::cout << std::endl << std::endl << "--- " << section << " --- " << std::endl << std::endl;
    }
}

int main(int argc, char const* argv[]) {
    task::log_section("setup rotation matrix");
    auto const angle = glm::radians(90.0f);
    auto rotation_vector = glm::vec3(0.0f, 0.0f, 1.0f);
    auto rotation_mat = task::create_rotation_mat(rotation_vector, angle);
    task::print_angle_axis(rotation_vector, angle);
    task::log_structure("rotation mat", rotation_mat);
    task::log_section("rotate vectors");
    task::rotate_all(rotation_mat);
    return 0;
}
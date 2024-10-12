#ifndef SHADER_H
#define SHADER_H

#include <glad.h> 

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

typedef uint32_t uint32;
typedef uint64_t uint64;

class Shader
{
public:
    // the program ID
    uint32 ID;

    // constructor reads and builds the shader
    Shader(const char* vertexPath, const char* fragmentPath);
    // use/activate the shader
    void use() const;
    // utility uniform functions
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;

    int getUniformLocation(const std::string& name) const;
};

#endif

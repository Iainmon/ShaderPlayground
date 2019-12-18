//
//  ShaderCompiler.cpp
//  ShaderSandbox
//
//  Created by Iain Moncrief on 12/16/19.
//

#include "ShaderCompiler.hpp"


void compileShader(string inputFileName = "program.frag", string outputFileDirectory = "../../../data/", string outputFileName = "shader.frag") {
    
    ifstream shaderSTD = ifstream(outputFileDirectory + "shader_std.frag");
    ifstream shaderProgram = ifstream(outputFileDirectory + inputFileName);
    ofstream transpiledShaderProgram = ofstream(outputFileDirectory + outputFileName);
    
    transpiledShaderProgram << shaderSTD.rdbuf() << shaderProgram.rdbuf();
    transpiledShaderProgram.close();
    
}

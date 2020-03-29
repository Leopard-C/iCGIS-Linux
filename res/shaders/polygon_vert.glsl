#version 330 core

layout (location = 0) in vec2 position;
layout (location = 1) in vec3 fillColorIn;
//layout (location = 2) in vec3 borderColorIn;

out vec3 fillColor;

uniform mat4 u_MVP;

void main()
{
    gl_Position = u_MVP * vec4(position, 0.0, 1.0);
    fillColor = fillColorIn;
}

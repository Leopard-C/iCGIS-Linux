#version 330 core

in vec3 fillColor;

void main()
{
    gl_FragColor = vec4(fillColor, 1.0);
}

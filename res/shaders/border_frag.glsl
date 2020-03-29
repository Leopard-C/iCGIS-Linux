#version 330 core

in vec3 borderColor;

void main()
{
    gl_FragColor = vec4(borderColor, 1.0);
}

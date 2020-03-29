#version 330 core

in vec2 texCoord;

uniform sampler2D ourTexture;

void main()
{
    gl_FragColor = texture(ourTexture, texCoord);
}

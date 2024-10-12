#version 460 core

out vec4 FragColor;

in vec3 ourColor;
uniform float uColor;

void main()
{
	vec4 newColor = vec4(ourColor, uColor);
	FragColor = newColor;
}
/*
	@file Sprite.vert
*/
#version 430

layout(location=0) in vec3 vPostion;
layout(location=1) in vec4 vColor;
layout(location=2) in vec2 vTexCoord;

layout(location=0) out vec4 outColor;
layout(location=1) out vec2 outTexCoord;

uniform mat4x4 matMVP;

/*
	スプライト用頂点シェーダー.
*/
void main()
{
	outColor = vColor;
	outTexoord = vTexCoord;
	gl_Position = matMVP * vec4(vPosition, 1.0);
}
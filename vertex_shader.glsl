#version 330 core

void main() {
	//
	vec2 vertex_position = vec2(gl_VertexID%2, gl_VertexID/2);
	
	//
	vertex_position = 2.0*vertex_position - 1.0;

	//
    gl_Position = vec4(vertex_position, 0.0, 1.0);
}

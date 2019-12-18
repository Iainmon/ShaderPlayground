#ifdef GL_ES
precision mediump float;
#endif


uniform float time;
uniform vec2 mouse;
uniform vec2 resolution;

vec2 coordinate;
vec2 uv;

void pixel(inout vec3 color);

void main() {

    coordinate = gl_FragCoord.xy;
    uv = coordinate / resolution;

    vec4 color = vec4(1.0);

    pixel(color.rgb);

    gl_FragColor = color;
}

vec2 rotate(vec2 origin, vec2 position, float angle) {
    float s = sin(angle);
    float c = cos(angle);
    
    position.x -= origin.x;
    position.y -= origin.y;
    
    float xnew = position.x * c - position.y * s;
    float ynew = position.x * s + position.y * c;
    
    return vec2(xnew + origin.x, ynew + origin.y);
}

#pragma header

uniform float uMix;
uniform vec4 color;
uniform vec4 in;

void main()
{
    in.r = 0;
    in.g = 0;
    in.b = 0;
    vec4 out = flixel_texture2D(bitmap, openfl_TextureCoordv);
    out.a = in.a;
    out.rgb = colorUniform1.rgb * in.r + colorUniform2.rgb * in.g + colorUniform3.rgb * in.b;
}
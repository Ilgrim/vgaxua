#include <VGAXUA.h>

//image generated from 1BITIMAGE - by Sandro Maffiodo
#define IMG_PIRATE_WIDTH 200
#define IMG_PIRATE_BWIDTH 25
#define IMG_PIRATE_HEIGHT 240
//data size=6000 bytes
const unsigned char img_pirate_data[IMG_PIRATE_HEIGHT][IMG_PIRATE_BWIDTH] PROGMEM={
{   0,   0,   0,   0,   0,   3, 119, 119, 119, 112,   0,   0,   7, 113, 112,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   3, 255, 255, 255, 248,   0,   0,  15, 224, 248,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   7, 223, 129,  87, 216,   0,   0,  15, 192,  92,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  15, 254, 136, 169, 248,   0,   0,  15, 192, 126,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  23, 116,   0,   1, 116,   0,   0,   7,  64, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  31, 240,   0,   0, 252,   0,   0,  31, 128,  63,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  63, 192,   0,   0, 124,   0,   0,  31, 128,  31, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  63, 200, 136, 128, 254,   0,   0,  63, 128,  15, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  55,   0,   0,   0, 119,   0,   0,  55,   0,   7,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0, 127, 128,   0,   0,  63,   0,   0,  63,   0,   7, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0, 223,   0,   0,   0,  31,   0,   0,  31,   0,   1, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0, 254, 136, 136,   8,  63, 128,   0, 126,   0,   3, 240,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0, 116,   0,   0,   0,  23,  64,   0, 118,   0,   1, 112,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   1, 252,  32,   0,   0,  63, 192,   0, 126,   0,   0, 248,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   3, 248,   0,   0,   0,   5, 192,   0, 252,   0,   0, 124,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   7, 248, 136, 136, 128, 143, 224,   0, 254,   0,   0, 124,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   7, 112,   0,   0,   0,   7, 112,   0, 116,   0,   0, 116,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  15, 242,   0,   0,   0,   3, 240,   1, 254,   0,   0,  62,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  15, 192,   0,   0,   0,   1, 216,   1, 220,   0,   0,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  15, 200, 136, 136,   8,   3, 248,   1, 248,   0,   0,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  23,   0,   0,   0,   0,   1, 116,   3, 112,   0,   0,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  63, 160,   0,   0,   0,   0, 254,   7, 248,   0,   0,  15, 192,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  63,   0,   0,   0,   0,   0, 125, 223, 240,   0,   0,   5, 192,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0, 126, 136, 136, 136, 136, 128, 255, 255, 240,   0,   0,   3, 224,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0, 118,   0,   0,   0,   0,   0, 119, 119, 112,   0,   0,   3, 112,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0, 254,   0,   0,   0,   0,   0,  63, 255, 224,   0,   0,   3, 248,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   1, 252,   0,   0,   0,   0,   0,  15, 223, 128,   0,   0,   1, 220,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   1, 252, 136, 136,   8,   8,   0,  15, 255, 128,   0,   0,   0, 254,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   1, 112,   0,   0,   0,   0,   0,   7, 119,   0,   0,   0,   0,  55,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   3, 250,  32,   0,   0,   0,   0,   3, 255,   0,   0,   0,   0,  63, 128,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   7, 248,   0,   0,   0,   0,   0,   1, 124,   0,   0,   0,   0,  29, 192,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   7, 248, 136, 136, 136, 136, 128,   0,  56,   0,   0,   0,   0,  15, 248,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   7,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 119,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,  31, 226,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 255, 128,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,  31, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1, 221, 208,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,  63, 200, 136, 136,   8, 136,   0,   0,   0,   0,   0,   0,   0,   0, 191, 255,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0, 119, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21, 119,  64,   0,   0,   0,   0,   0, },
{   0,   0,   0, 255, 162,  32,   0,   0,  32,   0,   0,   0,   0,   0,   0,   0,   0,   1, 255, 192,   0,   0,   0,   0,   0, },
{   0,   0,   1, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1, 221, 192,   0,   0,   0,   0,   0, },
{   0,   0,   1, 254, 168, 136, 136, 136, 136, 128,   0,   0,   0,   0,   0,   0,   0,   0, 175, 192,   0,   0,   0,   0,   0, },
{   0,   0,   3, 116,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  64,   0,   0,   0,   0,   0, },
{   0,   0,   3, 254,  34,   0,   0,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 192,   0,   0,   0,   0,   0, },
{   0,   0,   7, 220,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  64,   0,   0,   0,   0,   0, },
{   0,   0,  15, 250, 136, 136,   8,   8, 136,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14, 192,   0,   0,   0,   0,   0, },
{   0,   0,   7, 112,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0, },
{   0,   0,  31, 226,  32,  32,   0,   2,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 128,   0,   0,   0,   0,   0, },
{   0,   0,  61, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1, 128,   0,   0,   0,   0,   0, },
{   0,   0, 127, 232, 168, 136, 128, 136, 136, 128,   0,   0,   0,   0,   0,   0,   0,   0,  10, 128,   0,   0,   0,   0,   0, },
{   0,   0, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0, },
{   0,   1, 255, 162,  34,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0, },
{   0,   1, 223,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0, },
{   0,   3, 255, 170, 136, 136,   0,   8, 136,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,   0,   0,   0,   0,   0,   0, },
{   0,   7, 117,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0, },
{   0,   7, 250, 162,  32,   0,   0,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0, },
{   0,  13, 240,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,  15, 250, 168, 136, 128,   0, 136, 136, 128,   0,   0,   0,   0,   0,   0,   0,   0, 138,   0,   0,   0,   0,   0,   0, },
{   0,  23,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,  63, 234,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0, },
{   0,  95, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0, },
{   0, 255, 138, 136,   8,   0,   0,   8,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,   0,   0,   0,   0,   0,   0, },
{   1, 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   7, 254, 170,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40,   0,   0,   0,   0,   0,   0, },
{  13, 252,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{  15, 250, 168, 136, 128, 128,   0, 128, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0, 168,   0,   0,   0,   0,   0,   0, },
{  23, 112,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{  63, 226,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0, },
{  93, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 255, 202, 168, 136,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 160,   0,   0,   0,   0,   0,   0, },
{ 119,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,   0, },
{ 250,  34, 160,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,   0,   0,   0,   0, },
{ 240,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 250, 170, 168, 136,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128,   0,   0,   0,   0,   0,   0, },
{  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 162,  42,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2, 128,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 138, 170, 136,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10, 128,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{  42, 162,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0, },
{ 168, 168, 128, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 168,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0, },
{  34,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 168, 136,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 168,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0, },
{  32,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0, },
{ 168, 136, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 138, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 138, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40,   0,   0, 138,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42,   0,   2,  32,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  80,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 168, 128,   0,   0,   0,   0,   0,   0,   0,   8, 138, 170, 232, 172,   8, 136, 128,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  85,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{  32,   0,   0,   0,   0,   0,   0,   0,   0,  10, 175, 255, 160,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,  64,   0,  21,  95, 255,  64,   0,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 136,   0,   0,   0,   0,   0,   0, 138,  42, 191, 255, 255, 136, 136,  10, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   1,   3, 255, 255, 253,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{  32,   0,   0,   0,   0,   0,   2, 170, 255, 255, 255, 251, 130,  34,   2,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,  85,  84, 245, 255, 253,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 136, 128,   0,   0, 128, 128,   0,  42, 170, 191, 255, 254, 138, 170, 138, 176,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   1, 255, 253,   0,  80,   1,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   2,  32,   0,   2, 170,  42,  10, 255, 250,  42, 170, 130,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   4,   0,   4,   0,  71, 244,   0,  84,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{ 136,   0,   0,   8,   2, 128, 138, 168, 168, 138, 175, 250, 138, 254, 136,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,  21,   0,   0,   0,  23, 208,   0,  53,   1,   0,   0,  96,   0,  31,   0,  16,   6,   2,   0, },
{  32,   0,   0,  34,   2,  32, 170, 160, 160,  34, 170, 170, 170, 186, 128,   0,   0,  48,  16, 112, 128,  24,   7,   4,   0, },
{   0,   0,   0,   0,   0,   0,  68,  68,   0,   0,  92,  80,   4,  84,  64,  64,   0,  48,  16, 224,  64,  24,   3,   8,   0, },
{ 128, 128,   0, 128, 136, 138, 170, 170, 170, 138, 190, 170, 168, 170, 136,  64,   0,  24,  32, 192,   0,  44,   1, 144,   0, },
{   0,   0,   0,   0,   0,   0,  17,   1,   0,   1,  23,  64,   0,  16,   0,   0,   0,  24,  33, 192,   0,  44,   0, 224,   0, },
{   0,   0,   0,   0,  34,  34, 170, 170, 170, 170, 190, 170,   0,  42, 130,   0,   0,  28,  65, 128,   0,  70,   0, 224,   0, },
{   0,   0,   0,   0,   0,   0,  84,  68,  68,  85,  94,  64,   0,   4,   0,   0,   0,  12,  65, 129, 224,  70,   0,  96,   0, },
{ 136,   0,   0,  10, 136, 138, 174, 170, 170, 170, 190, 170, 200, 138, 138, 128,   0,  12, 129, 128,  96, 255,   0, 176,   0, },
{   0,   0,   0,   0,   0,  16,  21,  81,  16,   1, 126,   3,  65,   1,   0,  16,   0,   6, 128, 192,  96, 131,   1,  24,   0, },
{   0,   0,   0,   0,   2,  42, 190, 235, 170, 170, 254, 163, 162, 170, 162,   0,   0,   6,   0, 192,  97,   3,   2,  28,   0, },
{   0,   0,   0,   0,   0,   5,  93, 197, 196,  68, 118,  71, 197,  69,  64,  16,   0,   3,   0,  96,  97,   1, 132,  12,   0, },
{ 136, 128,   0, 136, 136, 170, 190, 175, 170, 170, 254, 175, 239, 174, 168, 136,   0,   3,   0,  57, 194,   1, 136,   6,   0, },
{   0,   0,   0,   0,   0,   1,  20,   5,   0,   1, 118,   7,  87,   5,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   2,   0,   2, 170, 190, 170, 160,  43, 254, 171, 250, 174, 168,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   5,  84,  68,  64,   5, 253,  69,  84,  69,  80,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   8,   8,   8, 136,   8, 171, 254, 170, 232, 171, 255, 138, 170, 174, 168, 162,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  17, 116,  17,  96,   7, 245,   1,  17, 245,  16,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   2,   0,   2,  43, 254, 171, 226, 171, 255, 170, 171, 255, 186, 162,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  87, 252,  69, 192,  71, 245,  69,  71, 255, 212,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0, 128, 170, 168, 136, 175, 254, 175, 234, 175, 255, 171, 255, 255, 170, 162,   0,   0,   0,   0,   0,   0,   8,   0,   0, },
{   0,   0,   0,   0,   0,   7, 255, 229,  80,  23, 245,   3,  63, 255, 144,   0,   0,   3, 192,   0, 192,   0,  12,   0,   0, },
{   0,  10,   0,  32,   0,  47, 255, 255, 170, 175, 255, 171, 255, 255, 170, 162,   0,   3, 192,   0, 192,   0,  28,   0,   0, },
{   0,   1,   0,  64,   0,   7, 255, 255, 244,  31, 253,  69, 127, 255, 196,  64,   0,   3, 192,   0, 192,   0,  30,   0,   0, },
{   0,   1,  40, 168, 136,  43, 255, 255, 234, 175, 254, 171, 255, 255, 174, 136,   0,   3, 192,   0, 192,   0,  62,   0,   0, },
{   0,   0,  32,   0,   0,  17, 255, 255, 112,  23, 245,   1, 255, 255, 132,   0,   0,   3, 192,   0, 192,   0,  63,   0,   0, },
{   0,   0, 168,  32,   0,  43, 255, 255, 234, 191, 255, 170, 191, 255, 170,  34, 128,   3, 192,   0, 192,   0, 111,   0,   0, },
{   0,   0,   0,   0,   0,   5, 255, 255, 228,  95, 253,  68, 223, 255,  68,   0,   0,   3, 192,   0, 192,   0, 103, 128,   0, },
{   0,   0, 168, 168, 138, 171, 255, 255, 234, 191, 255, 170, 255, 255, 170, 138, 128,   3, 192,   0, 192,   0, 199, 128,   0, },
{   0,   0,   0,   0,   0,   1, 127, 255, 224,  23, 255,   0,  63, 255,   4,   0,   0,   3, 192,   0, 192,   0, 195, 192,   0, },
{   0,   0,  32, 168,   2, 170, 255, 255, 234, 191, 255, 170, 191, 254, 170,   2, 128,   3, 192,   0, 192,   1, 131, 192,   0, },
{   0,   0,   0,   0,   4,  69,  95, 255, 228,  95, 253,  68,  23, 252,   4,   0,  64,   3, 192,   0, 192,   1, 129, 192,   0, },
{   0,   0,   0, 168, 138, 170, 255, 255, 250, 191, 254, 234, 191, 250, 170,   8, 160,   3, 192,   0, 192,   3,   1, 224,   0, },
{   0,   0,   0,   0,   0,  17,  87, 255, 241,  23,  85,  65,  23, 241,   0,   0,   0,   3, 192,   0, 192,   3,   1, 224,   0, },
{   0,   0,   2,  34, 162,  42, 191, 255, 234, 175, 255, 170, 250, 234, 170,   0,  10,   3, 192,   0, 192,   3,   0, 240,   0, },
{   0,   0,   0,  64,   0,  69,  95, 255, 245,  79, 221, 196, 125,  68,  68,   0,   0,   3, 192,   0, 192,   7, 255, 240,   0, },
{   0,   0,   2,  10, 170, 174, 255, 255, 238, 191, 255, 238, 186, 170, 170, 136, 138,   3, 192,   0, 192,   6,   0, 120,   0, },
{   0,   0,   0,   0,   0,  21, 119, 255, 245,  31, 127,  71,  15, 144,   4,   0,   0,   3, 192,   0, 192,  12,   0, 120,   0, },
{   0,   0,   2,  34,  40,  42, 191, 255, 250, 191, 255, 238, 175, 186, 170,   0,  34,   3, 192,   0, 192,  12,   0,  60,   0, },
{   0,   0,   0,   0,   0,   5,  93, 255, 244,  95, 255, 236,   7, 244,   4,   4,   0,   1, 224,   1, 128,  24,   0,  60,   0, },
{   0,   0,  10, 136, 168, 138, 175, 255, 254, 191, 255, 248, 139, 186, 170, 170, 138,   1, 224,   1, 128,  24,   0,  30,   0, },
{   0,   0,   0,   0,  16,  17,  85, 255, 221,  23, 245, 240,   1, 240,  16,   0,   0,   0, 240,   3,   0,  48,   0,  30,   0, },
{   0,   0,   0,  10,  32,  42, 187, 255, 250, 190, 187, 168,  42, 250, 170, 162, 162,   0, 124,  14,   0,  48,   0,  15,   0, },
{   0,   0,   0,   0,   0,  21,  87, 255, 244,  84,  85,  64,   4,  92,  84,   0,  64,   0,  31, 248,   0,  96,   0,  15,   0, },
{   0,   0,   8, 162, 168, 170, 239, 255, 250, 190, 170, 168, 170, 170, 168, 170, 170,   0,   1, 128,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   5,  23, 255, 240,  16,  69,   0,   0,   9,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   8,  10,   2, 170, 175, 255, 234, 186, 234,  32,  34,  42, 170,   2, 130, 128,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  69,  87, 255,  87, 253,  84,   1,   0,   4,  64,   0,   0,  64,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,  40,  32, 136, 170, 175, 255, 239, 254, 170, 138, 168, 138, 168, 170, 138, 160,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   1,  23, 253, 127, 255, 209,   1,  80,   0,  16,   0,   0,  16,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,  32, 162,  40, 170, 171, 187, 255, 255, 250, 162, 168,  34, 160,   2,  42,  58,   0,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  68,  85, 215, 255, 255, 252,  64,  84,   5,  80,   0,  64,  21,  64,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0, 168, 170, 170, 170, 251, 255, 250, 174, 168, 170, 138, 168, 138, 170, 191, 238,   0,   0,   0,   0,   0,   0, },
{   0,   0,   1,   0,   0,  16,  21, 119, 255, 209,  19,   0,  16,   1,  16,   0,   0,  21,  69,   0,   0,   0,   0,   0,   0, },
{   0,   0,  42,  10,  42, 186, 170, 255, 255, 234, 170,  34,  42,   2, 160,   2,  40,  42, 170, 168,   0,   0,   0,   0,   0, },
{   0,   0,   4,   0,   4,  85,  85, 223, 255,   0,  21,   0,   0,   0,  64,   0,   4,   4,  69,   4,   0,   0,   0,   0,   0, },
{   0,   0,   2,  40, 170, 170, 170, 255, 255, 170, 170, 136, 168,  10, 168,  10, 170, 170, 238, 170,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,  16,  17, 127, 255,   0,  17,   0,  16,   1,  64,   1,   0,  21,  84,  16,   0,   0,   0,   0,   0, },
{   0,   0, 160, 160, 162,  34, 170, 255, 254, 162, 170, 162,   0,   2, 160,   2, 162, 171, 234, 170, 128,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,  85, 255, 244,  64,   0,   0,   0,   0,  64,   1,   0,  21,  84,  68,  64,   0,   0,   0,   0, },
{   0,   0,  34, 136, 136, 138, 171, 255, 250, 138, 168, 170, 168, 136, 168, 136, 168, 175, 234, 170, 160,   0,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   1, 255, 208,   0,   0,   0,   0,   0,  64,   0,   1,  21,  80,   0,   0,   0,   0,   0,   0, },
{   0,   0, 138,  34,   0,  10,  42, 255, 170, 130,  42,  42, 170,  32, 168,   2, 162, 171, 170, 170, 168,   0,   0,   0,   0, },
{   0,   0,   4,   0,   0,   4,  21, 255, 196,   0,  68,   4,  68,   0,  84,   5,   0,  69,  68,  68,   4,   0,   0,   0,   0, },
{   0,   0, 168, 138, 138, 168, 170, 255, 170, 138, 170, 170, 170, 168, 170, 138, 136, 170, 170, 170, 170,   0,   0,   0,   0, },
{   0,   0,   0,   0,  17,   0,  80, 255,   0,   0,  16,  16,  16,  16,  17,  21,   0,  16,   0,   0,   0,   0,   0,   0,   0, },
{   0,   2, 136,  42, 170, 168,  42, 255, 170, 162, 170, 170, 170, 168, 162, 170,  34,  42, 170, 170, 170,   0,   0,   0,   0, },
{   0,   0,   0,   0,  80,   0,  68, 125,  68,   0,  69,  68,  68,  80,  80,  69,  16,  17,  68,  68,  64,   0,   0,   0,   0, },
{   0,   0,   0, 138, 170, 136, 170, 254, 170, 138, 254, 170, 170, 168, 170, 170, 168, 171, 170, 170, 170, 128,   0,   0,   0, },
{   0,   0,   0,   1,   4,   0,   0, 117,  16,   3,  85,   1,   0,  16,  16,  85,   0,  21,   0,   0,   0,   0,   0,   0,   0, },
{   0,   2,  34, 170, 138,   2, 170, 190, 170,  43, 255, 170, 170, 170,  10,  42, 162,  42, 170, 170, 170, 160,   0,   0,   0, },
{   0,   0,   0,   4,   0,   4,   0,  85,  80,   5, 223, 197,  68,  84,   4,  20,  64,  85,  68,   4,   4,   0,   0,   0,   0, },
{   0,   0,   8,  10,  40,  42, 168, 174, 170, 175, 251, 234, 170, 170,   8, 170,  10,  42, 170, 170, 170, 160,   0,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,  21,   0,  23, 223,   1,  16,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0, },
{   0,   2,  40,  40, 136, 160,   0,  46, 170, 191, 234, 170, 170,  42,   0,  32,  32,  42, 170, 170, 170, 168,   0,   0,   0, },
{   0,   0,   0,   0,   0,  64,   0,   4,  64,  95, 244,  65,  68,  64,   0,   0,   0,   5,  68,  64,  64,  64,   0,   0,   0, },
{   0,   0,  32, 130, 170, 168, 136, 170, 168, 191, 254, 170, 170, 168, 136, 138, 168, 170, 170, 170, 170, 168,   0,   0,   0, },
{   0,   0,   0,   1,   0,   0,   0,   0,   1,  63, 241,   1,  17,  16,   0,   0,   0,   0,  80,   0,   0,   0,   0,   0,   0, },
{   0,   0,  34,  42, 162, 162,   0,  34, 170, 191, 250, 170, 170, 170,   0,   2,  32,  34, 170, 170, 170, 170,   0,   0,   0, },
{   0,   0,   0,   0,   4,   0,   0,   0,  64, 127, 245,  65,  84,   0,   0,   0,   0,   0,  84,   4,   4,   4,   0,   0,   0, },
{   0,   0, 136,   8, 138, 138, 136, 136, 138, 191, 255, 234, 170, 170, 168, 138, 138, 138, 170, 170, 170, 170, 128,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,  64,  31, 255,  85,  16,   0,   0,   0,   0,   1,  16,   0,   0,   0,   0,   0,   0, },
{   0,   0,   0,   0,  34,  40,  32,  32, 162, 191, 255, 250, 170, 170, 162,  34, 162,  34, 170, 170, 170, 170, 128,   0,   0, },
{   0,   0,   0,   0,   4,   4,   0,   0,  64,  95, 255, 213,  84,  68,   0,   0,   0,   0,  84,  64,  68,  64,  64,   0,   0, },
{   0,   0,  10, 136, 170, 136, 136, 138, 234, 191, 255, 238, 170, 170, 168, 136, 170, 138, 234, 170, 170, 170, 128,   0,   0, },
{   0,   0,   0,   0,   0,   0,   1,   5,  64,  23, 255,  64,   1,   1,  64,   0,   3,   0,  16,   0,   0,   0,   0,   0,   0, },
{   0,   0,  34,  10,  42, 130,  34, 171, 162,  58, 255, 170, 170, 170, 160,   2,  43,  34,  42, 170, 170, 170, 160,   0,   0, },
{   0,   0,   0,   0,  64,   0,   0,  69,   0,  21, 213,  64,   4,  64,  64,   0,   1,   0,  68,   4,  68,   4,   0,   0,   0, },
{   0,   0,  10, 168, 170, 136, 138, 170, 138, 171, 255, 170, 170, 170, 168, 136, 139, 168, 170, 170, 170, 170, 160,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,  17,   0,   1, 117,  65,  16,   4,  65,   0,   5,  81,  16,   0,  16,   0,   0,   0,   0, },
{   0,   0,  42, 170,  34,  42,  42, 162, 130, 170, 255, 170,  42, 170, 162, 160,  43, 232,  42, 170, 170, 170, 160,   0,   0, },
{   0,   0,   0,  68,   0,   0,   0,  69,   0,  69, 253,  64,   0,  64,  64,  64,   5, 240,   4,  64,  64,  64,  64,   0,   0, },
{   0,   0, 170, 170, 170, 170, 138, 138, 136, 170, 255, 170, 170, 170, 170, 168, 170, 254, 170, 170, 170, 170, 160,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   1,   0,   1, 117,   1,  17,  16,   0,   0,   1, 118,   0,   0,   0,   0,   0,   0,   0, },
{   0,   2, 170, 170, 170, 170,   2,   2,  10, 170, 254, 170,  42, 170, 170, 160,  11, 190,  42, 170, 170, 170, 168,   0,   0, },
{   0,   4,   4,   4,   4,  64,   0,   5,   0,   4,  84,  65,  21,  80,  68,   0,   1,  86,  68,   4,   4,   4,   0,   0,   0, },
{   0,  10, 170, 170, 170, 168, 138, 138, 136, 170, 234, 170, 138, 168, 170, 136,  10, 255, 234, 170, 170, 170, 168,   0,   0, },
{   0,   0,   0,   0,  16,   0,   0,  17,   0,   0,  16,   1,   5,  80,   0,  21,  80, 119, 192,   0,   0,   0,   0,   0,   0, },
{   0,  10, 170, 170, 170, 160, 130,  42,  32,  34, 170, 168,   2, 170, 170, 186, 186, 187, 170, 170, 170, 170, 168,   0,   0, },
{   0,   0,  68,  64,  80,   0,   0,  20,   0,  64,  68,  64,   1,  84,   0,  80,  80,  85, 132,  64,  64,  64,  64,   0,   0, },
{   0,  42, 170, 168, 170, 136, 138, 170, 136, 170, 170, 168, 138, 170, 170, 170, 170, 255, 170, 170, 170, 170, 168,   0,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   5,   0,   5,   0,  85,  64,   0,   0,   0,   0,   0,   0, },
{   0,  42, 170, 170, 162,  10, 130,  42,  34,  34, 162, 170, 130,  42, 138, 175, 170, 191, 234, 170, 170, 170, 168,   0,   0, },
{   0,  68,  68,   0,  64,   0,   0,   0,   0,   0,   4,   0,   1,  17,   0,   5,   0,  95, 196,   0,   4,   4,  64,   0,   0, },
{   0, 170, 170, 170, 138, 138, 138, 168, 136, 138, 170, 168, 170, 136, 138, 174, 168, 191, 234, 170, 170, 170, 168,   0,   0, },
{   0,  16,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,  64,   1,  81,  87, 112,   0,   0,   0,   0,   0,   0, },
{   2, 170, 170,  34, 162,  34,  34, 162,  32,   2, 170, 168,  34,  10,  34, 171, 168, 255, 254, 170, 170, 170, 168,   0,   0, },
{   0,  68,  68,   0,   0,   0,   0,  64,   0,   0,   0,   4,   1,   4,  64,  69,  64,  93, 252,   0,  68,  68,  64,   0,   0, },
{  10, 170, 170, 136, 136, 138, 138, 168, 136, 136, 170, 170, 170, 138, 170, 175, 232, 255, 254, 170, 170, 170, 170,   0,   0, },
{   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,  21,  96,  87, 247,  64,   0,   0,   0,   0,   0, },
{  10, 170, 170, 162,   2,  34, 130,  34,   2,   0, 162,  42, 168, 162,   0,  43, 160,  47, 255, 254, 170, 170, 170, 128,   0, },
{   4,  68,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   0,   0,   5,  16,  93, 253, 223,   4,  68,  68,   0,   0, },
{  42, 170, 170, 168, 136, 168, 138, 136, 136, 136, 138, 170, 168, 170, 136, 175, 138, 191, 255, 255, 170, 170, 170, 160,   0, },
{  16,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   5,  85,  21, 255, 119,   0,  16,   0,   0,   0, },
{ 170, 170, 170, 160,  32,  32,  34,  32,  32,  32, 162,  42, 160,  10, 162,  42, 238, 191, 255, 255, 170, 170, 170, 168,   0, },
{  68,  68,  68,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64,  64,  85, 213, 255, 253,   4,  68,  64,  64,   0, },
{ 170, 170, 170, 170, 136, 136, 136, 136, 168, 136, 138, 170, 136, 138, 168, 170, 255, 239, 255, 255, 170, 170, 170, 168,   0, },
{   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,  21,  87, 255,  95,   1,   1,   0,   0,   0, },
{ 170, 170, 170, 170,   0,   0,   2,   0,   0,   2,  34,  42,   2,   2, 160,  34,  46, 239, 255, 255, 170, 170, 170, 170,   0, },
{  68,  68,   4,   0,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,  64,   0,  13,  85, 221, 221,   4,  68,   4,   4,   0, },
{ 170, 170, 170, 168, 136, 136, 136, 136, 136, 136, 136, 170, 138, 136, 138, 138, 175, 175, 255, 255, 170, 170, 170, 170,   0, },
{  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23,  21, 253, 253,   0,  16,   0,   0,   0, },
{ 170, 170, 170, 170, 160,  32,  32,  32,  32,  32,  32,  34, 160,  32, 130, 162,  59, 175, 255, 255, 170, 170, 170, 170,   0, },
{  68,  68,  64,  64,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,  65,   0,   5,  71, 255, 253,   4,  68,  64,  68,   0, },
{ 170, 170, 170, 170, 168, 136, 136, 136, 136, 136, 136, 168, 168, 136, 168, 170, 171, 191, 255, 255, 170, 170, 170, 170,   0, },
{   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  21, 247, 253,   1,   0,   0,   1,   0, },
{ 170, 170, 170, 170, 170,   2,   2,   0,   0,   0,   0,   8,  34,   0, 162,  34,  35, 255, 255, 255, 170, 170, 170, 170, 128, },
{  68,  68,  68,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64,   0,  21,  87, 255, 221,   4,  68,   4,   4,  64, },
{ 170, 170, 170, 170, 170, 170, 136, 136, 136, 136, 136, 136, 136, 136, 168, 136, 187, 255, 255, 254, 170, 170, 170, 170, 224, },
{   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64,   0,  17,  87,  87, 116,   1,   0,   0,   0,   0, },
{ 170, 170, 170, 170, 170, 170,  34,  32,  32,  32,  32,  32,  32,  32, 162,  40, 171, 255, 255, 254, 170, 170, 170, 170, 176, },
{  68,  68,  68,  64,  68,  68,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  65,  95, 223, 252,  68,  68,  68,  68,  68, },
{ 170, 170, 170, 170, 170, 170, 136, 136, 136, 136, 136, 136, 136, 136, 136, 168, 171, 255, 255, 254, 170, 170, 170, 170, 174, },
};
VGAXUA vga;

void setup() {
  vga.begin();
  vga.copy((byte*)img_pirate_data);
}
void loop() {
  vga.setExtendedColorsMask(0);
}
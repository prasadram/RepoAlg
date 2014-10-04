#include <stdio.h>
#include<stdlib.h>
//#include <string.h>
 
// IO Structures
const int i_size = 512, o_size = 512;
int i_offset, i_max, o_offset;
char ibuffer[ 512 ], obuffer[ 512 ];
FILE *in, *out;
char read_char()
{
	//return getc(in);
	
	if( ! ( i_offset ^ i_max ) )
	{
		
		i_max = fread( ibuffer, sizeof(char), i_size, in );
		i_offset = 0;
	}
	return ibuffer[ i_offset++ ];
}
 
int read_int()
{
	char t = read_char();
	while( t < 48 )
	 t = read_char();
	int N = t-48;
	t = read_char();
	while( t > 47 )
	{
		N = N*10 + t - 48;
		t = read_char();
	}
	return N;
}
 
void flush()
{
	fwrite( obuffer, sizeof(char), o_offset, out );
	o_offset = 0;
}
 
void write_char(char ch)
{
	if( ! ( o_offset ^ o_size ) )
	 flush();
	obuffer[o_offset++] = ch;
}
 
void write_int(int v, char ch)
{	
		printf("v-%d\tch-%d\n",v,ch);
		if( o_offset + 11 > o_size )
		 flush();
		if (v < 100000)	
 		{
			if (v < 1000) 
			{
				if (v < 10) 
				{
					obuffer[o_offset + 0] = v + 48;
					o_offset += 1;
				} else if (v < 100) 
				{
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 2;
				} else 
				{
					obuffer[o_offset + 2] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 3;
				}
			} else 
			{
				if (v < 10000) 
				{
					obuffer[o_offset + 3] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 2] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 4;
				} else 
				{
					obuffer[o_offset + 4] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 3] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 2] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 5;
				}
			}
		} else 
		{
			if (v < 100000000) 	
			{
				if (v < 1000000) 
				{
					obuffer[o_offset + 5] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 4] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 3] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 2] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 6;
				} else if (v < 10000000) 
				{
					obuffer[o_offset + 6] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 5] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 4] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 3] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 2] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 7;
				} else 
				{
					obuffer[o_offset + 7] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 6] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 5] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 4] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 3] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 2] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 8;
				}
			} else 
			{
				if (v < 1000000000) 
				{
					obuffer[o_offset + 8] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 7] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 6] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 5] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 4] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 3] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 2] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 9;
				} else 
				{
					obuffer[o_offset + 9] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 8] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 7] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 6] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 5] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 4] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 3] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 2] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 1] = v - v / 10 * 10 + 48; v /= 10;
					obuffer[o_offset + 0] = v + 48;
					o_offset += 10;
				}
			}
	}
	if(ch) obuffer[o_offset++] = ch;
}
 
#define SIZE 101
 
#define min( a, b ) ( (a)<(b) ? (a) : (b) )
 
int compare (const int a[ 2 ], const int b[ 2 ])
{
	if( a[ 1 ] != b[ 1 ] )
	 return a[ 1 ] - b[ 1 ];
	else
	 return b[ 0 ] - a[ 0 ];
}
 
int main( int argc, char **argv )
{
	int TC, G, I, N, Q;
	in = stdin; out = stdout;
	TC = read_int();
	while( TC-- )
	{
		G = read_int();
		while( G-- )
		{
			I = read_int();
			N = read_int();
			Q = read_int();
			//printf( "%d\n", R );
			write_int( I == Q ? N / 2 : ( N + 1 ) / 2, '\n' );
		}
	}
	flush();
	return 0;
}

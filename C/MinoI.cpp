#include"MinoI.h"

char I_arr[2][4][4]={
						{
							{'0','0','1','0'},
							{'0','0','1','0'},
							{'0','0','1','0'},
							{'0','0','1','0'}
						},
						{
							{'0','0','0','0'},
							{'0','0','0','0'},
							{'1','1','1','1'},
							{'0','0','0','0'}
						}
					};

MinoI::MinoI():Mino(1){}

void MinoI::paint(){
	int i, j;
	for(i=0; i<4; ++i){
		for(j=0; j<4; ++j)
			cout<<I_arr[rotate_index][i][j];
		cout<<endl;
	}
}

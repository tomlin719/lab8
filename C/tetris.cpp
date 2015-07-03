#include <iostream>
#include <cstdlib>
#include <ctime>
#include <new>
#include "genMino.h"

using namespace std;

int main(){
	Mino* mino_ptr;
	double *ptr[50];
	srandom(time(NULL));
	int i;
	try{
		for(i=0; i<50; ++i){
			mino_ptr=genMino();
	//	if(i==0){
		//	cout << "First time: " << endl;
			mino_ptr->paint();
			mino_ptr->turn();
			cout << "After turn: " << endl;
			mino_ptr->paint();
			cout << endl;
			ptr[i]=new double[500000000];
			cout << "ptr[" << i << "]" << "new success";
		}
	}catch(bad_alloc &memoryAlloc){
		cerr << "Exception: " << memoryAlloc.what() << endl;
	}
		//	delete mino_ptr;
	//	}
            /*  if(i==1){
                        cout << "Second time: " << endl;
                        mino_ptr->paint();
                        mino_ptr->turn();
                        cout << "After turn: " << endl;
                        mino_ptr->paint();
                        cout << endl;
                        delete mino_ptr;
                }
                if(i==2){
                        cout << "Third time: " << endl;
                        mino_ptr->paint();
                        mino_ptr->turn();
                        cout << "After turn: " << endl;
                        mino_ptr->paint();
                        cout << endl;
                        delete mino_ptr;
                }
                if(i==3){
                        cout << "Fourth time: " << endl;
                        mino_ptr->paint();
                        mino_ptr->turn();
                        cout << "After turn: " << endl;
                        mino_ptr->paint();
                        cout << endl;
                        delete mino_ptr;
                }
                if(i==4){
                        cout << "Fifth time: " << endl;
                        mino_ptr->paint();
                        mino_ptr->turn();
                        cout << "After turn: " << endl;
                        mino_ptr->paint();
                        cout << endl;
                        delete mino_ptr;
                }*/

	return 0;
}

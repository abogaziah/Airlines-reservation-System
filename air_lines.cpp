//============================================================================
// Name        : hi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int seats[10]{1,1,0,1,1,1,1,1,1,1};
//0>>available seat, 1>>taken
int checkSeats1(){
	int num=0;
	for (int i=0; i<5 ;i++){
		      if (seats[i]==0)
		      { num++ ;
		      }
	}
	return num;
		}
int checkSeats2 (){
	int num=0;
			for(int i=4;i<10; i++){
				if (seats[i]==0){
					num++;
				}
			}
			return num;
}
void rsrv1 (int many){
	int count=0;
	for (int i=0; i<5 ;i++){
		if(seats[i]==0){
			cout<<"your seat number is "<<i+1<<endl;
			seats[i]++;
			count++;
		}
		if(count==many){
			break;
		}

	}
}
void rsrv2 (int many){
	int count=0;
	for (int i=4; i<10 ;i++){
		if(seats[i]==0){
			cout<<"your seat number is "<<i+1<<endl;
			seats[i]++;
			count++;
		}
		if(count==many){
			break;
		}

	}
}
int main() {
	char ans;
	int clss,many;
	int frst=checkSeats1();
	int ecnmy=checkSeats2();
	cout<<"1 1st class, 2 economic"<<endl;
			cin>>clss;






	if (clss==1){
				cout<<frst<<" seats are available in the first class"<<endl;
				if (frst!=0){
					cout<<"How many seats are desired?"<<endl;
				cin>>many;
				rsrv1(many);
				cout<<"thanks for using our airlines"<<endl;
				}
					if (frst==0){
					if (frst+ecnmy!=0){cout<<"good news!, "<<ecnmy<<" seats are available in the economic class."<<endl;
						cout<<"would you like to reserve seats in the economic class?(Y/N) "<<endl;
								cin>>ans;
								if(ans=='y'){cout<<"How many seats are desired?"<<endl;
								cin>>many;
								rsrv2(many);
								cout<<"thanks for using our airlines"<<endl;
								}
								else {cout<<"Next flight is within 3 hours"<<endl;
									  cout<<"thanks for using our airlines"<<endl;
								}
						}
						else {cout<<"sorry, no seats are available. next flight is within 3 hours"<<endl;
							}
						}
			}





			else {
				cout<<ecnmy<<" seats are available in the economic class"<<endl;
				if (ecnmy!=0){
									cout<<"How many seats are desired?"<<endl;
								cin>>many;
								rsrv2(many);
								cout<<"thanks for using our airlines"<<endl;
								}
									if (ecnmy==0){
									if (frst+ecnmy!=0){cout<<"good news!, "<<frst<<" seats are available in the first class."<<endl;
										cout<<"would you like to reserve seats in the first class?(Y/N) "<<endl;
												cin>>ans;
												if(ans=='y'){cout<<"How many seats are desired?"<<endl;
												cin>>many;
												rsrv1(many);
												cout<<"thanks for using our airlines"<<endl;
												}
												else {cout<<"Next flight is within 3 hours"<<endl;
													  cout<<"thanks for using our airlines"<<endl;
												}
										}
										else {cout<<"sorry, no seats are available. next flight is within 3 hours"<<endl;
											}
										}
							}

	return 0;

}

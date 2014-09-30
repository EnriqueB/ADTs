#ifndef HEAP_H
#define HEAP_H
#include <iostream>
class heap {
	private: 
		//the element 0 from the heap is not used
		int arr[100];
		int used;
		bool type; //true for min heap, false for max heap
	public:
		heap(){arr[0]=-1;used=0; type=true;}//initializes as a min heap
		heap(bool t){
			used=0; type=t;
			if(t)	arr[0]=-1;
			else	arr[0]=100000;
		}
		//removes and returns the top element of the heap
		int remove_top(){
			if(used>0){
				int min = arr[1];
				int last = arr[used--];
				int i=1;
				int son;
				while(i*2<=used){
					son=i*2;
					if(arr[son]!=arr[used])	//not the last element
						if((arr[son+1]<arr[son])==type)//check which son is smallest/largest
							son++;
					if((last>arr[son])==type){
						arr[i]=arr[son];
						i=son;
					}
					else
						break;
				}
				arr[i]=last;
				return min;
			}
			else{
				std::cout<<"No elements in the heap";
				return -1;
			}
		}
		//insert an element into de heap
		int insert(int d){
			int i = ++used;	
			while((arr[i/2]>d)==type){
				arr[i]=arr[i/2];
				i/=2;
			}
			arr[i]=d;
		}
};
#endif

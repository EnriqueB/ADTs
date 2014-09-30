#include <iostream>
#include "heap.h"
int main(){
	heap h(false);
	h.insert(5);
	h.insert(4);
	h.insert(10);
	h.insert(2);
	h.insert(6);
	h.insert(3);
	h.insert(20);
	h.insert(13);
	h.insert(1);
	h.insert(8);
	for(int i=0; i<10; i++){
		std::cout<<h.remove_top()<<std::endl;
	}
	//h.print_array();
}

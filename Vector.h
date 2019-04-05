//
// Created by rudri on 3/29/2019.
//

#ifndef MYVECTOR_MYVECTOR_H
#define MYVECTOR_MYVECTOR_H

#include <memory>
#include <iostream>
#include <cstddef>
#include <algorithm>

namespace UTEC {
  class vector {

	public:
	  vector();
	  vector(int initSize);
	  vector(const vector &original);
	  ~vector();

	  void push_back(int value);
	  void pop_back();
	  void insert(int position, int value); 
	  int get_item(int position);  

	  int size();
	  void resize(int newSize);

	  int &operator[](int index);
	  bool operator==(vector);
	  bool operator!=(vector);

	private:
	  int elements;  
	  int maxSize;
	  int *array;

  };
}

#endif //MYVECTOR_MYVECTOR_H

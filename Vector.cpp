//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"

namespace UTEC {

  vector::vector() {
	elements = 0;
	array = nullptr;
  }

  vector::vector(int initSize) {
	elements = initSize;
	array = new int[elements];
	for (int i = 0; i < elements; i++) {
	  array[i] = 0;
	}
  }

  vector::vector(const vector &original) : elements(original.elements) {
	array = new int[elements];
	for (int i = 0; i < elements; i++) {
	  array[i] = original.array[i];
	}
  }

  vector::~vector() {
	delete[] array;
  }


  void vector::insert(int position, int value) {
	if (position > elements) resize(elements * 2);
	array[position] = value;
  }

  void vector::push_back(int value) {
	if (elements == maxSize) resize(elements * 2);
	array[elements] = value;
	elements++;
  }

  void vector::pop_back() {
	array[elements - 1] = 0;
	elements--;
  }

  int vector::get_item(int position) {
	return array[position];
  }

  int vector::size() {
	return elements;
  }

  void vector::resize(int newSize) {
	int *temp;
	temp = new int[newSize];
	for (int i = 0; i < (newSize); i++) {
	  temp[i] = array[i];
	}
	delete[] array;
	array = temp;
	maxSize = newSize;
  }

  bool vector::operator==(vector a)  {
	if (a.elements != elements) return false;

	for (int i = 0; i < (a.elements); i++) {
	  if (a[i] != array[i]) return false;
	}
	return true;
  }

  bool vector::operator!=(vector a)  {
	if (a.elements != elements) return true;

	for (int i = 0; i < (a.elements); i++) {
	  if (a[i] != array[i]) return true;
	}
	return true;
  }

  int &vector::operator[](int index) {
	if ((index - 1) > elements) {
	  std::cout << "Index out of Bounds\n";
	}
	return array[index];
  }

}

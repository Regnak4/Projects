#ifndef ARRAYITERATOR_H
#define ARRAYITERATOR_H

#include <iostream>

class InvalidIndex {};

template <class T>
class ArrayIterator {
	private:
		T* array;
		int limit;
		int current;
	public:
		ArrayIterator(T* value, int size) {
			this->array = value;
			this->limit = size - 1;
			this->current = 0;
		}

		bool over() {
			return current > limit;
		}

		void next() {
			if ( over() ) {
				return;
			}
			current += 1;
		}

		void previous() {
			if ( current <= 0 ) {
				return;
			}
			current -= 1;
		}

		void begin() {
			current = 0;
		}

		void operator++() {
			next();
		}

		void operator++(int) {
			operator++();
		}

		void operator--() {
			previous();
		}

		void operator--(int) {
			operator--();
		}

		bool less() const {
			return current <= 0;
		}

		const T& value() const {
			return array[current];
		}

		const T& operator*() const {
			return value();
		}
};

#endif // ARRAYITERATOR_H
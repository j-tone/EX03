#include "EvenNumber.h"
EvenNumber::EvenNumber(){
	value = 0;
}
EvenNumber::EvenNumber(int e){
	if ((e % 2) == 0){
		value = e;
	}
	else
		value = e + 1;
}
int EvenNumber::GetValue(){
	return value;
}
int EvenNumber::GetNext(){
	return (value + 2);
}
int EvenNumber::GetPrevious(){
	return (value - 2);
}
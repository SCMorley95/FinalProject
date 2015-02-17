#include <Field.h>
Field::Field(Tube ispentTubes[4], Tube inewTubes[4], Tube ireactors[2]) {
	spentTubes = ispentTubes;
	newTubes = inewTubes;
	reactors = ireactors;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "DynamicArray.h"
#include "PriorityQueue.h"
#include "HuffmanCoding.h"

int main(int argc, char *argv[]) {
	encode("tests/test.png", "tests/test.huf");
	return 0;
}

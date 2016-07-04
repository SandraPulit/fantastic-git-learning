#include <vld.h>
#include <string>
#include <fstream>
#include <locale>
#include "someHelpers.h"
#include "OpusTable.h"

using namespace std;

int main(int argc, char* argv[])
{
	argc--, argv++;			//pominiêcie nazwy pliku programu
	setlocale(LC_ALL, "polish");

	someHelpers::show("Witaj, tu lista referencyjna");

	if (argc != 8)
	{
		someHelpers::printHelp();
		return 1;
	}
	string inputFile,
		outputFile;

	E_sort sortMode;
	E_enum enumeratingMode;

	someHelpers::init(sortMode, enumeratingMode, inputFile, outputFile, argc, argv);

	OpusTable spis;
	spis.readFile(inputFile);
	spis.sorting(sortMode);
	spis.enumerate(enumeratingMode);
	spis.saveFile(outputFile);

	return 0;
}
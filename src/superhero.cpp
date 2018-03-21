#include <iostream>
#include "csv.h"
#include "superhero.h"

int main(char argc, char** argv){
	io::CSVReader<3> in("ram.csv");
	in.read_header(io::ignore_extra_column, "", "", "");
	std::string name, urlslug, id, alignment, eye_color, hair_color, sex, gsm, first_appearance, year, alive;
	int page_id, appearances;
	Superhero hero;
	while(in.read_row(page_id,name,urlslug,id,alignment,eye_color,hair_color,sex,gsm,alive,appearances,first_appearance,year)){
		hero.setPage_id(page_id);
		hero.setName(name);
	}
	
	return 1;
};	

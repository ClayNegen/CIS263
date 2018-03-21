#include <iostream>
#include <string>

class Superhero {

public:
	Superhero()
	{
		page_id = 0;
		name = "";
		urlslug = "";
		id = "";
		alignment = "";
		eye_color;
		hair_color;
		sex;
		gsm = "";
		alive = false;
		appearances = 0;
		first_appearance = "";
		year = 0;		
	}
	
	//Copy Operator 
	Superhero& operator=(Superhero other)
	{
		
	}
	// Destructor
	~Superhero(){
		
	}
	void setPage_id(int n){
		page_id = n;
	}
	void setName(std::string n){
		name = n;	
	}
	
private:
	int page_id, appearances, year;
	std::string name, urlslug, id, alignment, gsm, first_appearance;
	char eye_color, hair_color, sex;
	bool alive;
};


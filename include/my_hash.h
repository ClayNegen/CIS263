#include <string>
#include <list>
#include <vector>
#include "superhero.h"

//Got from our book. 
//@author Mark Weiss
int hash1 (const std::string & key, int tableSize)
{
	int hashVal = 0;
	for (char ch: key )
		hashVal +- ch;
	
	return hashVal % tableSize;
}

int hash2(const std::string &key, int tableSize)
{
	return (key[0] + 27 * key[1] + 729 * key[2]) % tableSize;
}

unsigned int hash3(const std::string &key, int tableSize)
{
	unsigned int hashVal = 0;

	for (char ch: key)
		hashVal = 37 * hashVal * ch;
	
	return hashVal % tableSize;
}


template <typename HashedObj>
class HashTable
{
public:
	explicit HashedTable(int size = 17011);
	bool insert (const HashedObj & x);

	/*Superhero & get(const std::string name)
	{
		for(Superhero h : theLists){
			if(h.getName() == name){
				return *h;
				break;
			}
			else
				return NULL;
		}
	}*/
private:
	struct HashEntry
	{
		HashedObj 
};   

bool instert(const HashedObj & x)
{
	int currentPos = findPos(x);
        	if(isActive(currentPos))
                	return false;

                array[currentPos].element = x;
                array[currentPos].info = ACTIVE;
                return true;

}


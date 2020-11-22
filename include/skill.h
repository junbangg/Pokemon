#ifndef SKILL_H
#define SKILL_H

#include<string>
using namespace std;
enum Type {
	Normal,
	Fire,
	Water,
	Electric,
	Grass,
	Ice,
	Fighting,
	Poison,
	Ground,
	Flying,
	Psychic,
	Bug,
	Rock,
	Ghost,
	Dragon,
	Dark,
	Steel,
	Fairy,
	None
};

enum DamageType {
	Physical,
	Special
};

class Skill {
private:
	string name;
	int power;
	double accuracy;
	Type type;
	DamageType damage_type;



public:
	Skill();
	Skill(string name);
	~Skill();
	string GetName();
	int GetPower();
	double GetAccuracy();
	Type GetType();
	DamageType GetDamageType();
	void ShowInfo();

};

#endif 

#include <iostream>
#include <vector>
#define random(a,b) a + rand()%(b-a+1)
#include <ctime>
using namespace std;

/*struct Vector
{
	int x;
	int y;
};

class Projective
{
protected:
	Vector* coord;
	LProjective* properties;
};

class LProjective
{
protected:
	int speed;
	int power;
	string sprite;
};


///  
class Bullet : public Projective
{
public:
	Bullet(int x,int y,LBullet* lbullet){
		coord = new Vector{ x,y };
		properties = lbullet;
	}
};

class Fireball : public Projective
{
public:
	Fireball(int x, int y, LFireball* lfireball) {
		coord = new Vector{ x,y };
		properties = lfireball;
	}
};

class Bomb : public Projective
{
public:
	Bomb(int x, int y, LBomb* lbomb) {
		coord = new Vector{ x,y };
		properties = lbomb;
	}
};
///


///
class LBullet : public LProjective
{
private:
	float caliber;
public:
	LBullet(int speed, int power, string sprite, float calider)
	{
		this->caliber = caliber;
		this->power = power;
		this->speed = speed;
		this->sprite = sprite;
	}
};
class LFireball : public LProjective
{
private:
	float time_of_fire;
public:
	LFireball(int speed, int power, string sprite, float time_of_fire)
	{
		this->time_of_fire = time_of_fire;
		this->power = power;
		this->speed = speed;
		this->sprite = sprite;
	}
};
class LBomb : public LProjective
{
private:
	float damageRad;
public:
	LBomb(int speed, int power, string sprite, float damageRad)
	{
		this->damageRad = damageRad;
		this->power = power;
		this->speed = speed;
		this->sprite = sprite;
	}
};
///
*/
struct Vector
{
	int x;
	int y;
};
class Projective
{
protected:
	Vector* coord;
	int speed;
	int power;
	string sprite;
};


class Bullet : public Projective
{
	float caliber;
public:
	Bullet(int x, int y, int speed,int power,string sprite,float caliber) {
		coord = new Vector{ x,y };
		this->power = power;
		this->speed = speed;
		this->sprite = sprite;
		this->caliber = caliber;
	}
};

class Fireball : public Projective
{
	float timeOfBurn;
public:
	Fireball(int x, int y, int speed, int power, string sprite,float timeOfBurn) {
		coord = new Vector{ x,y };
		this->power = power;
		this->speed = speed;
		this->sprite = sprite;
		this->timeOfBurn = timeOfBurn;
	}
};

class Bomb : public Projective
{
	float damage;
public:
	Bomb(int x, int y, int speed, int power, string sprite, float damage) {
		coord = new Vector{ x,y };
		this->power = power;
		this->speed = speed;
		this->sprite = sprite;
		this->damage = damage;
	}
};

int main()
{
	srand(time(NULL));

	vector<Bullet> bullets;
	vector<Bomb> bombs;
	vector<Fireball> fireballs;

	for (int i = 0; i < 1000000; i++)
	{
		bullets.push_back(Bullet(random(0, 1920), random(0, 1080), 100,30,"bullet",25));
		bombs.push_back(Bomb(random(0, 1920), random(0, 1080), 200,400,"bomb",10));
		fireballs.push_back(Fireball(random(0, 1920), random(0, 1080), 10,20,"fire",90));
	}

	system("pause");
}

/*int main()
{
	srand(time(NULL));
	LBullet* lbullet = new LBullet(100, 30, "bullet", 25);
	LFireball* lfireball = new LFireball(40, 50, "fireball", 5);
	LBomb* lbomb = new LBomb(10, 100, "bomb", 15);

	vector<Bullet> bullets;
	vector<Bomb> bombs;
	vector<Fireball> fireballs;

	for (int i = 0; i < 1000000; i++)
	{
		bullets.push_back(Bullet(random(0, 1920), random(0, 1080), lbullet));
		bombs.push_back(Bomb(random(0, 1920), random(0, 1080), lbomb));
		fireballs.push_back(Fireball(random(0, 1920), random(0, 1080), lfireball));
	}
	
	system("pause");
}*/



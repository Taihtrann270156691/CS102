#include <iostream>
#include <string>
#include <memory>
//Testing edititing in git hup repository
//Test update using pull
class Entity
{
public:
	Entity()
	{
		std::cout << "Create Entity!" << std::endl;
	}
	void Print(){}

	~Entity()
	{
		std::cout << "Destroy Entity!" << std::endl;
	}
};

int main()
{
	std::shared_ptr<Entity> e0;
	std::weak_ptr<Entity> weak_entity;
	{    //created an empty scope
		std::unique_ptr<Entity> entity(new Entity());  //created a unique smart pointer with a template arguement of Entity class name entity
		entity->Print();

		std::unique_ptr<Entity> entity2 = std::make_unique<Entity>();
		entity2->Print();

		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
		e0 = sharedEntity;  //when sharing a pointer to another share pointer, it increase the reference count.
		weak_entity = sharedEntity;
	} //when the scope end, a destructor get call.
	
	std::cin.get();
	return 0;
}

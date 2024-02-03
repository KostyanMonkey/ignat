#include <iostream>
#include <vector>
#include <string>


struct User
{
    std::string name;
    int age;
};

std::vector<User> users;

void create()
{
    User x;
    std::cin >> x.name;
    std::cin >> x.age;
    users.push_back(x);
}

void del()
{
    std::string namedel;
    std::cin >> namedel;
    for (int i = 0; i < users.size(); i++)
    {
        if (namedel == users[i].name)
        {
            users.erase(users.begin() + i);
        }
    }
}

void update()
{
    std::string nameupdate;
    std::cin >> nameupdate;
    for (int i = 0; i < users.size(); i++)
    {
        if (nameupdate == users[i].name)
        {
            std::cin >> users[i].age;
           
        }
    }
}

void print()
{
    for (int i = 0; i < users.size(); i++)
    {
        std::cout << "username: " <<  users[i].name << " age: " << users[i].age << "\n";
    }
}

int main()
{
    void (*makesmth)();
    makesmth = create;
    makesmth();
    makesmth = print;
    makesmth();
    makesmth = update;
    makesmth();
    makesmth = print;
    makesmth();
    makesmth = del;
    makesmth();
    makesmth = print;
    makesmth();
    

}


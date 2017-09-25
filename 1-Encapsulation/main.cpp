#include <iostream>
#include "Television.h"
#include "PiggyBank.h"
#include "Person.h"
#include "Server.h"
#include <random>
#include <ctime>
int main()
{
	/*Person human("Terry", 22, "555-555-5555");
	human.print();
	if (human.checkSoc("555-555-5555"))
	{
		std::cout << "MATCH" << std::endl;
	}
	else
	{
		std::cout << "NO MATCH" << std::endl;
	}

	Person underling("Kob", 19, "111-111-1111");
	underling.print();

	Person student("Xavier", 19, "222-222-2222");
	student.print();

	Person baby;
	baby.name = "EzzyBaby";
	baby.age = 0;
	baby.print();*/

	/*Television samsung(4, 12);
	samsung.print();
	samsung.increaseChannel();
	samsung.decreaseVolume();
	samsung.print();*/
	/*PiggyBank wallet;
	wallet.deposit(3.50);
	std::cout << wallet.balance() << std::endl;
	std::cout << wallet.withdraw() << std::endl;
	std::cout << wallet.balance() << std::endl;
*/
	ServerInfo servers[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		servers[i].serverName = "AwesomeTown";
		servers[i].Region = "NA";
		servers[i].maxPlayercoutn = i * 5;
		servers[i].currentPlayerCount = rand() % 25;
		servers[i].ping = rand() % 200;
	}
	/*servers[3].Region = "CANADA";
	servers[3].maxPlayercoutn = 2;
	servers[3].currentPlayerCount = 2;*/
	servers[1].serverName = "ZombieLnad";
	servers[2].serverName = "HiphOPDisco";
	servers[3].serverName = "Xaviaers bedroom";
	servers[4].serverName = "PacificScience";

	ServerBrowserService serverBrowserSerice;
	for (int i = 0; i < 5; i++)
	{
		serverBrowserSerice.registerServer(servers[i]);
	}
	
	ServerInfo arr[20];

	//serverBrowserSerice.getServers(arr, 5);
	//serverBrowserSerice.getServersPingLimit(arr, 5, 10);
	//serverBrowserSerice.getServersRegionSpecifier(arr, 5, "CANADA");
	//serverBrowserSerice.getEmptyServers(arr, 5);
	//serverBrowserSerice.getFullServers(arr, 5);
	serverBrowserSerice.getServers(arr, 5);
	while (true) {}
}
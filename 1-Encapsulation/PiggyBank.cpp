#include "PiggyBank.h"

void PiggyBank::deposit(float DepositedAmount)
{
	currentBalance += DepositedAmount;


}

float PiggyBank::withdraw()
{
	float AmountToBeWithdrawn = balance();
	currentBalance = 0;


	return AmountToBeWithdrawn;
}

float PiggyBank::balance() const
{
	return currentBalance;
}

#pragma once

class PiggyBank
{
private:
	float currentBalance = 0;
public:
	void deposit(float DepositedAmount);

	float withdraw();

	float balance() const;
};
#pragma once


class Television
{
private:
	int currentChannel;
	int currentVolume;
public:
	Television(int chn, int vol);

	void print();

	void increaseVolume();
	void decreaseVolume();

	void increaseChannel();
	void decreaseChannel();




};

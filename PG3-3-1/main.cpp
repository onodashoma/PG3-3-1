#include<stdio.h>
#include<stdlib.h>
#include"SceneManager.h"

int main()
{
	int scene = 0;

	SceneManager* sm = SceneManager::GetInstance();

	while (true)
	{
		sm->ChangeScene(scene);
		scene += 1;

		if (scene == 4)
		{
			return 0;
		}
	}

	return 0;

}
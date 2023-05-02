#include <stdio.h>

int main()
{
	int atc = 0;
	printf("주인공의 공격력 입력하세요: ");
	scanf("%d",&atc);
	printf("주인공은 공격력이 %d입니다.\n",atc);
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n",atc);
	if(atc<30)
	{
	printf("적의 잔여 hp : %d \n", 30 - atc);
	printf("적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
	printf("이걸 지다니 풉ㅋ");
	}
	else
	{
	printf("적의 잔여 hp : 0\n");
	printf("적을 물리쳤습니다!\n");
	printf("승리를 하다니 제법인데?\n");
	}
	return atc;

}

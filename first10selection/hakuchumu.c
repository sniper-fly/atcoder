// strncmpの実装
// int		wata_strncmp(char *dest, char *src, ,int idx, int size);
// srcのidx番目の文字からsize個、dest文字列と比較する



// while無限ループ｛
// Sの頭の文字がnull文字か確認 trueならyesをプリントしてreturn
// 7文字比較　trueならidxを7進めcontinueする、以下同様
// 6文字比較
// 5文字比較
// どの文字列にも引っかからなかったらnoをプリントしてreturn
//	}
#include <stdio.h>

int		wata_strncmp(char *dest, char *src, int idx, int size);

int		main(void)
{
	// char hoge[11] = "eras";
	// char test[6] = "erase";
	// int a;
	// a = wata_strncmp(test, hoge, 0, 5);
	// printf("%d", a);
	char S[100000];
	int i = 0;
	int discard;

	discard = scanf("%s", S);

	(void)discard;
	while (1)
	{
		if (S[i] == '\0')
		{
			printf("YES");
			return (0);
		}
		if (wata_strncmp("dreameraser", S, i, 11) == 0)
		{
			i += 11;
			continue;
		}
		if (wata_strncmp("dreamerase", S, i, 10) == 0)
		{
			i += 10;
			continue;
		}
		if (wata_strncmp("dreamer", S, i, 7) == 0)
		{
			i += 7;
			continue;
		}
		if (wata_strncmp("eraser", S, i, 6) == 0)
		{
			i += 6;
			continue;
		}
		if (wata_strncmp("erase", S, i, 5) == 0)
		{
			i += 5;
			continue;
		}
		if (wata_strncmp("dream", S, i, 5) == 0)
		{
			i += 5;
			continue;
		}
		printf("NO");
		return (0);
	}
}

int		wata_strncmp(char *dest, char *src, int idx, int size)
{
	int i = idx;
	int j = 0;

	for (; size-- != 0; i++, j++)
	{
	//	printf("src %c, dest %c\n", dest[j], src[i]);
		if (dest[j] != src[i])
		{
			return (dest[j] - src[i]);
		}
	}
	// printf("last");
	// printf("src %c, dest %c\n", dest[j], src[i]);

	return (0);
}
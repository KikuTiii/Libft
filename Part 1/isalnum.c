int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}

// int main(void)
// {
//     int c1 = 'a';
//     int c2 = 3;

//     if (ft_isalnum(c1 && c2))
//     {
//         printf("%c eh um digito alfabetico. \n", c1);
//         printf("%d eh um digito numerico. \n", c2);
//     }
//     else
//     {
//         printf("%c nao eh um digito alfabetico. \n", c1);
//         printf("%d nao eh um digito numerico. \n", c2);
//     }
// }

// See https://aka.ms/new-console-template for more information

using System.Text.RegularExpressions;

int num = get_num(), i = 1, w = 1, k = 0, l = 0;
Console.WriteLine();
string option = get_char();
Console.WriteLine();
if (option[0].Equals('m'))
{
    while (i < num)
    {
        Console.Write(i + " x ");
        w *= i;
        i++;
    }
    Console.Write(i + " = ");
    w *= i;
    Console.Write(w); Console.WriteLine();
}
else if (option[0].Equals('s'))
{
    while (k < num)
    {
        Console.Write(k + " + "); l += k; k++;
    }
    Console.Write(k + " = "); 
    l += k;
    Console.Write(l); Console.WriteLine();
}

int get_num()
{
    int num;
    bool flag = false, val;

    do
    {
        Console.Write("Enter a number (not 0): ");
        val = int.TryParse(Console.ReadLine(), out num);
        if (num == 0)
        {
            flag = true;
        }
        else { flag = false; }

    } while (flag == true || val == false);

    return num;
}
string get_char()
{
    bool flag; string option, fixed_opt; char s = 's', m = 'm';

    do
    {
        Console.Write("Enter 'm' for multiplication OR 's' for sum: ");
        option = Console.ReadLine();
        option = Regex.Replace(option, @"\s", "");
        fixed_opt = (char.ToLower(option[0]) + option.Substring(1));
        if (fixed_opt[0].Equals(m) || fixed_opt[0].Equals(s)) flag = true;
        else flag = false; 
    } while (flag == false);

    return fixed_opt;
}

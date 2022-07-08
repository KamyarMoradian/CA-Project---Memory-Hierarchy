using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace Hard_Disc_Random_Generator_32bit_
{
    class Program
    {
        static void Main(string[] args)
        {
            using (StreamWriter sw = new StreamWriter("HardDisc.txt"))
            { 
                // Generate 2^9 Pages
                // Page => 32*32 bit
                
                Random rnd = new Random();
                for (int i = 0; i < Math.Pow(2, 9); i++)
                {
                    string line = "(\"";
                    for (int j = 0; j < 32; j++)
                    {
                        for (int z = 0; z < 32; z++)
                        {
                            var rndInt = rnd.Next(0, 2);
                            line += rndInt;
                        }
                        line += "\",\"";
                    }
                    line = line.Remove(line.Length - 3);

                    line += "\"),";
                    if (i == 511)
                        line = line.Remove(line.Length - 1);
                    sw.Write(line);
                    sw.WriteLine();
                }
            }
        }
    }
}

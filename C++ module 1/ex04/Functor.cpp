#include <Functor.hpp>



void	Functor::operator()(const string &to_replace, const string &replace_with)
{
	while(!infile.eof())
	{
		string tmp;
		std::getline(infile, tmp);
		std::string::size_type f = 0;
		std::string::size_type s = tmp.find(to_replace, f);
		string res;
		if (!to_replace.empty())
		{
			while (s != std::string::npos)
			{
				res += string(tmp, f, s - f);
				res += replace_with;
				f = s + to_replace.length();
				s = tmp.find(to_replace, f);
				if (s == std::string::npos)
					res += string(tmp, f);
			}
		}
		if (res.empty())
			res = tmp;
		outfile << res << ((infile.eof()) ? "" : "\n");
	}
}

Functor::Functor(ifstream &in, ofstream &out): infile(in), outfile(out) {}

Functor::~Functor(){}

#ifndef __Options_h__
#define __Options_h__

#include <string>
#include <vector>

class Options
{
public:
	/** Դ�ļ�����·������. */
	std::string		input_;
	std::string		inputFN_;
	std::string		inputFS_;
	/** ���ɴ����ļ���Ŀ¼. */
	std::string		output_;
	/** ����Ѱ��import�ļ���Ŀ¼. */
	std::vector<std::string>	importPaths_;
	/** �������������� .*/
	std::string		generator_;

	bool parse(int argc, char* argv[]);
};

extern Options gOptions;

#endif// __Options_h__
//#include <fmt/format.h>
#include <spdlog/spdlog.h>





int64_t  fibonnacci_number(int n)
{
	int64_t f0 = 0;
	int64_t f1 = 1;
	int64_t f2 = f1;

	for (int i = 0; i < n; i++)
	{
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;;
	}
	return f2;
}


int main()
{
	fmt::print("Hello world\n");
	fmt::print("Mam {} lat", 42);

	auto logger = spdlog::stdout_logger_mt("FatherSun", true);
	logger->set_level(spdlog::level::debug); // dzieki temu mamy kolory 
	logger->info("Dzisiaj mamy TechDay");
	logger->debug("Mowimy o C++");
	logger->error("Mielismy opoznienie");


	logger->info("{}", fibonnacci_number(0));

	logger->info("{}", fibonnacci_number(1));
	logger->info("{}", fibonnacci_number(2));

	logger->info("{}", fibonnacci_number(3));
	logger->info("{}", fibonnacci_number(4));
	logger->info("{}", fibonnacci_number(5));
	logger->info("{}", fibonnacci_number(6));

	return 0;
}
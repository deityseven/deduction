#include <spdlog/spdlog.h>
#include <util/string_util.h>

#include <base/chaos.h>

int main(int argc, char *argv[])
{
#ifdef I_OS_WIN
    system("chcp 65001");
#endif // WIN
    //{
    //    spdlog::info("user info :");
    //    spdlog::info("{}", client.getCurrentUser()->toJson());
    //}

    Chaos chaos;
    chaos.run();

	return 0;
}
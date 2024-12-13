#include <util/string_util.h>

int main(int argc, char *argv[])
{
#ifdef I_OS_WIN
    system("chcp 65001");
#endif // WIN
    //{
    //    spdlog::info("user info :");
    //    spdlog::info("{}", client.getCurrentUser()->toJson());
    //}

	return 0;
}
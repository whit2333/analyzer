#include "podd2/Logger.h"

#ifdef __cpp_lib_filesystem
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#endif

namespace podd2 {

  namespace log {

    std::shared_ptr<spdlog::logger> make_logger(std::string name, std::string file) {
      std::vector<spdlog::sink_ptr> sinks;
      // ------------------------------------
      sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
      // auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
      sinks[0]->set_level(spdlog::level::info);
      // console_sink->set_pattern("[multi_sink_example] [%^%l%$] %v");
      sinks[0]->set_pattern("[%t] [%n] %^[%l]%$ %v");
      // ------------------------------------
      sinks.push_back(
          std::make_shared<spdlog::sinks::basic_file_sink_mt>(file, true));
      sinks[1]->set_level(spdlog::level::trace);
      sinks[1]->set_pattern("[%t] [%n] %^[%l]%$ %v");
      // ------------------------------------
      auto logger = std::make_shared<spdlog::logger>(name, std::begin(sinks), std::end(sinks));
      logger->set_level(spdlog::level::debug);
      logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
      // ------------------------------------
      spdlog::register_logger(logger);
      //
      fs::path log_file_path = file;
      if (!fs::exists(log_file_path.parent_path())) {
        fs::create_directory(log_file_path.parent_path());
      }
      return logger;
    }

  } // namespace log

} // namespace podd2

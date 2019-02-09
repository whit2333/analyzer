#include "podd2/Logger.h"

#ifdef __cpp_lib_filesystem
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#endif
#include <iostream>

namespace podd2 {

  namespace log {

    std::shared_ptr<spdlog::logger> make_logger(std::string name, std::string file) {
      fs::path log_file(file);
      // the following creates /tmp/logs if default logs directory does  not exist.
      fs::path log_dir( get_log_dir(log_file.parent_path()));

      auto full_log_file = log_dir/log_file.filename();
      
      std::vector<spdlog::sink_ptr> sinks;
      // ------------------------------------
      sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
      // auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
      sinks[0]->set_level(spdlog::level::info);
      // console_sink->set_pattern("[multi_sink_example] [%^%l%$] %v");
      sinks[0]->set_pattern("[%t] [%n] %^[%l]%$ %v");
      // ------------------------------------
      sinks.push_back(
          std::make_shared<spdlog::sinks::basic_file_sink_mt>(full_log_file.string()));
      sinks[1]->set_level(spdlog::level::trace);
      sinks[1]->set_pattern("[%t] [%n] %^[%l]%$ %v");
      // ------------------------------------
      auto logger = std::make_shared<spdlog::logger>(name, std::begin(sinks), std::end(sinks));
      logger->set_level(spdlog::level::debug);
      logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
      // ------------------------------------
      spdlog::register_logger(logger);
      //
      fs::path log_file_path = full_log_file;
      if (!fs::exists(log_file_path.parent_path())) {
        fs::create_directory(log_file_path.parent_path());
      }
      return logger;
    }

    std::string get_log_dir(std::string dir)
    {
      fs::path dir_path(dir);
      if( !fs::exists(dir_path)  ){
        auto temp = fs::temp_directory_path() / dir_path;
        std::cout << " creating tmp log file: " << temp.string() << "\n";
        fs::create_directory(temp);
        dir =  temp.string();
      }
      return dir;
    }
  } // namespace log

} // namespace podd2

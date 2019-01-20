#ifndef podd2_Logger_hh
#define podd2_Logger_hh

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h" //support for stdout logging
#include "spdlog/sinks/basic_file_sink.h" // support for basic file logging

namespace podd2 {

  template <typename Base>
  class RunLogging : public Base {
  protected:
    std::shared_ptr<spdlog::logger> _logger; //!
  public:
    template <class... Args>
    RunLogging(Args&&... args) : Base(std::forward<Args>(args)...) {
      _logger = spdlog::get("run");
      if(!_logger) {
        _logger = spdlog::stdout_color_mt("run");
      }
      _logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
    }
  };

  template <typename Base>
  class ConfigLogging : public Base {
  protected:
    std::shared_ptr<spdlog::logger> _logger; //!
  public:
    template <class... Args>
    ConfigLogging(Args&&... args) : Base(std::forward<Args>(args)...) {
      _logger = spdlog::get("config");
      if(!_logger) {
        _logger = spdlog::stdout_color_mt("config");
      }
      _logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
    }
  };

  template <typename Base>
  class ParameterLogging : public Base {
  protected:
    std::shared_ptr<spdlog::logger> _param_logger; //!
  public:
    template <class... Args>
    ParameterLogging(Args&&... args) : Base(std::forward<Args>(args)...) {
      _param_logger = spdlog::get("param");
      if(!_param_logger) {
        _param_logger = spdlog::stdout_color_mt("param");
      }
      _param_logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
    }
  };

  template <typename Base>
  class AnalysisLogging : public Base {
  protected:
    std::shared_ptr<spdlog::logger> _ana_logger; //!
  public:
    template <class... Args>
    AnalysisLogging(Args&&... args) : Base(std::forward<Args>(args)...) {
      _ana_logger = spdlog::get("ana");
      if(!_ana_logger) {
        _ana_logger = spdlog::stdout_color_mt("ana");
      }
      _ana_logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
    }
  };

  template <typename Base>
  class HitLogging : public Base {
  protected:
    std::shared_ptr<spdlog::logger> _hit_logger; //!
  public:
    template <class... Args>
    HitLogging(Args&&... args) : Base(std::forward<Args>(args)...) {
      _hit_logger = spdlog::get("hits");
      if(!_hit_logger) {
        _hit_logger = spdlog::stdout_color_mt("hits");
      }
      _hit_logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
    }
  };

  template <typename Base>
  class CutLogging : public Base {
  protected:
    std::shared_ptr<spdlog::logger> _cut_logger; //!
  public:
    template <class... Args>
    CutLogging(Args&&... args) : Base(std::forward<Args>(args)...) {
      _cut_logger = spdlog::get("cuts");
      if(!_cut_logger) {
        _cut_logger = spdlog::stdout_color_mt("cuts");
      }
      _cut_logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
    }
  };


  template <typename Base>
  class DetectorLogging : public Base {
  protected:
    std::shared_ptr<spdlog::logger> _det_logger;//!
  public:
    template <class... Args>
    DetectorLogging(Args&&... args) : Base(std::forward<Args>(args)...) {
      _det_logger = spdlog::get("det");
      if(!_det_logger) {
        _det_logger = spdlog::stdout_color_mt("det");
      }
      _det_logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
    }
  };

  template <typename Base>
  class SpectrometerLogging : public Base {
  protected:
    std::shared_ptr<spdlog::logger> _spec_logger; //!
  public:
    template <class... Args>
    SpectrometerLogging(Args&&... args) : Base(std::forward<Args>(args)...) {
      _spec_logger = spdlog::get("spec");
      if(!_spec_logger) {
        _spec_logger = spdlog::stdout_color_mt("spec");
      }
      _spec_logger->set_pattern("[%t] [%n] %^[%l]%$ %v");
    }
  };


}


#endif


#pragma once

#include "logger.h"

namespace zen::display_system::oculus {

class RemoteLogSink : public remote::ILogSink {
  void Sink(remote::Severity remote_severity, const char* pretty_function,
      const char* file, int line, const char* format, va_list vp) override;
};

}  // namespace zen::display_system::oculus

#pragma once
#include "etw_handler.h"

enum output_formats
{
    output_stdout,
    output_event_log,
    output_all
};


std::string convert_wstr_str
(
    std::wstring from
);

std::wstring convert_str_wstr(
    std::string from
);

std::string convert_bytes_filetimestring
(
    const std::vector<BYTE>& bytes
);

std::string convert_bytes_guidstring
(
    const std::vector<BYTE>& bytes
);

std::string convert_bytes_sidstring
(
    const std::vector<BYTE>& bytes
);

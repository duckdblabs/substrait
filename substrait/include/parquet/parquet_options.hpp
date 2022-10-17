//                         DuckDB
//
// parquet_read_bind_data.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "parquet_options.hpp"
namespace duckdb {
namespace substrait_parquet{
struct ParquetOptions {
  explicit ParquetOptions() = default;
  bool binary_as_string = false;
  bool filename = false;
  bool hive_partitioning = false;
};
}
}
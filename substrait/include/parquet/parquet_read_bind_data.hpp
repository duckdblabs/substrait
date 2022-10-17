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
struct ParquetReadBindDataAux : public TableFunctionData {
	vector<string> files;
	vector<column_t> column_ids;
	atomic<idx_t> chunk_count;
	atomic<idx_t> cur_file;
	vector<string> names;
	vector<LogicalType> types;
	// These come from the initial_reader, but need to be stored in case the initial_reader is removed by a filter
	idx_t initial_file_cardinality;
	idx_t initial_file_row_groups;
	ParquetOptions parquet_options;
};
}

}

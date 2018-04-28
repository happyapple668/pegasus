#pragma once

#include <dsn/dist/replication/replication.codes.h>

namespace dsn {
namespace apps {

DEFINE_STORAGE_WRITE_RPC_CODE(RPC_RRDB_RRDB_PUT, true)
DEFINE_STORAGE_WRITE_RPC_CODE(RPC_RRDB_RRDB_MULTI_PUT, false)
DEFINE_STORAGE_WRITE_RPC_CODE(RPC_RRDB_RRDB_REMOVE, true)
DEFINE_STORAGE_WRITE_RPC_CODE(RPC_RRDB_RRDB_MULTI_REMOVE, false)
DEFINE_STORAGE_READ_RPC_CODE(RPC_RRDB_RRDB_GET)
DEFINE_STORAGE_READ_RPC_CODE(RPC_RRDB_RRDB_MULTI_GET)
DEFINE_STORAGE_READ_RPC_CODE(RPC_RRDB_RRDB_SORTKEY_COUNT)
DEFINE_STORAGE_READ_RPC_CODE(RPC_RRDB_RRDB_TTL)
DEFINE_STORAGE_READ_RPC_CODE(RPC_RRDB_RRDB_GET_SCANNER)
DEFINE_STORAGE_READ_RPC_CODE(RPC_RRDB_RRDB_SCAN)
DEFINE_STORAGE_READ_RPC_CODE(RPC_RRDB_RRDB_CLEAR_SCANNER)
DEFINE_STORAGE_WRITE_RPC_CODE(RPC_RRDB_RRDB_BATCHED_DUPLICATE, true)
DEFINE_STORAGE_WRITE_RPC_CODE(RPC_RRDB_RRDB_DUPLICATE, false)

}
}

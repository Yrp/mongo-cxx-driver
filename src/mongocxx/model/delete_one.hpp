// Copyright 2014 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <mongocxx/config/prelude.hpp>

#include <bsoncxx/document/view.hpp>

namespace mongocxx {
MONGOCXX_INLINE_NAMESPACE_BEGIN
namespace model {

///
/// Class representing a MongoDB delete operation that removes a single document.
///
class LIBMONGOCXX_API delete_one {

   public:

    ///
    /// Constructs a delete operation that will delete the first document matching the filter.
    ///
    /// @param filter
    ///   Document representing the criteria for deletion.
    ///
    explicit delete_one(bsoncxx::document::view filter);

    ///
    /// Gets the filter on this delete operation.
    ///
    /// @return The filter to be used for the delete operation.
    ///
    const bsoncxx::document::view& filter() const;

   private:
    // Required
    bsoncxx::document::view _filter;

};

}  // namespace model
MONGOCXX_INLINE_NAMESPACE_END
}  // namespace mongocxx

#include <mongocxx/config/postlude.hpp>
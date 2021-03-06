// Copyright 2018 Husky Team
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

#include "core-cube/model/dimension_desc.hpp"

#include <string>

#include "core-cube/model/cube_desc.hpp"
#include "core-metadata/metadata/model/data_model_desc.hpp"

namespace husky {
namespace cube {

void DimensionDesc::init(CubeDesc* cube_desc) {
    cube_desc_ = cube_desc;

    std::shared_ptr<DataModelDesc> model = cube_desc_->get_model();

    table_ref_ = model->find_table(table_);
    // table_ = table_ref_->get_alias();

    column_ref_ = model->find_column(table_, column_);
}

}  // namespace cube
}  // namespace husky

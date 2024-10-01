// Copyright 2019 The TCMalloc Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TCMALLOC_EXPERIMENT_CONFIG_H_
#define TCMALLOC_EXPERIMENT_CONFIG_H_

#include "absl/strings/string_view.h"

// Autogenerated by experiments_proto_test --experiments_generate_config=true
namespace tcmalloc {

enum class Experiment : int {
  // clang-format off
  TEST_ONLY_TCMALLOC_POW2_SIZECLASS,
  TEST_ONLY_TCMALLOC_SHARDED_TRANSFER_CACHE,
  TCMALLOC_METADATA_HUGEPAGE,  // TODO(b/345239704): Complete experiment.
  TEST_ONLY_TCMALLOC_HUGE_CACHE_RELEASE_30S,  // TODO(b/319872040): Complete experiment.
  TEST_ONLY_TCMALLOC_REUSE_SIZE_CLASSES,  // TODO(b/358126781): Complete experiment.
  TCMALLOC_HUGE_REGION_DEMAND_BASED_RELEASE,  // TODO(b/328440160): Complete experiment.
  TEST_ONLY_TCMALLOC_BIG_SPAN,  // TODO(b/304135905): Complete experiment.
  TCMALLOC_BIG_SPAN,  // TODO(b/304135905): Complete experiment.
  TEST_ONLY_L3_AWARE,  // TODO(b/239977380): Complete experiment.
  TEST_ONLY_TCMALLOC_DENSE_TRACKERS_SORTED_ON_SPANS_ALLOCATED,  // TODO(b/348043731): Complete experiment.
  kMaxExperimentID,
  // clang-format on
};

struct ExperimentConfig {
  Experiment id;
  absl::string_view name;
};

// clang-format off
inline constexpr ExperimentConfig experiments[] = {
    {Experiment::TEST_ONLY_TCMALLOC_POW2_SIZECLASS, "TEST_ONLY_TCMALLOC_POW2_SIZECLASS"},
    {Experiment::TEST_ONLY_TCMALLOC_SHARDED_TRANSFER_CACHE, "TEST_ONLY_TCMALLOC_SHARDED_TRANSFER_CACHE"},
    {Experiment::TCMALLOC_METADATA_HUGEPAGE, "TCMALLOC_METADATA_HUGEPAGE"},
    {Experiment::TEST_ONLY_TCMALLOC_HUGE_CACHE_RELEASE_30S, "TEST_ONLY_TCMALLOC_HUGE_CACHE_RELEASE_30S"},
    {Experiment::TEST_ONLY_TCMALLOC_REUSE_SIZE_CLASSES, "TEST_ONLY_TCMALLOC_REUSE_SIZE_CLASSES"},
    {Experiment::TCMALLOC_HUGE_REGION_DEMAND_BASED_RELEASE, "TCMALLOC_HUGE_REGION_DEMAND_BASED_RELEASE"},
    {Experiment::TEST_ONLY_TCMALLOC_BIG_SPAN, "TEST_ONLY_TCMALLOC_BIG_SPAN"},
    {Experiment::TCMALLOC_BIG_SPAN, "TCMALLOC_BIG_SPAN"},
    {Experiment::TEST_ONLY_L3_AWARE, "TEST_ONLY_L3_AWARE"},
    {Experiment::TEST_ONLY_TCMALLOC_DENSE_TRACKERS_SORTED_ON_SPANS_ALLOCATED, "TEST_ONLY_TCMALLOC_DENSE_TRACKERS_SORTED_ON_SPANS_ALLOCATED"},
};
// clang-format on

}  // namespace tcmalloc

#endif  // TCMALLOC_EXPERIMENT_CONFIG_H_

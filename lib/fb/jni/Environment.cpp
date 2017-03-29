/*
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#include <pthread.h>
#include <fb/log.h>
#include <fb/StaticInitialized.h>
#include <fb/ThreadLocal.h>
#include <fb/Environment.h>
#include <fb/fbjni/CoreClasses.h>
#include <fb/fbjni/NativeRunnable.h>

#include <functional>

namespace facebook {
namespace jni {


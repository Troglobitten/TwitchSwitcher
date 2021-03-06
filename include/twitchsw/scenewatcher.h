// Copyright (C) 2016 Caitlin Potter & Contributors. All rights reserved.
// Use of this source is governed by the Apache License, Version 2.0 that
// can be found in the LICENSE file, which must be distributed with this
// software.

#pragma once

#include <twitchsw/twitchsw.h>
#include <twitchsw/refs.h>
#include <twitchsw/string.h>

namespace twitchsw {

class SceneWatcherImpl;
class SceneWatcher {
public:
    SceneWatcher();
    ~SceneWatcher();

    void start();
    void terminate();

    static bool getTwitchCredentials(String& key);

private:
    SceneWatcherImpl* m_impl = nullptr;
};

}  // namespace twitchsw

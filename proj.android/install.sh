#!/bin/bash
adb install -r bin/Elemental-debug.apk
adb shell am start -n org.oxygine.Elemental/org.oxygine.Elemental.MainActivity
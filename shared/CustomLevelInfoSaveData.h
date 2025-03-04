#pragma once

#include "custom-types/shared/macros.hpp"
#include "beatsaber-hook/shared/config/rapidjson-utils.hpp"

#include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "GlobalNamespace/StandardLevelInfoSaveData_DifficultyBeatmapSet.hpp"
#include "GlobalNamespace/StandardLevelInfoSaveData_DifficultyBeatmap.hpp"

#include "CJDLogger.h"

DECLARE_CLASS_CODEGEN(CustomJSONData, CustomLevelInfoSaveData, 
                      GlobalNamespace::StandardLevelInfoSaveData,
    
    DECLARE_CTOR(ctor, Il2CppString *songName, Il2CppString *songSubName, 
                 Il2CppString *songAuthorName, Il2CppString *levelAuthorNeame, float beatsPerMinute,
                 float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, 
                 float previewDuration, Il2CppString *songFilename, Il2CppString *coverImageFilename, 
                 Il2CppString *environmentName, Il2CppString *allDirectionsEnvironmentName, 
                 ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*> *difficultyBeatmapSets);

    DECLARE_SIMPLE_DTOR();

public:
    std::shared_ptr<rapidjson::Document> doc;
    std::optional<std::reference_wrapper<rapidjson::Value>> customData;
)

DECLARE_CLASS_CODEGEN(CustomJSONData, CustomDifficultyBeatmap, 
                      GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap,
    
    DECLARE_CTOR(ctor, Il2CppString *difficultyName, int difficultyRank, Il2CppString *beatmapFilename, float noteJumpMovementSpeed, float noteJumpStartBeatOffset);

public:
    std::optional<std::reference_wrapper<rapidjson::Value>> customData;
)


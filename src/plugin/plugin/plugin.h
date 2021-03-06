#ifndef FREEZE__PLUGIN__PLUGIN_H
#define FREEZE__PLUGIN__PLUGIN_H

#include "../recording/recording.h"
#include "../samples/samples.h"
#include <shared/client/client.h>
#include <shared/logger/logger.h>
#include <shared/mode/mode.h>
#include <stdbool.h>

typedef struct FreezePlugin {
    Recording recording;
    uint_least32_t frame;
    FreezeRecordingMode mode;

    FreezeClient *client;
    const PluginLogger *logger;
    size_t samples_since_ui_update;

    char *db_path;
    bool db_path_changed;
    bool db_changed;

    bool ui_initialized;
    bool active;
    bool playing;
} FreezePlugin;

void freeze_plugin_init(FreezePlugin *self, FreezeClient *client);

const char *freeze_plugin_get_db_path(const FreezePlugin *self);

const char *freeze_plugin_get_db_path_or_empty(const FreezePlugin *self);

void freeze_plugin_set_db_path(FreezePlugin *self, const char *path);

void freeze_plugin_load_db(FreezePlugin *self);

void freeze_plugin_save_db(FreezePlugin *self);

void freeze_plugin_activate(FreezePlugin *self);

void freeze_plugin_deactivate(FreezePlugin *self);

void freeze_plugin_set_frame(FreezePlugin *self, uint_least32_t frame);

void freeze_plugin_set_speed(FreezePlugin *self, float speed);

void freeze_plugin_run(
    FreezePlugin *self,
    StereoSlice input,
    StereoPort output
);

void freeze_plugin_update_ui(FreezePlugin *self);

void freeze_plugin_set_logger(FreezePlugin *self, const PluginLogger *logger);

void freeze_plugin_destroy(FreezePlugin *self);

#endif

#ifndef RESULTS_H
#define RESULTS_H

#include "testing.h"
#include "commands.h"

#ifdef __MSX__
#include <stdio.h> // MSX changes bool typedef in stdio.h so need to include it first
#endif /* __MSX__ */
#include <fujinet-fuji.h>

extern AdapterConfig fn_config;

extern void results_reset();
extern void result_create(uint16_t index, const char *cmd_name);
extern void result_record(uint16_t index, TestCommand *test, FujiCommand *cmd, bool success);

void print_test_results();

#endif /* RESULTS_H */

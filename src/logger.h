// Created by: WestleyR
// Email: westleyr@nym.hush.com
// Url: https://github.com/WestleyR/logger
// Last modified date: 2020-04-26
//
// This file is licensed under the terms of
//
// The Clear BSD License
//
// Copyright (c) 2019-2020 WestleyR
// All rights reserved.
//
// This software is licensed under a Clear BSD License.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void set_verbose(int);
void set_debug(int);

int is_verbose();
int is_debug();

#define print_verbosef(...) print_log_verbosef(__FUNCTION__, __VA_ARGS__)
#define print_debugf(...) print_log_debugf(__FUNCTION__, __VA_ARGS__)
#define print_errorf(...) print_log_errorf(__FUNCTION__, __VA_ARGS__)
#define print_warningf(...) print_log_warningf(__FUNCTION__, __VA_ARGS__)
#define print_infof(...) print_log_infof(__FUNCTION__, __VA_ARGS__)

void print_log_verbosef(const char *func, const char *format, ...);
void print_log_debugf(const char *func, const char *format, ...);
void print_log_errorf(const char *func, const char *format, ...);
void print_log_warningf(const char *func, const char *format, ...);
void print_log_infof(const char *func, const char *format, ...);

//
// End logger.h
//

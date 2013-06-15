//
//  main.m
//  CBasediOSApp
//
//  Created by Richard Ross on 4/23/12.
//  Copyright (c) 2012 Ultimate Computer Services, Inc. All rights reserved.
//
#include <CoreFoundation/CoreFoundation.h>

#include <objc/runtime.h>
#include <objc/message.h>

extern void UIApplicationMain(int, ...);

int main(int argc, char *argv[])
{
    id autoreleasePool = objc_msgSend(objc_msgSend(objc_getClass("NSAutoreleasePool"), sel_registerName("alloc")), sel_registerName("init"));
    
    UIApplicationMain(argc, argv, nil, CFSTR("AppDelegate"));
    
    objc_msgSend(autoreleasePool, sel_registerName("drain"));
}
//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _DKDataProtectionMonitor : NSObject
{
    NSMutableDictionary *_handlers;	// 8 = 0x8
    _Bool _deviceFormatedForContentProtection;	// 16 = 0x10
    NSMutableDictionary *_availableState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_stateQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 40 = 0x28
    int _notifyToken;	// 48 = 0x30
    _Bool _notifyEnabled;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000015a981
- (void)dealloc;	// IMP=0x000000000015a5c4
- (id)init;	// IMP=0x000000000015a49e

@end


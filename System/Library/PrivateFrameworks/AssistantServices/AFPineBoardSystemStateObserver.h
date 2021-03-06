//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFPineBoardSystemStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_pineBoardStateGroup;	// 16 = 0x10
    long long _pineBoardStateGroupDepth;	// 24 = 0x18
    long long _pineBoardSystemState;	// 32 = 0x20
    NSHashTable *_listeners;	// 40 = 0x28
    _Bool _isObserving;	// 48 = 0x30
}

+ (id)defaultObserver;	// IMP=0x00000000000b897e
- (void).cxx_destruct;	// IMP=0x00000000000b91b0
@property(readonly, nonatomic) long long pineBoardSystemState; // @synthesize pineBoardSystemState=_pineBoardSystemState;
- (void)_endGroup;	// IMP=0x00000000000b916a
- (void)_beginGroup;	// IMP=0x00000000000b9131
- (void)_handlePineBoardStateChange:(long long)arg1;	// IMP=0x00000000000b8fb0
- (void)_stopObservingPineBoardSystemState;	// IMP=0x00000000000b8fa6
- (void)_pineBoardSystemStateDidChange:(unsigned long long)arg1;	// IMP=0x00000000000b8f18
- (void)_startObservingPineBoardSystemState;	// IMP=0x00000000000b8cfc
- (void)removeListener:(id)arg1;	// IMP=0x00000000000b8c4e
- (void)addListener:(id)arg1;	// IMP=0x00000000000b8ba0
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000b8a52

@end


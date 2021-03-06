//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CUPowerSourceMonitor : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_aggregateSources;	// 16 = 0x10
    NSMutableDictionary *_pendingAggregates;	// 24 = 0x18
    NSMutableDictionary *_powerSources;	// 32 = 0x20
    int _psNotifyTokenAccessoryAttach;	// 40 = 0x28
    int _psNotifyTokenAccessoryPowerSource;	// 44 = 0x2c
    int _psNotifyTokenAccessoryTimeRemaining;	// 48 = 0x30
    int _psNotifyTokenAnyPowerSource;	// 52 = 0x34
    unsigned int _changeFlags;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
    CDUnknownBlockType _invalidationHandler;	// 72 = 0x48
    CDUnknownBlockType _powerSourceFoundHandler;	// 80 = 0x50
    CDUnknownBlockType _powerSourceLostHandler;	// 88 = 0x58
    CDUnknownBlockType _powerSourceChangedHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000092e03
@property(copy, nonatomic) CDUnknownBlockType powerSourceChangedHandler; // @synthesize powerSourceChangedHandler=_powerSourceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType powerSourceLostHandler; // @synthesize powerSourceLostHandler=_powerSourceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType powerSourceFoundHandler; // @synthesize powerSourceFoundHandler=_powerSourceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;	// IMP=0x0000000000092bac
- (void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2;	// IMP=0x0000000000092a63
- (void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;	// IMP=0x000000000009282b
- (void)_updatePowerSources;	// IMP=0x0000000000092316
- (void)_update;	// IMP=0x00000000000921ce
- (void)_aggregatePowerSourceUpdate:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000000091ef0
- (void)_aggregatePowerSourceLost:(id)arg1;	// IMP=0x0000000000091b64
- (void)_aggregatePowerSourceFound:(id)arg1;	// IMP=0x0000000000091846
- (void)invalidate;	// IMP=0x00000000000917fb
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009173d
- (void)_cleanup;	// IMP=0x0000000000091600
- (void)dealloc;	// IMP=0x00000000000915c2
- (id)init;	// IMP=0x0000000000091544

@end


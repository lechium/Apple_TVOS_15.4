//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _GCHapticServerManager : NSObject
{
    unsigned long long _nextClientID;	// 8 = 0x8
    unsigned long long _tickCount;	// 16 = 0x10
    float _tickLengthSeconds;	// 24 = 0x18
    _Bool _running;	// 28 = 0x1c
    _Bool _idle;	// 29 = 0x1d
    unsigned long long _channelID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *queue;	// 40 = 0x28
    NSMutableDictionary *_logicalHapticDevices;	// 48 = 0x30
    NSMutableDictionary *_clientInvalidationHandlers;	// 56 = 0x38
    NSMutableDictionary *_hapticPlayers;	// 64 = 0x40
    BKSApplicationStateMonitor *_appMonitor;	// 72 = 0x48
    _Bool _activeEvents;	// 80 = 0x50
    NSMutableDictionary *_clients;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_runloopQueue;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x00000000000843b0
- (void).cxx_destruct;	// IMP=0x000000000008a065
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *runloopQueue; // @synthesize runloopQueue=_runloopQueue;
@property(retain, nonatomic) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(nonatomic) _Bool activeEvents; // @synthesize activeEvents=_activeEvents;
- (id)__onqueue_reserveChannels:(unsigned long long)arg1 forClient:(id)arg2;	// IMP=0x0000000000089bce
- (void)readListCommand:(struct HapticCommand)arg1 client:(id)arg2 renderTime:(double)arg3;	// IMP=0x0000000000089811
- (void)readParamCurveListCommand:(struct HapticCommand)arg1 client:(id)arg2;	// IMP=0x0000000000089500
- (void)enterRunloop;	// IMP=0x0000000000088d51
- (void)identifyCompletedClients;	// IMP=0x000000000008864a
- (void)notifyPlayerNoLongerRetained:(id)arg1;	// IMP=0x00000000000883fd
- (void)processActiveEventsForStartTime:(double)arg1 endTime:(double)arg2;	// IMP=0x0000000000087525
- (_Bool)playersHaveImpendingCommandsForStartTime:(double)arg1 endTime:(double)arg2;	// IMP=0x0000000000087336
- (void)processScheduledCommandsForStartTime:(double)arg1 endTime:(double)arg2;	// IMP=0x0000000000087018
- (_Bool)readClientDataForStartTime:(double)arg1 endTime:(double)arg2;	// IMP=0x00000000000869d5
- (void)scheduleCommand:(const void *)arg1;	// IMP=0x0000000000086938
- (void)logicalDeviceWasUnregistered:(id)arg1;	// IMP=0x000000000008611c
- (void)spawnInputThread;	// IMP=0x0000000000086084
- (void)hapticClientProxyInitialized:(id)arg1;	// IMP=0x0000000000085f09
- (void)removeHapticClient:(id)arg1;	// IMP=0x0000000000085a74
- (_Bool)acceptNewConnection:(id)arg1 fromHapticsEnabledApp:(id)arg2;	// IMP=0x0000000000084d36
- (id)init;	// IMP=0x000000000008448b
- (void)dealloc;	// IMP=0x0000000000084405

@end


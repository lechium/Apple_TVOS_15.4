//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VCDaemonXPCEventHandler, VCTriggerEventQueue;
@protocol OS_dispatch_queue, WFDatabaseProvider, _CDUserContext;

@interface VCCoreDuetListener : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <_CDUserContext> _userContext;	// 16 = 0x10
    id <WFDatabaseProvider> _databaseProvider;	// 24 = 0x18
    VCDaemonXPCEventHandler *_eventHandler;	// 32 = 0x20
    VCTriggerEventQueue *_eventQueue;	// 40 = 0x28
    NSMutableDictionary *_registrations;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001c5a9
@property(readonly, nonatomic) NSMutableDictionary *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) VCTriggerEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) id <WFDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) id <_CDUserContext> userContext; // @synthesize userContext=_userContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c165
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bf9e
- (void)fireTriggerWithIdentifier:(id)arg1 force:(_Bool)arg2 eventInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001bd94
- (void)queue_fireTriggerWithIdentifier:(id)arg1 force:(_Bool)arg2 eventInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001bbd2
- (void)handleSunriseSunsetChanged;	// IMP=0x000000000001b873
- (void)registerSunriseSunsetCallbackIfNeeded;	// IMP=0x000000000001b617
- (void)queue_unregisterCallbackForIdentifier:(id)arg1;	// IMP=0x000000000001b46b
- (void)registerCallback:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000001b1d5
- (_Bool)isCallbackRegisteredWithIdentifier:(id)arg1;	// IMP=0x000000000001b11f
- (void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2;	// IMP=0x000000000001ac93
- (void)unregisterConfiguredTriggerWithIdentifier:(id)arg1;	// IMP=0x000000000001abe2
- (_Bool)registerTrigger:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a4c5
- (void)registerConfiguredTrigger:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a3e9
- (id)databaseWithError:(id *)arg1;	// IMP=0x000000000001a355
- (id)initWithDatabaseProvider:(id)arg1 eventQueue:(id)arg2;	// IMP=0x000000000001a189

@end


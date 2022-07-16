//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol BBDataProvider, OS_dispatch_queue, OS_dispatch_source;

@interface BBLocalDataProvider
{
    NSObject<OS_dispatch_queue> *_localQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_remoteQueue;	// 24 = 0x18
    id <BBDataProvider> _dataProvider;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_watchdogTimer;	// 40 = 0x28
    _Bool _unresponsive;	// 48 = 0x30
    _Bool _invalidated;	// 49 = 0x31
}

+ (id)dataProviderWithDataProvider:(id)arg1 serverQueue:(id)arg2;	// IMP=0x000000000005f5e9
+ (id)dataProviderWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f56e
- (void).cxx_destruct;	// IMP=0x0000000000062775
@property(retain, nonatomic) id <BBDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000000625d8
- (void)noteSectionInfoDidChange:(id)arg1;	// IMP=0x00000000000624e4
- (void)reloadIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062390
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;	// IMP=0x00000000000621f5
- (_Bool)canPerformMigration;	// IMP=0x00000000000621af
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061c36
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061b15
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000619f4
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000061822
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000616c3
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061480
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;	// IMP=0x0000000000061257
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061164
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;	// IMP=0x0000000000061067
- (id)_bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;	// IMP=0x0000000000060e96
- (void)_doAsynchronousRemoteRequest:(CDUnknownBlockType)arg1 conditionalOn:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060c3f
- (id)_doSynchronousRemoteRequest:(CDUnknownBlockType)arg1 conditionalOn:(CDUnknownBlockType)arg2;	// IMP=0x00000000000609cf
- (void)dataProviderDidLoad;	// IMP=0x00000000000608cc
- (void)startWatchdog;	// IMP=0x00000000000607ac
- (void)_watchdogFired;	// IMP=0x0000000000060639
- (void)_ping;	// IMP=0x0000000000060441
- (void)invalidate;	// IMP=0x00000000000603fc
- (void)dealloc;	// IMP=0x00000000000603a0
- (id)initWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005fc0d
- (id)initWithDataProvider:(id)arg1 serverQueue:(id)arg2;	// IMP=0x000000000005fb77
- (id)_initWithDataProvider:(id)arg1 sectionID:(id)arg2 serverQueue:(id)arg3 initializationCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005f655

@end

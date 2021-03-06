//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFTimerDelegate-Protocol.h>

@class HMFTimer, HMIHomePersonManagerSettings, NSMutableDictionary, NSOperationQueue, NSString;
@protocol HMIHomePersonManagerDataSource;

@interface HMIHomePersonManager <HMFTimerDelegate, HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMIHomePersonManagerDataSource> _dataSource;	// 16 = 0x10
    HMIHomePersonManagerSettings *_settings;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    HMFTimer *_watchdogTimer;	// 40 = 0x28
    HMFTimer *_analyticsTimer;	// 48 = 0x30
    NSMutableDictionary *_unknownFacesSavedCounts;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000000edec
- (void).cxx_destruct;	// IMP=0x000000000000f1a6
@property(readonly) NSMutableDictionary *unknownFacesSavedCounts; // @synthesize unknownFacesSavedCounts=_unknownFacesSavedCounts;
@property(readonly) HMFTimer *analyticsTimer; // @synthesize analyticsTimer=_analyticsTimer;
@property(readonly) HMFTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <HMIHomePersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateSettings:(id)arg1;	// IMP=0x000000000000edf6
- (id)logIdentifier;	// IMP=0x000000000000ed59
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000000e27f
- (void)handleNewFaceEvents:(id)arg1;	// IMP=0x000000000000d59d
- (void)storeFaceprint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d365
- (void)storeUnassociatedFaceCrop:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d0d5
- (void)handleMisclassifiedPersonForFaceCrop:(id)arg1;	// IMP=0x000000000000cd0f
- (void)handleRemovedFaceprintWithUUID:(id)arg1;	// IMP=0x000000000000cc1f
- (void)handleRemovedFaceCropWithUUID:(id)arg1;	// IMP=0x000000000000cafe
- (void)handleRemovedPersonWithUUID:(id)arg1;	// IMP=0x000000000000c9dd
- (void)handleUpdatedSettings:(id)arg1;	// IMP=0x000000000000c8db
- (void)handleUpdatedFaceprint:(id)arg1;	// IMP=0x000000000000c7eb
- (void)handleUpdatedPersonFaceCrop:(id)arg1;	// IMP=0x000000000000c6ca
- (void)handleUpdatedUnassociatedFaceCrop:(id)arg1;	// IMP=0x000000000000c5da
- (void)handleUpdatedPerson:(id)arg1;	// IMP=0x000000000000c4b9
@property(readonly) HMIHomePersonManagerSettings *settings; // @synthesize settings=_settings;
- (id)initWithUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x000000000000bdef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


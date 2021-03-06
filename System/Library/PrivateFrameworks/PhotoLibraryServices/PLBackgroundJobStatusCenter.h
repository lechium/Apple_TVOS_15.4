//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLBackgroundJobServiceObserver-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString;

@interface PLBackgroundJobStatusCenter : NSObject <PLBackgroundJobServiceObserver>
{
    NSMutableArray *_registrationEventsQueue;	// 8 = 0x8
    NSMutableArray *_runningEventsQueue;	// 16 = 0x10
    NSMutableSet *_workersResponsibleForRegistration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000059d8ab
- (void)backgroundJobServiceDidChangeStateFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000000059d829
@property(readonly) NSDictionary *statusDumpDictionary;
- (void)recordFinishingWorker:(id)arg1;	// IMP=0x000000000059d40b
- (void)recordStoppingWorker:(id)arg1 withRemainingJobCount:(unsigned long long)arg2;	// IMP=0x000000000059d328
- (void)recordStartingWorker:(id)arg1 withJobCount:(unsigned long long)arg2;	// IMP=0x000000000059d245
- (void)recordWorkerHasPendingJobs:(id)arg1;	// IMP=0x000000000059d1f5
- (void)_recordNonRegistrationEvent;	// IMP=0x000000000059d152
- (void)_recordRegistrationEventToState:(unsigned long long)arg1;	// IMP=0x000000000059d04f
- (void)_addRunningEventToQueue:(id)arg1;	// IMP=0x000000000059d000
- (void)_addRegistrationEventToQueue:(id)arg1;	// IMP=0x000000000059cfb1
- (id)init;	// IMP=0x000000000059cf25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


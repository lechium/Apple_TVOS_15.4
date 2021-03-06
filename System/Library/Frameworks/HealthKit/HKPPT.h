//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKPPTController-Protocol.h>

@class NSMutableDictionary;
@protocol HKPPTInterface, OS_dispatch_queue;

@interface HKPPT : NSObject <HKPPTController>
{
    id <HKPPTInterface> _pptInterface;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_pptQueue;	// 16 = 0x10
    NSMutableDictionary *_activeTestsByName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000019670a
- (void)_failedTest:(id)arg1 withResults:(id)arg2;	// IMP=0x00000000001965ab
- (void)_failedTest:(id)arg1;	// IMP=0x000000000019647d
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;	// IMP=0x000000000019631e
- (void)_finishedTest:(id)arg1;	// IMP=0x00000000001961f0
- (void)_startedTest:(id)arg1;	// IMP=0x00000000001960c2
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000000195e1e
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;	// IMP=0x0000000000195d7c
- (void)failedTest:(id)arg1 results:(id)arg2 error:(id)arg3;	// IMP=0x0000000000195b9e
- (void)startedTest:(id)arg1;	// IMP=0x0000000000195b57
- (void)invalidConfigurationForTest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000195ada
- (id)_testNameForDriver:(id)arg1;	// IMP=0x0000000000195933
- (id)builtinTests;	// IMP=0x00000000001958dc
- (void)dealloc;	// IMP=0x0000000000195867
- (id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2;	// IMP=0x0000000000195781
- (id)init;	// IMP=0x0000000000195707

@end


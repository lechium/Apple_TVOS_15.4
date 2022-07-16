//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface PKSEConsistencyCheckResultCollector : NSObject
{
    NSMutableArray *_requestedActions;	// 8 = 0x8
    NSMutableDictionary *_resultSummary;	// 16 = 0x10
    _Bool _sendCleanupReasons;	// 24 = 0x18
    _Bool _addCleanupActionsToResultsSummary;	// 25 = 0x19
    long long _cleanupActions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000182a78
@property(readonly, nonatomic) long long cleanupActions; // @synthesize cleanupActions=_cleanupActions;
@property(nonatomic) _Bool addCleanupActionsToResultsSummary; // @synthesize addCleanupActionsToResultsSummary=_addCleanupActionsToResultsSummary;
@property(readonly, nonatomic) NSArray *requestedActions;
@property(readonly, nonatomic) NSDictionary *resultsSummary;
- (void)addCleanupActions:(long long)arg1;	// IMP=0x0000000000182a16
- (void)addCleanupActions:(long long)arg1 cleanupReason:(id)arg2 forDeviceCredential:(id)arg3 passCredential:(id)arg4;	// IMP=0x0000000000182091
- (id)init;	// IMP=0x000000000018200d

@end


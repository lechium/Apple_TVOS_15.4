//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSUserActivityDelegate-Protocol.h>

@class NSProgress, NSString;
@protocol UIActivityContinuationManagerApplicationContext;

__attribute__((visibility("hidden")))
@interface UIActivityContinuationManager : NSObject <NSUserActivityDelegate>
{
    id <UIActivityContinuationManagerApplicationContext> _context;	// 8 = 0x8
    NSString *_currentActivityContinuationType;	// 16 = 0x10
    NSString *_currentActivityContinuationUUIDString;	// 24 = 0x18
    NSProgress *_currentActivityContinuationProgress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000edefe8
@property(retain, nonatomic, getter=_currentActivityContinuationProgress, setter=_setCurrentActivityContinuationProgress:) NSProgress *currentActivityContinuationProgress; // @synthesize currentActivityContinuationProgress=_currentActivityContinuationProgress;
@property(copy, nonatomic, getter=_currentActivityContinuationUUIDString, setter=_setCurrentActivityContinuationUUIDString:) NSString *currentActivityContinuationUUIDString; // @synthesize currentActivityContinuationUUIDString=_currentActivityContinuationUUIDString;
@property(copy, nonatomic, getter=_currentActivityContinuationType, setter=_setCurrentActivityContinuationType:) NSString *currentActivityContinuationType; // @synthesize currentActivityContinuationType=_currentActivityContinuationType;
- (void)removeResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;	// IMP=0x0000000000edec34
- (void)_cleanupUserActivity:(id)arg1 activityIdentifier:(id)arg2;	// IMP=0x0000000000edebb6
- (void)addResponder:(id)arg1 document:(id)arg2 forUserActivity:(id)arg3;	// IMP=0x0000000000ede8b2
- (void)userActivityWillSave:(id)arg1;	// IMP=0x0000000000ede7e1
- (void)_userActivityWillSave:(id)arg1;	// IMP=0x0000000000ede40c
- (_Bool)activityContinuationsAreBeingTracked;	// IMP=0x0000000000ede3ec
- (id)activityContinuationDictionaryWithAction:(id)arg1;	// IMP=0x0000000000ede3d8
- (id)activityContinuationDictionaryWithAction:(id)arg1 sourceApplication:(id)arg2;	// IMP=0x0000000000eddf58
- (void)handleActivityContinuation:(id)arg1 isSuspended:(_Bool)arg2;	// IMP=0x0000000000edd58b
- (void)_clearCurrentActivityContinuationCancelingProgress:(_Bool)arg1;	// IMP=0x0000000000edd513
- (id)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000edd41d
- (_Bool)_delegateHandledContinueActivityWithType:(id)arg1;	// IMP=0x0000000000edd342
- (void)_didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;	// IMP=0x0000000000edd2c0
- (_Bool)_continueUserActivity:(id)arg1;	// IMP=0x0000000000edd261
- (void)_endCurrentActivityContinuationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000edd1f3
- (void)_endCurrentActivityContinuationAndDisplayError:(id)arg1;	// IMP=0x0000000000edd185
- (void)_hideCurrentActivityContinuationProgressUI;	// IMP=0x0000000000edd14d
- (void)_displayCurrentActivityContinuationProgressUI;	// IMP=0x0000000000edcffb
- (id)initWithApplicationContext:(id)arg1;	// IMP=0x0000000000edcf97
- (id)init;	// IMP=0x0000000000edcf10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

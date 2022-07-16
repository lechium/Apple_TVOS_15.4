//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/RBSAssertionObserving-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKProcessAssertionBackgroundTaskManager : NSObject <RBSAssertionObserving>
{
    struct RetainPtr<RBSAssertion> _backgroundTask;	// 8 = 0x8
    struct atomic<bool> _backgroundTaskWasInvalidated;	// 16 = 0x10
    struct WeakHashSet<WebKit::ProcessAndUIAssertion, WTF::EmptyCounter> _assertionsNeedingBackgroundTask;	// 24 = 0x18
    CDUnknownBlockType _pendingTaskReleaseTask;	// 32 = 0x20
}

+ (id)shared;	// IMP=0x000000000034b4d8
- (id).cxx_construct;	// IMP=0x000000000034c516
- (void).cxx_destruct;	// IMP=0x000000000034c4e0
- (void)_releaseBackgroundTask;	// IMP=0x000000000034c3d4
- (void)_handleBackgroundTaskExpirationOnMainThread;	// IMP=0x000000000034c24b
- (void)_handleBackgroundTaskExpiration;	// IMP=0x000000000034c124
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000000034c093
- (void)assertionWillInvalidate:(id)arg1;	// IMP=0x000000000034c081
- (void)_updateBackgroundTask;	// IMP=0x000000000034bd45
- (_Bool)_hasBackgroundTask;	// IMP=0x000000000034bd37
- (void)_cancelPendingReleaseTask;	// IMP=0x000000000034bc9a
- (void)_scheduleReleaseTask;	// IMP=0x000000000034bb89
- (void)_notifyAssertionsOfImminentSuspension;	// IMP=0x000000000034b88b
- (void)removeAssertionNeedingBackgroundTask:(void *)arg1;	// IMP=0x000000000034b7bf
- (void)addAssertionNeedingBackgroundTask:(void *)arg1;	// IMP=0x000000000034b6db
- (void)dealloc;	// IMP=0x000000000034b69d
- (id)init;	// IMP=0x000000000034b50a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol TVCKAttemptGovernorDelegate;

@interface TVCKAttemptGovernor : NSObject
{
    id <TVCKAttemptGovernorDelegate> _delegate;	// 8 = 0x8
    unsigned long long _attemptCount;	// 16 = 0x10
    NSTimer *_retryTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000099d38
@property(nonatomic) __weak NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(nonatomic) __weak id <TVCKAttemptGovernorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attemptFailed;	// IMP=0x0000000000099bed
- (void)attemptSucceeded;	// IMP=0x0000000000099bbb
- (void)_startTimerWithDelay:(double)arg1 tolerance:(double)arg2;	// IMP=0x0000000000099af8
- (double)_toleranceForDelay:(double)arg1;	// IMP=0x0000000000099aea
- (double)_delayForFailure:(unsigned long long)arg1;	// IMP=0x0000000000099a7a
- (double)_maxDelayForFailure:(unsigned long long)arg1;	// IMP=0x0000000000099a06
- (double)_minDelayForFailure:(unsigned long long)arg1;	// IMP=0x00000000000999fd
- (unsigned long long)_numberOfFailuresNeededToReachMaxDelay;	// IMP=0x00000000000999f2
- (double)_maxDelay;	// IMP=0x00000000000999e4
- (unsigned long long)_maxConsecutiveAttempts;	// IMP=0x00000000000999d9
- (_Bool)_shouldAttemptAfterFailure:(unsigned long long)arg1;	// IMP=0x00000000000999b6
- (unsigned long long)_incrementedAttemptCount;	// IMP=0x000000000009996f
- (void)_retryTimerFired:(id)arg1;	// IMP=0x00000000000998c7
- (void)_beginAttempt;	// IMP=0x000000000009987b

@end

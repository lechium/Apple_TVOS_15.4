//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_queue;

@interface _AXReplayInstance : NSObject
{
    _Bool _async;	// 8 = 0x8
    _Bool _didSucceed;	// 9 = 0x9
    CDUnknownBlockType _replayBlock;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    double _interval;	// 32 = 0x20
    long long _maxAttempts;	// 40 = 0x28
    long long _attemptsRemaining;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSError *_underlyingError;	// 64 = 0x40
    id _underlyingResult;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
}

+ (id)replayBlock:(CDUnknownBlockType)arg1 name:(id)arg2 attempts:(long long)arg3 interval:(double)arg4 async:(_Bool)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000009e559
- (void).cxx_destruct;	// IMP=0x000000000009ee06
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id underlyingResult; // @synthesize underlyingResult=_underlyingResult;
@property(retain, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool async; // @synthesize async=_async;
@property(nonatomic) long long attemptsRemaining; // @synthesize attemptsRemaining=_attemptsRemaining;
@property(nonatomic) long long maxAttempts; // @synthesize maxAttempts=_maxAttempts;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType replayBlock; // @synthesize replayBlock=_replayBlock;
- (id)_genericFailError;	// IMP=0x000000000009ec87
- (void)_dispatchAsynchronously;	// IMP=0x000000000009e9a2
- (void)_dispatchSynchronously;	// IMP=0x000000000009e783
- (void)dispatch;	// IMP=0x000000000009e6d0

@end


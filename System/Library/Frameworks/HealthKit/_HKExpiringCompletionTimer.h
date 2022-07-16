//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HKExpiringCompletionTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;	// 8 = 0x8
    double _expirationTime;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    CDUnknownBlockType _timeoutHandler;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
    NSDate *_startDate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001a5332
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)_invalidateAndInvokeCompletion:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000001a5296
- (void)invalidateAndInvokeCompletionWithError:(id)arg1;	// IMP=0x00000000001a527c
- (void)invalidate;	// IMP=0x00000000001a5266
- (void)_start;	// IMP=0x00000000001a50c4
- (void)restart;	// IMP=0x00000000001a4f99
- (void)startWithTimeoutInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a4e47
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)_cancelTimer;	// IMP=0x00000000001a4dda
- (void)dealloc;	// IMP=0x00000000001a4d17
- (id)initWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a4c6c
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a4c18

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLUpdateProgressHandlers : NSObject
{
    long long _interestedEvents;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e8f50
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property long long interestedEvents; // @synthesize interestedEvents=_interestedEvents;
- (id)description;	// IMP=0x00000000000e8d2e
- (void)dispatchTrainingCompletionHandlerWithError:(id)arg1 onQueue:(id)arg2;	// IMP=0x00000000000e8d00
- (void)dispatchTrainingCompletionHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;	// IMP=0x00000000000e8cd3
- (void)dispatchMiniBatchEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;	// IMP=0x00000000000e8ca3
- (void)dispatchEpochEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;	// IMP=0x00000000000e8c73
- (void)dispatchTrainingBeginProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;	// IMP=0x00000000000e8c43
- (void)_dispatchUpdateProgressHandlerForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4 onQueue:(id)arg5;	// IMP=0x00000000000e8bc0
- (id)initForEvents:(long long)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e8b11

@end


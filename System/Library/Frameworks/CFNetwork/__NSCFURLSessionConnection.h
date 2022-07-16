//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSURLResponse, NSURLSessionTask;
@protocol OS_dispatch_data, OS_dispatch_queue, __NSCFURLSessionConnectionDelegate;

@interface __NSCFURLSessionConnection : NSObject <NSCopying>
{
    NSURLSessionTask *_task;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <__NSCFURLSessionConnectionDelegate> _delegate;	// 24 = 0x18
    NSURLResponse *_cacheResponse;	// 32 = 0x20
    NSObject<OS_dispatch_data> *_cacheData;	// 40 = 0x28
    unsigned long long _cacheDataMax;	// 48 = 0x30
    long long _maxCacheEntrySize;	// 56 = 0x38
}

- (void)setIsDownload:(_Bool)arg1;	// IMP=0x000000000009a0e6
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x000000000009a0e0
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x000000000009a0da
- (void)expectedProgressTargetChanged;	// IMP=0x000000000009a0d4
- (void)setBytesPerSecondLimit:(long long)arg1;	// IMP=0x000000000009a0ce
- (void)setPriorityHint:(float)arg1 incremental:(_Bool)arg2;	// IMP=0x000000000009a0c8
- (void)setPoolPriority:(long long)arg1;	// IMP=0x000000000009a0c2
- (void)resume;	// IMP=0x000000000009a0bc
- (void)suspend;	// IMP=0x000000000009a0b6
- (void)cancel;	// IMP=0x000000000009a0b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009a0a5
- (void)dealloc;	// IMP=0x000000000009a018
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x0000000000099f5a

@end


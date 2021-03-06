//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImageIODecoder
{
    NSObject<OS_dispatch_queue> *_pendingRequestQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_activeRequestQueue;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;	// 24 = 0x18
}

+ (void)setMaxConcurrentDecodeCount:(long long)arg1;	// IMP=0x0000000000045539
+ (long long)maxConcurrentDecodeCount;	// IMP=0x000000000004552c
+ (id)sharedDecoder;	// IMP=0x00000000000454fc
- (void).cxx_destruct;	// IMP=0x00000000000449ad
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;	// IMP=0x00000000000449a7
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 existingRequestHandle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000044706
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000446e4
- (id)init;	// IMP=0x00000000000445e2

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CKVConcurrentQueue
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000093369
- (id)dequeue;	// IMP=0x00000000000932a9
- (void)enqueue:(id)arg1;	// IMP=0x0000000000093215
- (id)init;	// IMP=0x0000000000093168

@end

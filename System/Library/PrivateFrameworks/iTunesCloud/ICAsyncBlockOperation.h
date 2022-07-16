//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface ICAsyncBlockOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    CDUnknownBlockType _cancellationHandler;	// 16 = 0x10
    CDUnknownBlockType _startHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000056209
@property(readonly, copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler;
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000056064
- (void)execute;	// IMP=0x000000000005604b
- (void)cancel;	// IMP=0x0000000000055feb
- (id)initWithStartHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000055f4c

@end


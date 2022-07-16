//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol CATIDSServiceConnectionMessageProcessorDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATIDSServiceConnectionMessageProcessor : NSObject
{
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 8 = 0x8
    NSUUID *mConnectionIdentifier;	// 16 = 0x10
    id <CATIDSServiceConnectionMessageProcessorDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002347f
@property(nonatomic) __weak id <CATIDSServiceConnectionMessageProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)receiveMessage:(id)arg1;	// IMP=0x0000000000022d2d
- (id)initWithWorkQueue:(id)arg1 connectionIdentifier:(id)arg2;	// IMP=0x0000000000022c94

@end


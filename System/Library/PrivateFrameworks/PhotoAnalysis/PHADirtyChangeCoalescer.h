//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFCoalescer;
@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

@interface PHADirtyChangeCoalescer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PFCoalescer *_valueCoalescer;	// 16 = 0x10
    id <PHADirtyChangeCoalescerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000714c6
@property(nonatomic) __weak id <PHADirtyChangeCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3;	// IMP=0x00000000000713f8
- (id)init;	// IMP=0x00000000000712ce

@end

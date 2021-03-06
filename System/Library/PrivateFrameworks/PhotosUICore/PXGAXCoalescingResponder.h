//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGAXResponder-Protocol.h>

@class NSMutableArray, NSString;
@protocol PXGAXResponder;

@interface PXGAXCoalescingResponder : NSObject <PXGAXResponder>
{
    NSMutableArray *_pendingAXEventBlocks;	// 8 = 0x8
    _Bool _pauseEventDelivery;	// 16 = 0x10
    id <PXGAXResponder> axNextResponder;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004726ff
@property(nonatomic) _Bool pauseEventDelivery; // @synthesize pauseEventDelivery=_pauseEventDelivery;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder;
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;	// IMP=0x000000000047263c
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x0000000000472579
- (id)axContainingScrollViewForAXGroup:(id)arg1;	// IMP=0x00000000004724f6
- (void)_distributeEvents;	// IMP=0x0000000000472364
- (void)_notifyResponder:(CDUnknownBlockType)arg1;	// IMP=0x00000000004722c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFItem, HFItemUpdateOutcome, NAFuture;

@interface _HFItemUpdateFutureWrapper : NSObject
{
    _Bool _isInternal;	// 8 = 0x8
    NAFuture *_future;	// 16 = 0x10
    HFItem *_item;	// 24 = 0x18
    HFItemUpdateOutcome *_outcome;	// 32 = 0x20
}

+ (id)futuresFromWrappers:(id)arg1;	// IMP=0x000000000014d8d6
+ (id)wrapperWithFuture:(id)arg1 item:(id)arg2 isInternal:(_Bool)arg3;	// IMP=0x000000000014d718
- (void).cxx_destruct;	// IMP=0x000000000014d96a
@property(retain, nonatomic) HFItemUpdateOutcome *outcome; // @synthesize outcome=_outcome;
@property(nonatomic) _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NAFuture *future; // @synthesize future=_future;

@end

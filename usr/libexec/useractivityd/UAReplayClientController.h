//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UAUserActivityInfo;

@interface UAReplayClientController
{
    UAUserActivityInfo *_item;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001ca91
@property(retain) UAUserActivityInfo *item; // @synthesize item=_item;
- (id)statusString;	// IMP=0x001000000001c9fe
- (id)userActivityInfoForUUID:(id)arg1;	// IMP=0x001000000001c90b
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x001000000001c86a
- (id)items;	// IMP=0x001000000001c7c9
- (void)removeItem:(id)arg1;	// IMP=0x001000000001c68b
- (void)addItem:(id)arg1;	// IMP=0x001000000001c63e
- (void)dealloc;	// IMP=0x001000000001c5d0
- (id)initWithManager:(id)arg1;	// IMP=0x001000000001c59a

@end

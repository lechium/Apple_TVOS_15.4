//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UAUserActivityInfo;

@interface UAActivityReplayAdvertiser
{
    NSArray *_advertisableItems;	// 8 = 0x8
    UAUserActivityInfo *_advertisedItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006d99
@property(retain) UAUserActivityInfo *advertisedItem; // @synthesize advertisedItem=_advertisedItem;
- (void)setItem:(id)arg1;	// IMP=0x0010000000006d25
- (void)setAdvertisableItems:(id)arg1;	// IMP=0x0010000000006c80
- (id)advertisingItems;	// IMP=0x0010000000006c6e
- (_Bool)advertising;	// IMP=0x0010000000006c3b
- (id)advertisableItems;	// IMP=0x0010000000006b9a
- (_Bool)active;	// IMP=0x0010000000006b88

@end


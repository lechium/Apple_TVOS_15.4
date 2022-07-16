//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSMutableSet;

@interface HFProgrammableSwitchItemProvider
{
    CDUnknownBlockType _filter;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    NSMutableSet *_programmableSwitchAccessoryItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ffd73
@property(retain, nonatomic) NSMutableSet *programmableSwitchAccessoryItems; // @synthesize programmableSwitchAccessoryItems=_programmableSwitchAccessoryItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)invalidationReasons;	// IMP=0x00000000001ffca6
- (id)items;	// IMP=0x00000000001ffc5e
- (id)reloadItems;	// IMP=0x00000000001ff900
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ff89a
- (id)init;	// IMP=0x00000000001ff7e5
- (id)initWithHome:(id)arg1;	// IMP=0x00000000001ff756

@end

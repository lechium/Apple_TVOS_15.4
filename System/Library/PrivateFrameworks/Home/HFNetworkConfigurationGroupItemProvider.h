//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSMutableSet;

@interface HFNetworkConfigurationGroupItemProvider
{
    HMHome *_home;	// 8 = 0x8
    NSMutableSet *_groupItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b0d59
@property(retain, nonatomic) NSMutableSet *groupItems; // @synthesize groupItems=_groupItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)invalidationReasons;	// IMP=0x00000000001b0c4a
- (id)items;	// IMP=0x00000000001b0c38
- (id)reloadItems;	// IMP=0x00000000001b066b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b0605
- (id)init;	// IMP=0x00000000001b0550
- (id)initWithHome:(id)arg1;	// IMP=0x00000000001b04b1

@end


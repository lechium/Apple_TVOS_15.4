//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSSet;
@protocol HFRoomSuggestionVendor;

@interface HFRoomSuggestionItemProvider
{
    unsigned long long _suggestedRoomLimit;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    id <HFRoomSuggestionVendor> _suggestionVendor;	// 24 = 0x18
    NSSet *_supplementaryRoomBuilders;	// 32 = 0x20
    NSSet *_suggestionItems;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000268ac0
@property(retain, nonatomic) NSSet *suggestionItems; // @synthesize suggestionItems=_suggestionItems;
@property(copy, nonatomic) NSSet *supplementaryRoomBuilders; // @synthesize supplementaryRoomBuilders=_supplementaryRoomBuilders;
@property(retain, nonatomic) id <HFRoomSuggestionVendor> suggestionVendor; // @synthesize suggestionVendor=_suggestionVendor;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long suggestedRoomLimit; // @synthesize suggestedRoomLimit=_suggestedRoomLimit;
- (id)_keyForRoomName:(id)arg1;	// IMP=0x00000000002688ef
- (id)_filteredSuggestions;	// IMP=0x000000000026845c
- (id)_filteredSupplementaryRoomBuilders;	// IMP=0x00000000002683cf
- (id)invalidationReasons;	// IMP=0x000000000026835a
- (id)items;	// IMP=0x0000000000268348
- (id)reloadItems;	// IMP=0x0000000000267c3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000267bd7
- (id)init;	// IMP=0x0000000000267b22
- (id)initWithHome:(id)arg1 suggestionVendor:(id)arg2;	// IMP=0x0000000000267a71
- (id)initWithHome:(id)arg1;	// IMP=0x00000000002679f0

@end


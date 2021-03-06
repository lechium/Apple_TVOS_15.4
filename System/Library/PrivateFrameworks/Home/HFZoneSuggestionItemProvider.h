//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSMutableSet;

@interface HFZoneSuggestionItemProvider
{
    CDUnknownBlockType _filter;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    NSMutableSet *_zoneBuilderItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ef744
@property(retain, nonatomic) NSMutableSet *zoneBuilderItems; // @synthesize zoneBuilderItems=_zoneBuilderItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)_zoneSuggestions;	// IMP=0x00000000001ef409
- (id)invalidationReasons;	// IMP=0x00000000001ef394
- (id)items;	// IMP=0x00000000001ef382
- (id)reloadItems;	// IMP=0x00000000001eee45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eeddf
- (id)init;	// IMP=0x00000000001eed2a
- (id)initWithHome:(id)arg1;	// IMP=0x00000000001eec8b

@end


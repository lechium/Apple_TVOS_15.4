//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, HMRoom, NSMutableSet;

@interface HFCameraItemProvider
{
    _Bool _onlyShowsFavorites;	// 8 = 0x8
    CDUnknownBlockType _filter;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
    HMRoom *_room;	// 32 = 0x20
    NSMutableSet *_cameraItems;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000012f2fe
@property(retain, nonatomic) NSMutableSet *cameraItems; // @synthesize cameraItems=_cameraItems;
@property(nonatomic) _Bool onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (CDUnknownBlockType)_favoriteFilter;	// IMP=0x000000000012f19f
- (CDUnknownBlockType)_roomFilter;	// IMP=0x000000000012f01d
- (id)invalidationReasons;	// IMP=0x000000000012ef36
- (id)items;	// IMP=0x000000000012ef24
- (id)reloadItems;	// IMP=0x000000000012e8f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012e88a
- (id)initWithHome:(id)arg1;	// IMP=0x000000000012e7dc
- (id)init;	// IMP=0x000000000012e727

@end


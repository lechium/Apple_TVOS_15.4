//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, HMRoom;

@interface HFActionSetListItem
{
    _Bool _onlyShowsFavorites;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    HMRoom *_room;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c74e9
@property(nonatomic) _Bool onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000001c6f7c
- (id)init;	// IMP=0x00000000001c6ef5
- (id)initWithHome:(id)arg1 room:(id)arg2;	// IMP=0x00000000001c6e53

@end

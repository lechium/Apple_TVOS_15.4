//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemState;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemDependencyRelation
{
    _Bool _requirement;	// 8 = 0x8
    _UIStatusBarDisplayItemState *_itemState;	// 16 = 0x10
    _UIStatusBarDisplayItemPlacement *_placement;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000ca0624
@property(nonatomic) _Bool requirement; // @synthesize requirement=_requirement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // @synthesize placement=_placement;
@property(nonatomic) __weak _UIStatusBarDisplayItemState *itemState; // @synthesize itemState=_itemState;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000ca0498
- (id)type;	// IMP=0x0000000000ca0471
- (id)itemStates;	// IMP=0x0000000000ca03e6
- (_Bool)isFulfilled;	// IMP=0x0000000000ca0383

@end

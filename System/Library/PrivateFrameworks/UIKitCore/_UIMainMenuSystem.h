//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIMenu, _UIMenuBuilder;

__attribute__((visibility("hidden")))
@interface _UIMainMenuSystem
{
    _UIMenuBuilder *_automaticallyRebuildingBuilder;	// 8 = 0x8
}

+ (id)_sharedSystem;	// IMP=0x000000000005405b
- (void).cxx_destruct;	// IMP=0x0000000000054297
- (_Bool)_buildMenuWithBuilder:(id)arg1 fromResponderChain:(id)arg2 atLocation:(struct CGPoint)arg3 inCoordinateSpace:(id)arg4;	// IMP=0x0000000000054268
@property(readonly, nonatomic) UIMenu *_rootMenu;
@property(readonly, nonatomic) NSArray *_keyCommands;
- (void)_automaticallyRebuildIfNeeded;	// IMP=0x000000000005419f
- (void)setNeedsRebuild;	// IMP=0x0000000000054155
- (void)dealloc;	// IMP=0x0000000000054126
- (id)_init;	// IMP=0x00000000000540f0

@end


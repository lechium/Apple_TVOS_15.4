//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIWallpaperEffectEntry
{
    UIColor *_backgroundColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000037178d
@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isSameTypeOfEffect:(id)arg1;	// IMP=0x000000000037175e
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x0000000000371756
- (void)applyIdentityEffectToView:(id)arg1;	// IMP=0x00000000003716e0
- (void)applyRequestedEffectToView:(id)arg1;	// IMP=0x000000000037166e
- (void)addEffectToView:(id)arg1;	// IMP=0x00000000003715fc

@end


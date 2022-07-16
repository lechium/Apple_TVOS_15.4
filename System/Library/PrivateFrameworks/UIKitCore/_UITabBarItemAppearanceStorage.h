//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface _UITabBarItemAppearanceStorage
{
    NSMutableDictionary *_badgeTextAttributesForState;	// 16 = 0x10
    UIColor *_badgeColor;	// 24 = 0x18
    struct UIOffset _titleOffset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001f1808
@property(copy, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(nonatomic) struct UIOffset titleOffset; // @synthesize titleOffset=_titleOffset;
- (void)enumerateBadgeTextAttributesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f16cb
- (id)badgeTextAttributesForState:(unsigned long long)arg1;	// IMP=0x00000000001f1644
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001f14c1

@end


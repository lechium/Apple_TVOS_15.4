//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, UIColor, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface _UITabBarItemData
{
    long long _style;	// 8 = 0x8
    NSDictionary *_titleTextAttributes[5];	// 16 = 0x10
    NSDictionary *_badgeTextAttributes[5];	// 56 = 0x38
    UIColor *_iconColor[5];	// 96 = 0x60
    UIColor *_badgeBackgroundColor[5];	// 136 = 0x88
    struct UIOffset _titlePositionAdjustment[5];	// 176 = 0xb0
    struct UIOffset _badgePositionAdjustment[5];	// 256 = 0x100
    struct UIOffset _badgeTitlePositionAdjustment[5];	// 336 = 0x150
    struct {
        unsigned int hasUserTitleFont:1;
        unsigned int hasUserTitleColor:1;
        unsigned int hasUserTitlePosition:1;
        unsigned int hasUserIconColor:1;
        unsigned int hasUserBadgePosition:1;
        unsigned int hasUserBadgeBackgroundColor:1;
        unsigned int hasUserBadgeTitleFont:1;
        unsigned int hasUserBadgeTitleColor:1;
        unsigned int hasUserBadgeTitlePosition:1;
    } _stateFlags[5];	// 416 = 0x1a0
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000ee9e18
+ (id)standardItemDataForStyle:(long long)arg1;	// IMP=0x0000000000ee76b8
- (void).cxx_destruct;	// IMP=0x0000000000eec924
@property(readonly, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
- (void)setBadgeTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000000eec238
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000eec1b7
- (void)setBadgeTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000eec0ad
- (id)badgeTextAttributesForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000000eebeb8
- (id)badgeTextAttributesForState:(long long)arg1;	// IMP=0x0000000000eebea4
- (void)setBadgeBackgroundColor:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000eebe23
- (id)badgeBackgroundColorForState:(long long)arg1;	// IMP=0x0000000000eebd8d
- (void)setBadgePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000000eebd27
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000eebca8
- (void)setIconColor:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000eebc2a
- (id)iconColorForState:(long long)arg1;	// IMP=0x0000000000eebbc5
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000000eebb5f
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000eebae0
- (_Bool)titleTextAttributesSpecifyColorForState:(long long)arg1;	// IMP=0x0000000000eeba88
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000eeb985
- (id)titleTextAttributesForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000000eeb791
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x0000000000eeb77d
- (id)_fallbackBadgeTitleColorForState:(long long)arg1;	// IMP=0x0000000000eeb700
- (id)_fallbackBadgeTitleFontForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000000eeb4ac
- (id)_fallbackTitleColorForState:(long long)arg1;	// IMP=0x0000000000eeb448
- (id)_fallbackTitleFontForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000000eeb210
- (id)replicate;	// IMP=0x0000000000eeb00b
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x0000000000eeabf1
- (long long)hashInto:(long long)arg1;	// IMP=0x0000000000eeab68
- (void)describeInto:(id)arg1;	// IMP=0x0000000000eea7bc
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000eea002
- (void)_decodeBadgeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000ee987b
- (void)_decodeBadgePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000ee92e8
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000ee8d55
- (void)_decodeBadgeBackgroundColorFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000ee88be
- (void)_decodeIconColorFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000ee842c
- (void)_decodeBadgeTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000ee7df1
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000ee77e8

@end


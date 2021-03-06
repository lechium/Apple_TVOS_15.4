//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFLowPowerModeTrigger
{
    _Bool _onEnable;	// 8 = 0x8
    _Bool _onDisable;	// 9 = 0x9
}

+ (id)yellowBatteryHierarchicalColors;	// IMP=0x000000000021b150
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021b148
+ (id)offLabel;	// IMP=0x000000000021b137
+ (id)onLabel;	// IMP=0x000000000021b126
+ (id)offIcon;	// IMP=0x000000000021b023
+ (id)onIcon;	// IMP=0x000000000021afb9
+ (long long)triggerBacking;	// IMP=0x000000000021afae
+ (id)displayGlyphHierarchicalColors;	// IMP=0x000000000021af9c
+ (id)displayGlyphName;	// IMP=0x000000000021af8f
+ (id)localizedDisplayExplanation;	// IMP=0x000000000021af7e
+ (id)localizedDisplayName;	// IMP=0x000000000021af6d
+ (_Bool)isSupportedOnThisDevice;	// IMP=0x000000000021af5c
+ (_Bool)isUserInitiated;	// IMP=0x000000000021af54
+ (_Bool)isAllowedToRunAutomatically;	// IMP=0x000000000021af4c
@property(nonatomic) _Bool onDisable; // @synthesize onDisable=_onDisable;
@property(nonatomic) _Bool onEnable; // @synthesize onEnable=_onEnable;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021ae8c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021ad6a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021ac68
- (id)localizedPastTenseDescription;	// IMP=0x000000000021ab39
- (id)localizedDescriptionWithConfigurationSummary;	// IMP=0x000000000021aa0a
- (_Bool)hasValidConfiguration;	// IMP=0x000000000021a9d1
- (id)init;	// IMP=0x000000000021a96d

@end


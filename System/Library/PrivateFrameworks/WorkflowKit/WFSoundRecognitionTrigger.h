//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface WFSoundRecognitionTrigger
{
    NSSet *_soundDetectionTypes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000077c2f
+ (long long)triggerBacking;	// IMP=0x0000000000077c24
+ (double)displayGlyphCornerRadius;	// IMP=0x0000000000077c16
+ (id)displayGlyph;	// IMP=0x0000000000077ba2
+ (id)localizedDisplayExplanation;	// IMP=0x0000000000077b91
+ (id)localizedDisplayName;	// IMP=0x0000000000077b80
+ (_Bool)isAllowedToRunAutomatically;	// IMP=0x0000000000077b2e
- (void).cxx_destruct;	// IMP=0x0000000000077b1b
@property(copy, nonatomic) NSSet *soundDetectionTypes; // @synthesize soundDetectionTypes=_soundDetectionTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077a64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077910
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077875
- (id)init;	// IMP=0x0000000000077806
- (_Bool)hasValidConfiguration;	// IMP=0x00000000000777be

@end

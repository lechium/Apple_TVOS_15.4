//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIFontDescriptor;

@interface _UIFontPickerFontInfo : NSObject
{
    NSString *_familyName;	// 8 = 0x8
    NSString *_styleName;	// 16 = 0x10
    NSString *_localizedFamilyName;	// 24 = 0x18
    NSString *_localizedStyleName;	// 32 = 0x20
    double _lineHeight;	// 40 = 0x28
    UIFontDescriptor *_fontDescriptor;	// 48 = 0x30
    NSAttributedString *_attributedString;	// 56 = 0x38
    NSString *_attributedStringContentSize;	// 64 = 0x40
    unsigned long long _hasMultipleFaces;	// 72 = 0x48
    NSArray *_subInfos;	// 80 = 0x50
    NSString *_postscriptName;	// 88 = 0x58
}

+ (id)infoWithFontDescriptor:(struct __CTFontDescriptor *)arg1;	// IMP=0x0000000000dae4ce
+ (id)infoWithFamilyName:(id)arg1;	// IMP=0x0000000000dae37d
- (void).cxx_destruct;	// IMP=0x0000000000daf492
@property(readonly) NSString *postscriptName; // @synthesize postscriptName=_postscriptName;
@property(readonly) NSString *styleName; // @synthesize styleName=_styleName;
@property(readonly) NSString *familyName; // @synthesize familyName=_familyName;
- (id)description;	// IMP=0x0000000000daf3b9
- (id)faceMatchingDescriptor:(id)arg1;	// IMP=0x0000000000daf1f5
- (_Bool)matchesFontDescriptor:(id)arg1;	// IMP=0x0000000000daf141
- (_Bool)matchesFamilyForFontDescriptor:(id)arg1;	// IMP=0x0000000000daf0d8
- (unsigned long long)hash;	// IMP=0x0000000000daf099
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000daefe7
@property(readonly) _UIFontPickerFontInfo *familyInfo;
@property(readonly) double lineHeight;
- (_Bool)matchesTraits:(unsigned int)arg1;	// IMP=0x0000000000daef50
- (_Bool)matchesLanguages:(id)arg1;	// IMP=0x0000000000daeee0
@property(readonly) NSAttributedString *attributedString;
- (void)_updateAttributedStringIfNeeded;	// IMP=0x0000000000daede4
- (id)_fontStringForTraitCollection:(id)arg1;	// IMP=0x0000000000daec0c
@property(readonly) NSString *localizedFamilyName;
@property(readonly) NSString *localizedName;
- (void)_populateLocalizedNamesIfNecessary;	// IMP=0x0000000000daeb4f
@property(readonly, getter=isFontFamilyAvailable) _Bool fontFamilyAvailable;
@property(readonly) UIFontDescriptor *fontDescriptor;
@property(readonly) NSArray *faces;
- (id)_sortedFacesByWeight;	// IMP=0x0000000000dae655
@property(readonly) _Bool hasMultipleFaces;
- (id)initWithFontDescriptor:(id)arg1;	// IMP=0x0000000000dae508
- (id)initWithFamilyName:(id)arg1;	// IMP=0x0000000000dae3c6

@end


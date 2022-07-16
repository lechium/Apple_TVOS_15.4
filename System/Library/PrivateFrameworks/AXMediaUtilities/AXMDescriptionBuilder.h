//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXMVisionFeature, NSMutableArray, NSMutableDictionary, NSMutableString;

@interface AXMDescriptionBuilder : NSObject
{
    long long _builderOptions;	// 8 = 0x8
    NSMutableString *_speakableDescription;	// 16 = 0x10
    NSMutableString *_visualDescription;	// 24 = 0x18
    NSMutableArray *_faceFeatures;	// 32 = 0x20
    NSMutableDictionary *_classificationLabelsToLocValuesMap;	// 40 = 0x28
    NSMutableArray *_iconClassFeatures;	// 48 = 0x30
    AXMVisionFeature *_captionFeature;	// 56 = 0x38
    _Bool _isNSFW;	// 64 = 0x40
    _Bool _shouldModifyCaptionForSensitiveContent;	// 65 = 0x41
    AXMVisionFeature *_blurFeature;	// 72 = 0x48
    AXMVisionFeature *_brightnessFeature;	// 80 = 0x50
    AXMVisionFeature *_primarySensitiveContentFeature;	// 88 = 0x58
}

+ (id)builderWithOptions:(long long)arg1;	// IMP=0x0000000000011204
- (void).cxx_destruct;	// IMP=0x00000000000141b7
@property(retain, nonatomic) AXMVisionFeature *primarySensitiveContentFeature; // @synthesize primarySensitiveContentFeature=_primarySensitiveContentFeature;
@property(nonatomic) _Bool shouldModifyCaptionForSensitiveContent; // @synthesize shouldModifyCaptionForSensitiveContent=_shouldModifyCaptionForSensitiveContent;
@property(nonatomic) _Bool isNSFW; // @synthesize isNSFW=_isNSFW;
@property(retain, nonatomic) AXMVisionFeature *brightnessFeature; // @synthesize brightnessFeature=_brightnessFeature;
@property(retain, nonatomic) AXMVisionFeature *blurFeature; // @synthesize blurFeature=_blurFeature;
- (void)_addIconClassInformationToDescription:(id)arg1;	// IMP=0x00000000000140a9
- (void)_addClassificationInformationToDescription:(id)arg1;	// IMP=0x0000000000013ee8
- (void)_addGenericTemplateForCaptionInformationToDescription:(id)arg1;	// IMP=0x00000000000137fa
- (id)_ignoredTagsForTags:(id)arg1;	// IMP=0x000000000001354d
- (id)_subsumedTagsForTags:(id)arg1;	// IMP=0x0000000000013326
- (id)_templateRulesForTag:(id)arg1;	// IMP=0x00000000000131d3
- (void)_addCaptionInformationToDescription:(id)arg1;	// IMP=0x0000000000012c5c
- (void)_addFaceInformationToDescription:(id)arg1;	// IMP=0x0000000000012bfa
- (void)_addDetailedFaceInformationToDescription:(id)arg1;	// IMP=0x00000000000122b5
- (void)_addPersonSummaryToDescription:(id)arg1;	// IMP=0x0000000000011de6
- (void)_addBlurInformationToDescription:(id)arg1;	// IMP=0x0000000000011c7f
- (void)_addBrightnessInformationToDescription:(id)arg1;	// IMP=0x0000000000011b31
- (void)_appendToDescription:(id)arg1 afterPauseType:(long long)arg2 withContents:(id)arg3;	// IMP=0x0000000000011a9f
- (void)_appendPauseType:(long long)arg1 toDescriptionIfNeeded:(id)arg2;	// IMP=0x00000000000119e3
- (id)_stringForPauseType:(long long)arg1;	// IMP=0x00000000000119c7
- (id)buildVisualDescription;	// IMP=0x00000000000119b5
- (id)buildSpeakableDescription;	// IMP=0x00000000000118ad
- (_Bool)_shouldReplaceCaptionWithGenericTemplate;	// IMP=0x0000000000011623
- (_Bool)_shouldSummarizeDetectedPeople;	// IMP=0x0000000000011616
- (_Bool)_usesTemplateForLowConfidenceAndExplicitFeatures;	// IMP=0x000000000001160b
- (void)addDetectedIconClasses:(id)arg1;	// IMP=0x000000000001158c
- (void)setDetectedCaption:(id)arg1;	// IMP=0x000000000001157b
- (void)addDetectedClassificationLocalizedValue:(id)arg1 forLabel:(id)arg2;	// IMP=0x00000000000114b9
- (void)addDetectedClassificationFeatures:(id)arg1;	// IMP=0x00000000000112f6
- (void)addDetectedFaces:(id)arg1;	// IMP=0x0000000000011277
- (id)_initWithOptions:(long long)arg1;	// IMP=0x000000000001123a

@end

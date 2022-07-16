//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, NSArray, NSNumber, NSString;

@interface INIntentCodableDescription <NSSecureCoding, NSCopying>
{
    _Bool _userConfirmationRequired;	// 8 = 0x8
    _Bool _foreground;	// 9 = 0x9
    _Bool _deprecated;	// 10 = 0xa
    _Bool _configurable;	// 11 = 0xb
    _Bool _eligibleForSuggestions;	// 12 = 0xc
    _Bool _eligibleForWidgets;	// 13 = 0xd
    NSString *_inputAttributeName;	// 16 = 0x10
    NSString *_keyAttributeName;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_titleLocID;	// 40 = 0x28
    NSString *_descriptiveText;	// 48 = 0x30
    NSString *_descriptiveTextLocID;	// 56 = 0x38
    NSString *_defaultImageName;	// 64 = 0x40
    long long _intentCategory;	// 72 = 0x48
    NSString *_verb;	// 80 = 0x50
    NSArray *_phrases;	// 88 = 0x58
    NSNumber *_versioningHash;	// 96 = 0x60
    NSArray *_entityVerbs;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000149237
+ (id)_intentClassNameWithDictionary:(id)arg1;	// IMP=0x000000000014909e
+ (id)__NameKey;	// IMP=0x00000000000a5c6f
+ (id)__Key;	// IMP=0x00000000000a5c7c
+ (id)__DescriptionKey;	// IMP=0x0000000000149329
+ (id)__SummaryKey;	// IMP=0x0000000000149280
+ (id)__NameKey;	// IMP=0x00000000001492b4
+ (id)__ClassNameKey;	// IMP=0x000000000014936a
+ (id)__ClassPrefixKey;	// IMP=0x000000000014935d
+ (id)__TitleKey;	// IMP=0x0000000000149273
+ (id)__TitleIDKey;	// IMP=0x0000000000149266
+ (id)__DescriptionIDKey;	// IMP=0x000000000014931c
+ (id)__VerbKey;	// IMP=0x000000000014924c
+ (id)__CategoryKey;	// IMP=0x0000000000149377
+ (id)__DefaultImageNameKey;	// IMP=0x0000000000149343
+ (id)__UserConfirmationRequiredKey;	// IMP=0x0000000000149259
+ (id)__ConfigurableKey;	// IMP=0x0000000000149350
+ (id)__DeprecatedKey;	// IMP=0x0000000000149336
+ (id)__IneligibleForSuggestionsKey;	// IMP=0x00000000001492db
+ (id)__EligibleForWidgetsKey;	// IMP=0x000000000014930f
+ (id)__InputKey;	// IMP=0x00000000001492ce
+ (id)__KeyParameterKey;	// IMP=0x00000000001492c1
+ (id)__VerbAssociationsKey;	// IMP=0x000000000014923f
+ (id)__EntityKey;	// IMP=0x0000000000149302
+ (id)__PhrasesKey;	// IMP=0x000000000014928d
+ (id)__ParameterKey;	// IMP=0x00000000001492a7
+ (id)__ParametersKey;	// IMP=0x000000000014929a
+ (id)__ForegroundKey;	// IMP=0x00000000001492f5
+ (id)__HashKey;	// IMP=0x00000000001492e8
- (void).cxx_destruct;	// IMP=0x0000000000148f43
@property(copy, nonatomic) NSArray *entityVerbs; // @synthesize entityVerbs=_entityVerbs;
@property(copy, nonatomic) NSNumber *versioningHash; // @synthesize versioningHash=_versioningHash;
@property(retain, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
@property(nonatomic, getter=isEligibleForWidgets) _Bool eligibleForWidgets; // @synthesize eligibleForWidgets=_eligibleForWidgets;
@property(nonatomic, getter=isEligibleForSuggestions) _Bool eligibleForSuggestions; // @synthesize eligibleForSuggestions=_eligibleForSuggestions;
@property(nonatomic, getter=isConfigurable) _Bool configurable; // @synthesize configurable=_configurable;
@property(nonatomic, getter=isDeprecated) _Bool deprecated; // @synthesize deprecated=_deprecated;
@property(nonatomic, getter=isForeground) _Bool foreground; // @synthesize foreground=_foreground;
@property(nonatomic) _Bool userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(nonatomic) long long intentCategory; // @synthesize intentCategory=_intentCategory;
@property(copy, nonatomic) NSString *defaultImageName; // @synthesize defaultImageName=_defaultImageName;
@property(copy, nonatomic) NSString *descriptiveTextLocID; // @synthesize descriptiveTextLocID=_descriptiveTextLocID;
@property(copy, nonatomic) NSString *descriptiveText; // @synthesize descriptiveText=_descriptiveText;
@property(copy, nonatomic) NSString *titleLocID; // @synthesize titleLocID=_titleLocID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName; // @synthesize _keyAttributeName;
@property(copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName; // @synthesize _inputAttributeName;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000148830
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001485e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000148566
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;	// IMP=0x0000000000148354
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;	// IMP=0x00000000001481dc
- (void)_updateWithIntentCodableDescription:(id)arg1;	// IMP=0x0000000000147ad0
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x0000000000146cbf
- (void)updateWithDictionary:(id)arg1;	// IMP=0x00000000001461ce
- (id)_attributesKey;	// IMP=0x00000000001461b4
- (id)_attributeKey;	// IMP=0x000000000014619a
- (id)_ignoredAttributeTags;	// IMP=0x000000000014617a
- (id)localizedDescriptiveTextWithLocalizer:(id)arg1;	// IMP=0x0000000000146070
@property(readonly, copy, nonatomic) NSString *localizedDescriptiveText;
- (id)localizedTitleWithLocalizer:(id)arg1;	// IMP=0x0000000000145f1a
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) INCodableAttribute *keyAttribute;
@property(readonly, nonatomic) INCodableAttribute *inputAttribute;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1;	// IMP=0x0000000000145a28
- (id)attributes;	// IMP=0x00000000001458a9

@end


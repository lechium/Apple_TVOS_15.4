//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterInput, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputSelectionOption
{
    AVAssetWriterInput *_input;	// 16 = 0x10
    NSString *_mediaType;	// 24 = 0x18
    NSDictionary *_outputSettings;	// 32 = 0x20
    struct opaqueCMFormatDescription *_sourceFormatHint;	// 40 = 0x28
    NSString *_languageCode;	// 48 = 0x30
    NSString *_extendedLanguageTag;	// 56 = 0x38
    NSArray *_metadata;	// 64 = 0x40
    NSDictionary *_trackReferences;	// 72 = 0x48
    _Bool _displaysNonForcedSubtitles;	// 80 = 0x50
    _Bool _enabled;	// 81 = 0x51
}

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;	// IMP=0x000000000009780b
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;	// IMP=0x00000000000977d5
@property(readonly, nonatomic) _Bool displaysNonForcedSubtitles; // @synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles;
@property(readonly, nonatomic) NSDictionary *trackReferences; // @synthesize trackReferences=_trackReferences;
@property(readonly, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSString *extendedLanguageTag; // @synthesize extendedLanguageTag=_extendedLanguageTag;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint; // @synthesize sourceFormatHint=_sourceFormatHint;
@property(readonly, nonatomic) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) AVAssetWriterInput *input; // @synthesize input=_input;
- (id)propertyList;	// IMP=0x0000000000098701
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;	// IMP=0x000000000009844e
- (id)metadataForFormat:(id)arg1;	// IMP=0x0000000000098247
- (id)availableMetadataFormats;	// IMP=0x000000000009804e
- (id)commonMetadata;	// IMP=0x0000000000097fe5
- (id)locale;	// IMP=0x0000000000097fa5
- (_Bool)_isDesignatedDefault;	// IMP=0x0000000000097f95
- (_Bool)isPlayable;	// IMP=0x0000000000097f30
- (_Bool)_isAuxiliaryContent;	// IMP=0x0000000000097edf
- (id)_taggedCharacteristics;	// IMP=0x0000000000097e27
- (id)mediaSubTypes;	// IMP=0x0000000000097cb4
- (id)_ancillaryDescription;	// IMP=0x0000000000097ca7
- (unsigned long long)hash;	// IMP=0x0000000000097bf8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000097b03
- (_Bool)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;	// IMP=0x0000000000097a96
- (void)dealloc;	// IMP=0x00000000000979e3
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;	// IMP=0x000000000009785a
- (id)initWithAssetWriterInput:(id)arg1;	// IMP=0x0000000000097846

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface NLTagger : NSObject
{
    NSArray *_schemes;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
    void *_tagger;	// 24 = 0x18
    NSMutableDictionary *_customModels;	// 32 = 0x20
    NSMutableDictionary *_customModelDictionaries;	// 40 = 0x28
    NSMutableDictionary *_classifierCaches;	// 48 = 0x30
    NSMutableDictionary *_sequenceCaches;	// 56 = 0x38
    NSMutableDictionary *_customGazetteers;	// 64 = 0x40
    NSMutableDictionary *_customGazetteerDictionaries;	// 72 = 0x48
}

+ (void)requestAssetsForLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000183c5
+ (void)registerForAssetNotifications;	// IMP=0x000000000001470e
+ (id)availableTagSchemesForLanguage:(id)arg1;	// IMP=0x000000000001458e
+ (id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2;	// IMP=0x0000000000014538
- (void).cxx_destruct;	// IMP=0x0000000000018754
- (id)gazetteersForTagScheme:(id)arg1;	// IMP=0x0000000000018191
- (void)setGazetteers:(id)arg1 forTagScheme:(id)arg2;	// IMP=0x0000000000017e9e
- (id)modelsForTagScheme:(id)arg1;	// IMP=0x0000000000017e57
- (void)setModels:(id)arg1 forTagScheme:(id)arg2;	// IMP=0x0000000000017b11
- (void)stringEditedInRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;	// IMP=0x0000000000017ac5
- (void)setOrthography:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000017621
- (void)setLanguage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000175b1
@property(readonly, copy, nonatomic) NSString *dominantLanguage;
- (struct _NSRange)tokenRangeForRange:(struct _NSRange)arg1 unit:(long long)arg2;	// IMP=0x0000000000017489
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2;	// IMP=0x0000000000017427
- (id)tagHypothesesAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 maximumCount:(unsigned long long)arg4 tokenRange:(struct _NSRange *)arg5;	// IMP=0x0000000000016f3d
- (id)tagsInRange:(struct _NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id *)arg5;	// IMP=0x0000000000016cf9
- (id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(struct _NSRange *)arg4;	// IMP=0x0000000000016b2b
- (void)enumerateTagsInRange:(struct _NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000016648
- (id)_customHypothesesAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 maximumCount:(unsigned long long)arg4 options:(unsigned long long)arg5 modelDictionary:(id)arg6 gazetteerDictionary:(id)arg7;	// IMP=0x00000000000163d5
- (id)_customHypothesesAtIndex:(unsigned long long)arg1 fromHypothesisDictionary:(id)arg2;	// IMP=0x000000000001627d
- (id)_customHypothesisDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4 maximumCount:(unsigned long long)arg5;	// IMP=0x0000000000015b08
- (id)_customTagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 modelDictionary:(id)arg5 gazetteerDictionary:(id)arg6;	// IMP=0x000000000001569e
- (id)_customTagAtIndex:(unsigned long long)arg1 fromTagDictionary:(id)arg2;	// IMP=0x0000000000015555
- (id)_customTagDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4;	// IMP=0x0000000000014ec5
- (id)_customGazetteerAtIndex:(unsigned long long)arg1 unit:(long long)arg2 gazetteerDictionary:(id)arg3;	// IMP=0x0000000000014df3
- (id)_customModelAtIndex:(unsigned long long)arg1 unit:(long long)arg2 modelDictionary:(id)arg3;	// IMP=0x0000000000014d2f
- (struct _NSRange)sentenceRangeForRange:(struct _NSRange)arg1;	// IMP=0x0000000000014c4f
@property(retain, nonatomic) NSString *string;
- (id)_tagSchemeForScheme:(id)arg1;	// IMP=0x0000000000014a68
@property(readonly, copy, nonatomic) NSArray *tagSchemes;
- (id)description;	// IMP=0x0000000000014986
- (void)dealloc;	// IMP=0x0000000000014947
- (id)initWithTagSchemes:(id)arg1;	// IMP=0x00000000000147e0

@end


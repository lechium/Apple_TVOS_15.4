//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying, NSSecureCoding>
{
    CHDrawing *_inputDrawing;	// 8 = 0x8
    NSArray *_inputDrawingCutPoints;	// 16 = 0x10
    NSDictionary *_languageFitnessByLocale;	// 24 = 0x18
    NSArray *_orderedLocales;	// 32 = 0x20
    NSArray *_inputStrokeIdentifiers;	// 40 = 0x28
    NSDictionary *_recognitionResultsByLocale;	// 48 = 0x30
    NSDictionary *_errorsByLocale;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008ac20
+ (id)filteredLocalesFromGroup:(id)arg1 results:(id)arg2 withCharacterDetectionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000008d5f0
+ (id)filteredResultsByLocale:(id)arg1 orderedLocales:(id)arg2 usingLanguageFitness:(id)arg3 outSortedLocales:(id *)arg4;	// IMP=0x000000000008bfe0
+ (long long)indexOfFirstLocaleWithLanguage:(id)arg1 orderedLocales:(id)arg2;	// IMP=0x000000000008bec0
+ (id)sortedLocales:(id)arg1 usingLanguageFitness:(id)arg2 useCombinedScore:(_Bool)arg3;	// IMP=0x000000000008b850
+ (id)sortedLanguageGroups:(id)arg1 usingLanguageFitness:(id)arg2;	// IMP=0x000000000008b300
- (void).cxx_destruct;	// IMP=0x000000000008af70
@property(readonly, copy, nonatomic) NSDictionary *errorsByLocale; // @synthesize errorsByLocale=_errorsByLocale;
@property(readonly, copy, nonatomic) NSDictionary *recognitionResultsByLocale; // @synthesize recognitionResultsByLocale=_recognitionResultsByLocale;
@property(readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers; // @synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008aec0
- (_Bool)isEqualToStrokeGroupRecognitionResult:(id)arg1;	// IMP=0x000000000008ac30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008a1f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000089ed0
- (id)preferredLocale;	// IMP=0x00000000000898b0
- (CDStruct_c3b9c2ee)languageFitnessForLocale:(id)arg1;	// IMP=0x0000000000089750
- (id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double *)arg2 doesContainUnfilteredMultiLocaleResults:(_Bool *)arg3;	// IMP=0x0000000000089160
- (id)localesSortedByCombinedLanguageFitness:(id)arg1;	// IMP=0x00000000000890b0
- (id)localesSortedByRawLanguageFitness:(id)arg1;	// IMP=0x0000000000089000
- (id)description;	// IMP=0x0000000000088f30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000088f20
- (id)initWithOrderedLocales:(id)arg1 resultsByLocale:(id)arg2 errorsByLocale:(id)arg3 languageFitnessByLocale:(id)arg4 inputStrokeIdentifiers:(id)arg5;	// IMP=0x0000000000088ef0
- (id)init;	// IMP=0x0000000000088e40
@property(readonly, copy, nonatomic) NSDictionary *languageFitnessByLocale;
@property(readonly, copy, nonatomic) NSArray *inputDrawingCutPoints;
@property(readonly, nonatomic) CHDrawing *inputDrawing;
- (id)initWithOrderedLocales:(id)arg1 resultsByLocale:(id)arg2 errorsByLocale:(id)arg3 languageFitnessByLocale:(id)arg4 inputStrokeIdentifiers:(id)arg5 inputDrawing:(id)arg6 inputDrawingCutPoints:(id)arg7;	// IMP=0x000000000008afd0

@end


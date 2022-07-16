//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, PGFeatureTransformersForFeatureExtractors, PGManager, PHACoreDuetDatasetStorage, PHPhotoLibrary;

@interface PHADatasetBuilder : NSObject
{
    long long _policy;	// 8 = 0x8
    long long _labelPolicy;	// 16 = 0x10
    long long _fingerprintVersion;	// 24 = 0x18
    NSString *_inputName;	// 32 = 0x20
    NSString *_labelName;	// 40 = 0x28
    NSString *_positivesDatasetName;	// 48 = 0x30
    NSString *_positivesSubsetName;	// 56 = 0x38
    NSString *_negativesDatasetName;	// 64 = 0x40
    NSString *_negativesSubsetName;	// 72 = 0x48
    NSNumber *_totalNumberOfSamples;	// 80 = 0x50
    NSNumber *_oversamplingRate;	// 88 = 0x58
    PHPhotoLibrary *_photoLibrary;	// 96 = 0x60
    NSArray *_augmenters;	// 104 = 0x68
    NSDictionary *_filtersByDatasetName;	// 112 = 0x70
    NSArray *_positiveLocalIdentifiers;	// 120 = 0x78
    NSArray *_negativeLocalIdentifiers;	// 128 = 0x80
    PHACoreDuetDatasetStorage *_datasetStore;	// 136 = 0x88
    PGManager *_graphManager;	// 144 = 0x90
    PGFeatureTransformersForFeatureExtractors *_transformersForFeatureExtractors;	// 152 = 0x98
}

+ (id)labelVectorsForLabelPolicy:(long long)arg1;	// IMP=0x000000000005c3e1
+ (long long)labelPolicyForLabelPolicyName:(id)arg1;	// IMP=0x000000000005c36f
+ (long long)datasetBuilderPolicyForPolicyName:(id)arg1;	// IMP=0x000000000005c2d7
+ (id)_randomIndicesWithUpperBound:(unsigned long long)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000005c1fe
- (void).cxx_destruct;	// IMP=0x000000000005c0dc
@property(readonly, nonatomic) PGFeatureTransformersForFeatureExtractors *transformersForFeatureExtractors; // @synthesize transformersForFeatureExtractors=_transformersForFeatureExtractors;
@property(retain, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property(retain, nonatomic) PHACoreDuetDatasetStorage *datasetStore; // @synthesize datasetStore=_datasetStore;
@property(retain, nonatomic) NSArray *negativeLocalIdentifiers; // @synthesize negativeLocalIdentifiers=_negativeLocalIdentifiers;
@property(retain, nonatomic) NSArray *positiveLocalIdentifiers; // @synthesize positiveLocalIdentifiers=_positiveLocalIdentifiers;
@property(readonly, nonatomic) NSDictionary *filtersByDatasetName; // @synthesize filtersByDatasetName=_filtersByDatasetName;
@property(readonly, nonatomic) NSArray *augmenters; // @synthesize augmenters=_augmenters;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSNumber *oversamplingRate; // @synthesize oversamplingRate=_oversamplingRate;
@property(readonly, nonatomic) NSNumber *totalNumberOfSamples; // @synthesize totalNumberOfSamples=_totalNumberOfSamples;
@property(readonly, nonatomic) NSString *negativesSubsetName; // @synthesize negativesSubsetName=_negativesSubsetName;
@property(readonly, nonatomic) NSString *negativesDatasetName; // @synthesize negativesDatasetName=_negativesDatasetName;
@property(readonly, nonatomic) NSString *positivesSubsetName; // @synthesize positivesSubsetName=_positivesSubsetName;
@property(readonly, nonatomic) NSString *positivesDatasetName; // @synthesize positivesDatasetName=_positivesDatasetName;
@property(readonly, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(readonly, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
@property(readonly, nonatomic) long long fingerprintVersion; // @synthesize fingerprintVersion=_fingerprintVersion;
@property(readonly, nonatomic) long long labelPolicy; // @synthesize labelPolicy=_labelPolicy;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
- (id)_localIdentifiersToExcludeForLabel:(id)arg1;	// IMP=0x000000000005bec1
- (id)_currentFetchOptionPropertySet;	// IMP=0x000000000005bce6
- (id)_assetPropertiesPredicateForKeywordFromFeatureExtractorFilters:(id)arg1;	// IMP=0x000000000005ba8b
- (_Bool)_isFeatureNameForAssetPredicateWithFeatureName:(id)arg1;	// IMP=0x000000000005ba2a
- (_Bool)_generateError:(id *)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;	// IMP=0x000000000005b93d
- (id)_performAugmentationsOnLabeledSamples:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005b5b9
- (id)_fingerprintsForObjects:(id)arg1 fingerprintVersion:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000005b3c9
- (id)_fetchObjectsForFingerprintVersion:(long long)arg1 options:(id)arg2 localIdentifiers:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005b1bc
- (id)_fetchObjectsForFingerprintVersion:(long long)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005b1a0
- (id)_localIdentifiersForCoreDuetDatasetName:(id)arg1 subsetName:(id)arg2;	// IMP=0x000000000005af7c
- (long long)_validatePHObject:(id)arg1 withFeatureValidator:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005ade6
- (id)_filterDataSamples:(id)arg1 filters:(id)arg2 numberOfSamples:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005a99f
- (id)_randomSamplesOfCount:(unsigned long long)arg1 filterPredicateForKeyword:(id)arg2 labelName:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005a4e4
- (id)_samplesOfCount:(unsigned long long)arg1 fromLocalIdentifiers:(id)arg2 filterPredicateForKeyword:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005a208
- (id)_datasetForLocalIdentifiers:(id)arg1 positiveFingerprints:(id)arg2 negativeFingerprints:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000059d96
- (id)_mergeLocalIdentifiersFromPositiveLocalIdentifiers:(id)arg1 negativeLocalIdentifiers:(id)arg2 numberOfPositiveSamples:(id)arg3 numberOfNegativeSamples:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000597c1
- (id)_fingerprintsForDatasetName:(id)arg1 localIdentifiers:(id)arg2 labelName:(id)arg3 numberOfSamples:(id)arg4 filters:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000592bc
- (unsigned long long)_minAvailableNumberOfSamples;	// IMP=0x00000000000591b8
- (id)_numberOfSamplesPerClassWithError:(id *)arg1;	// IMP=0x0000000000058bdf
- (id)datasetWithError:(id *)arg1;	// IMP=0x000000000005883e
- (id)initWithFingerprintVersion:(long long)arg1 policy:(long long)arg2 labelPolicy:(long long)arg3 inputName:(id)arg4 labelName:(id)arg5 positivesDatasetName:(id)arg6 positivesSubsetName:(id)arg7 negativesDatasetName:(id)arg8 negativesSubsetName:(id)arg9 totalNumberOfSamples:(id)arg10 oversamplingRate:(id)arg11 photoLibrary:(id)arg12 graphManager:(id)arg13 transformersForFeatureExtractors:(id)arg14 augmenters:(id)arg15 filtersByDatasetName:(id)arg16;	// IMP=0x0000000000058485

@end


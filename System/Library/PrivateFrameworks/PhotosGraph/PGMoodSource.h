//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PGEnrichedMemory, PGMoodGeneratorOptions, PGMoodVector, PHAssetCollection, PHPhotoLibrary;

@interface PGMoodSource : NSObject
{
    PHAssetCollection *_assetCollection;	// 8 = 0x8
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    PGMoodGeneratorOptions *_options;	// 24 = 0x18
    PGMoodVector *_positiveVector;	// 32 = 0x20
    PGMoodVector *_negativeVector;	// 40 = 0x28
    NSDictionary *_moodSourceDictionary;	// 48 = 0x30
    PGEnrichedMemory *_enrichedMemory;	// 56 = 0x38
}

+ (id)_plistName;	// IMP=0x00000000003a8f7d
- (void).cxx_destruct;	// IMP=0x00000000003a8eaa
@property(readonly) PGEnrichedMemory *enrichedMemory; // @synthesize enrichedMemory=_enrichedMemory;
@property(retain) PGMoodVector *negativeVector; // @synthesize negativeVector=_negativeVector;
@property(retain) PGMoodVector *positiveVector; // @synthesize positiveVector=_positiveVector;
@property(readonly) PGMoodGeneratorOptions *options; // @synthesize options=_options;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly) NSDictionary *moodSourceDictionary; // @synthesize moodSourceDictionary=_moodSourceDictionary;
- (unsigned long long)_sourceInputCount;	// IMP=0x00000000003a8cac
- (void)_combineMoodVectorsWithGraph:(id)arg1;	// IMP=0x00000000003a8966
- (id)_moodVectorsWithGraph:(id)arg1;	// IMP=0x00000000003a8792
- (id)_moodVectorForMoodIdentifier:(id)arg1;	// IMP=0x00000000003a86cc
- (id)_plistMoodIdentifiersWithGraph:(id)arg1;	// IMP=0x00000000003a86bf
- (id)negativeVectorWithGraph:(id)arg1;	// IMP=0x00000000003a868e
- (id)positiveVectorWithGraph:(id)arg1;	// IMP=0x00000000003a865d
- (double)weight;	// IMP=0x00000000003a8654
- (id)initWithEnrichedMemory:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;	// IMP=0x00000000003a859d
- (id)initWithAssetCollection:(id)arg1 photoLibrary:(id)arg2 options:(id)arg3;	// IMP=0x00000000003a84e6

@end

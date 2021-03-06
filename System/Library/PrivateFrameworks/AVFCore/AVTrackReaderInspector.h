//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDispatchOnce, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVTrackReaderInspector
{
    struct OpaqueFigFormatReader *_formatReader;	// 32 = 0x20
    struct OpaqueFigTrackReader *_trackReader;	// 40 = 0x28
    AVDispatchOnce *_copySampleCursorServiceOnce;	// 48 = 0x30
    struct OpaqueFigSampleCursorService *_figSampleCursorService;	// 56 = 0x38
    _Bool _sampleCursorTimeAccuracyIsExact;	// 64 = 0x40
    int _trackID;	// 68 = 0x44
    unsigned int _mediaType;	// 72 = 0x48
    AVWeakReference *_weakReferenceToAsset;	// 80 = 0x50
}

- (unsigned long long)hash;	// IMP=0x00000000000e78cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e7848
- (_Bool)isExcludedFromAutoselectionInTrackGroup;	// IMP=0x00000000000e7826
- (id)_trackReferences;	// IMP=0x00000000000e757d
- (long long)provisionalAlternateGroupID;	// IMP=0x00000000000e755c
- (long long)defaultAlternateGroupID;	// IMP=0x00000000000e753b
- (long long)alternateGroupID;	// IMP=0x00000000000e751a
- (id)metadataForFormat:(id)arg1;	// IMP=0x00000000000e735e
- (id)availableMetadataFormats;	// IMP=0x00000000000e718d
- (id)commonMetadata;	// IMP=0x00000000000e6fc4
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;	// IMP=0x00000000000e6f15
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000e6c89
- (id)segments;	// IMP=0x00000000000e6923
- (CDStruct_1b6d18a9)minSampleDuration;	// IMP=0x00000000000e68b8
- (float)nominalFrameRate;	// IMP=0x00000000000e689c
- (id)loudnessInfo;	// IMP=0x00000000000e6819
- (float)preferredVolume;	// IMP=0x00000000000e678e
- (long long)layer;	// IMP=0x00000000000e676d
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000e672c
- (struct CGSize)dimensions;	// IMP=0x00000000000e6710
- (struct CGSize)naturalSize;	// IMP=0x00000000000e66a5
- (id)extendedLanguageTag;	// IMP=0x00000000000e6689
- (id)mediaCharacteristics;	// IMP=0x00000000000e663d
- (id)languageCode;	// IMP=0x00000000000e6621
- (float)peakDataRate;	// IMP=0x00000000000e65fc
- (float)estimatedDataRate;	// IMP=0x00000000000e65d7
- (int)naturalTimeScale;	// IMP=0x00000000000e65bb
- (_Bool)hasAudioSampleDependencies;	// IMP=0x00000000000e6539
- (_Bool)requiresFrameReordering;	// IMP=0x00000000000e6517
- (CDStruct_e83c9415)timeRange;	// IMP=0x00000000000e629e
- (long long)totalSampleDataLength;	// IMP=0x00000000000e6282
- (int)decodabilityValidationResult;	// IMP=0x00000000000e6216
- (_Bool)isDecodable;	// IMP=0x00000000000e61fe
- (int)playabilityValidationResult;	// IMP=0x00000000000e6192
- (_Bool)isPlayable;	// IMP=0x00000000000e617a
- (_Bool)isSelfContained;	// IMP=0x00000000000e6158
- (_Bool)isEnabled;	// IMP=0x00000000000e6136
- (id)formatDescriptions;	// IMP=0x00000000000e611a
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000e60a1
- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(_Bool *)arg1;	// IMP=0x00000000000e5f48
- (struct OpaqueFigTrackReader *)_figTrackReader;	// IMP=0x00000000000e5f37
- (id)mediaType;	// IMP=0x00000000000e5ee5
- (unsigned int)_figMediaType;	// IMP=0x00000000000e5ed5
- (int)trackID;	// IMP=0x00000000000e5ec5
- (id)asset;	// IMP=0x00000000000e5ea8
- (void)dealloc;	// IMP=0x00000000000e5e16
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x00000000000e5c92

@end


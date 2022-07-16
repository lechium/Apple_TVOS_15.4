//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVAsynchronousKeyValueLoading-Protocol.h>
#import <AVFCore/NSCopying-Protocol.h>

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetTrackInternal *_track;	// 8 = 0x8
}

+ (id)keyPathsForValuesAffectingTimeRange;	// IMP=0x0000000000030773
+ (_Bool)expectsPropertyRevisedNotifications;	// IMP=0x0000000000030338
+ (id)mediaCharacteristicsForMediaTypes;	// IMP=0x000000000002ebd4
- (unsigned long long)hash;	// IMP=0x0000000000030759
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000306ec
- (id)makeSampleCursorAtLastSampleInDecodeOrder;	// IMP=0x00000000000306d2
- (id)makeSampleCursorAtFirstSampleInDecodeOrder;	// IMP=0x00000000000306b8
- (id)makeSampleCursorWithPresentationTimeStamp:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000003069e
- (_Bool)canProvideSampleCursors;	// IMP=0x0000000000030684
- (void)loadAssociatedTracksOfType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000305e1
- (id)associatedTracksOfType:(id)arg1;	// IMP=0x00000000000303d3
- (id)availableTrackAssociationTypes;	// IMP=0x00000000000303a8
- (_Bool)isAudibleBooksContentAuthorized;	// IMP=0x000000000003038e
- (_Bool)hasAudibleBooksContent;	// IMP=0x0000000000030374
- (_Bool)hasProtectedContent;	// IMP=0x000000000003035a
- (id)_trackReferences;	// IMP=0x0000000000030340
- (id)_pairedForcedOnlySubtitlesTrack;	// IMP=0x000000000003031f
- (id)_followingTrackAmongTracks:(id)arg1;	// IMP=0x00000000000301ba
- (id)_fallbackTrack;	// IMP=0x00000000000301a1
- (id)_firstAssociatedTrackWithAssociationType:(id)arg1;	// IMP=0x0000000000030157
- (_Bool)isExcludedFromAutoselectionInTrackGroup;	// IMP=0x000000000003013d
- (long long)provisionalAlternateGroupID;	// IMP=0x0000000000030123
- (long long)defaultAlternateGroupID;	// IMP=0x0000000000030109
- (long long)alternateGroupID;	// IMP=0x00000000000300ef
- (id)metadata;	// IMP=0x000000000002ff77
- (void)loadMetadataForFormat:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fed4
- (id)metadataForFormat:(id)arg1;	// IMP=0x000000000002fdfe
- (id)availableMetadataFormats;	// IMP=0x000000000002fd82
- (id)commonMetadata;	// IMP=0x000000000002fd68
- (void)loadSamplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fc66
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000002fc10
- (id)segmentsAsPresented;	// IMP=0x000000000002fbf6
- (CDStruct_e83c9415)gaplessSourceTimeRange;	// IMP=0x000000000002fbb7
- (_Bool)segmentsExcludeAudioPrimingAndRemainderDurations;	// IMP=0x000000000002fb9d
- (void)loadSegmentForTrackTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fade
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000002fac4
- (id)segments;	// IMP=0x000000000002faaa
- (CDStruct_1b6d18a9)minFrameDuration;	// IMP=0x000000000002f9e0
- (float)nominalFrameRate;	// IMP=0x000000000002f9c6
- (id)loudnessInfo;	// IMP=0x000000000002f9ac
- (float)preferredVolume;	// IMP=0x000000000002f992
- (long long)layer;	// IMP=0x000000000002f978
- (struct CGAffineTransform)preferredTransform;	// IMP=0x000000000002f939
- (struct CGSize)dimensions;	// IMP=0x000000000002f91f
- (struct CGSize)naturalSize;	// IMP=0x000000000002f905
- (id)locale;	// IMP=0x000000000002f8eb
- (id)extendedLanguageTag;	// IMP=0x000000000002f8d1
- (id)languageCode;	// IMP=0x000000000002f8b7
- (float)peakDataRate;	// IMP=0x000000000002f89d
- (float)estimatedDataRate;	// IMP=0x000000000002f883
- (int)naturalTimeScale;	// IMP=0x000000000002f869
- (_Bool)hasAudioSampleDependencies;	// IMP=0x000000000002f84f
- (_Bool)requiresFrameReordering;	// IMP=0x000000000002f835
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;	// IMP=0x000000000002f7f6
- (CDStruct_e83c9415)mediaDecodeTimeRange;	// IMP=0x000000000002f7b7
- (CDStruct_e83c9415)mediaPresentationTimeRange;	// IMP=0x000000000002f778
- (CDStruct_e83c9415)timeRange;	// IMP=0x000000000002f739
- (id)mediaCharacteristics;	// IMP=0x000000000002f71f
- (_Bool)hasMediaCharacteristics:(id)arg1;	// IMP=0x000000000002f5fc
- (_Bool)hasMediaCharacteristic:(id)arg1;	// IMP=0x000000000002f5c3
- (_Bool)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg1 flagsMask:(unsigned int)arg2;	// IMP=0x000000000002f500
- (long long)totalSampleDataLength;	// IMP=0x000000000002f4e6
- (_Bool)isSelfContained;	// IMP=0x000000000002f4cc
- (_Bool)isEnabled;	// IMP=0x000000000002f4b2
- (int)playabilityValidationResult;	// IMP=0x000000000002f498
- (_Bool)isDecodable;	// IMP=0x000000000002f47e
- (_Bool)isPlayable;	// IMP=0x000000000002f464
- (id)formatDescriptions;	// IMP=0x000000000002f44a
- (id)mediaType;	// IMP=0x000000000002f430
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f416
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002f3fc
- (long long)statusOfValueForKey:(id)arg1;	// IMP=0x000000000002f3e8
@property(readonly, nonatomic) int trackID;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;	// IMP=0x000000000002f3b4
- (struct OpaqueFigTrackReader *)_figTrackReader;	// IMP=0x000000000002f39a
- (id)_assetTrackInspector;	// IMP=0x000000000002f38c
@property(readonly, nonatomic) __weak AVAsset *asset;
- (id)_weakReference;	// IMP=0x000000000002f364
- (id)description;	// IMP=0x000000000002f2e6
- (void)dealloc;	// IMP=0x000000000002f262
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002f257
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;	// IMP=0x000000000002f240
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;	// IMP=0x000000000002f227
- (id)init;	// IMP=0x000000000002f20a
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x000000000002f0fa
- (void)_stopListeningToFigAssetTrackNotifications;	// IMP=0x000000000002f047
- (void)_startListeningToFigAssetTrackNotifications;	// IMP=0x000000000002edd9
- (_Bool)_firstFormatDescriptionIsLPCM;	// IMP=0x0000000000030c14
- (_Bool)_hasMultipleDistinctFormatDescriptions;	// IMP=0x0000000000030b5c
- (_Bool)_hasEmptyEdits;	// IMP=0x00000000000309f9
- (_Bool)_hasScaledEdits;	// IMP=0x00000000000307c7
- (_Bool)_hasMultipleEdits;	// IMP=0x0000000000030797

@end


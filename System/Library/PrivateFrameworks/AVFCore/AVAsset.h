//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVAsynchronousKeyValueLoading-Protocol.h>
#import <AVFCore/NSCopying-Protocol.h>

@class AVAssetInternal, AVDisplayCriteria, NSArray;
@protocol AVLoggingIdentifier;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetInternal *_asset;	// 8 = 0x8
}

+ (_Bool)supportsPlayerItems;	// IMP=0x0000000000022e1d
+ (_Bool)expectsPropertyRevisedNotifications;	// IMP=0x0000000000022e15
+ (_Bool)_assetCreationOptionsRequiresInProcessOperation:(id)arg1;	// IMP=0x0000000000022b6c
+ (id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;	// IMP=0x00000000000200f3
+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2 trackIDs:(id)arg3 dynamicBehavior:(_Bool)arg4;	// IMP=0x000000000002002f
+ (id)assetWithURL:(id)arg1;	// IMP=0x000000000001ffb5
+ (id)assetProxyWithPropertyList:(id)arg1;	// IMP=0x000000000001fa97
+ (id)makeAssetLoggingIdentifier;	// IMP=0x000000000002b727
+ (id)inspectionOnlyAssetWithStreamDataParser:(id)arg1 tracks:(id)arg2;	// IMP=0x00000000000eecd8
+ (id)inspectionOnlyAssetWithFigAsset:(struct OpaqueFigAsset *)arg1;	// IMP=0x00000000000eeca2
- (id)_assetAnalysisMessages;	// IMP=0x0000000000022dea
- (_Bool)supportsAnalysisReporting;	// IMP=0x0000000000022dbf
- (void)_handleURLRequest:(id)arg1;	// IMP=0x0000000000022db9
- (_Bool)_hasResourceLoaderDelegate;	// IMP=0x0000000000022db1
- (CDStruct_1b6d18a9)overallDurationHint;	// IMP=0x0000000000022d64
- (_Bool)containsFragments;	// IMP=0x0000000000022d39
- (_Bool)canContainFragments;	// IMP=0x0000000000022d0e
- (_Bool)isCompatibleWithAirPlayVideo;	// IMP=0x0000000000022ce3
- (_Bool)isCompatibleWithSavedPhotosAlbum;	// IMP=0x0000000000022cb8
- (_Bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;	// IMP=0x0000000000022c87
- (_Bool)isComposable;	// IMP=0x0000000000022c5c
- (_Bool)isReadable;	// IMP=0x0000000000022c31
- (_Bool)isExportable;	// IMP=0x0000000000022c06
- (_Bool)isPlayable;	// IMP=0x0000000000022bdb
- (_Bool)hasProtectedContent;	// IMP=0x0000000000022bb0
- (_Bool)_requiresInProcessOperation;	// IMP=0x0000000000022ba8
- (void)findCompatibleTrackForCompositionTrack:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022ac9
- (id)compatibleTrackForCompositionTrack:(id)arg1;	// IMP=0x0000000000022a64
- (id)tracksWithMediaCharacteristics:(id)arg1;	// IMP=0x0000000000022a04
- (void)loadTracksWithMediaCharacteristic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022961
- (id)tracksWithMediaCharacteristic:(id)arg1;	// IMP=0x0000000000022929
- (void)loadTracksWithMediaType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022886
- (id)tracksWithMediaType:(id)arg1;	// IMP=0x0000000000022826
- (void)loadTrackWithTrackID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022785
- (id)trackWithTrackID:(int)arg1;	// IMP=0x000000000002264e
- (void)_tracksDidChange;	// IMP=0x0000000000022648
- (id)tracks;	// IMP=0x0000000000022609
- (id)_tracksWithClass:(Class)arg1;	// IMP=0x00000000000224a4
- (id)_ID3Metadata;	// IMP=0x0000000000022472
- (id)metadata;	// IMP=0x00000000000222fa
- (void)loadMetadataForFormat:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022257
- (id)metadataForFormat:(id)arg1;	// IMP=0x000000000002217f
- (id)availableMetadataFormats;	// IMP=0x00000000000220da
- (id)commonMetadata;	// IMP=0x00000000000220af
- (id)lyrics;	// IMP=0x0000000000022084
- (id)creationDate;	// IMP=0x0000000000022059
- (id)trackReferences;	// IMP=0x000000000002202e
- (id)allMediaSelections;	// IMP=0x0000000000021d0e
- (id)preferredMediaSelection;	// IMP=0x0000000000021cd8
- (id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id *)arg2;	// IMP=0x00000000000219b1
- (void)loadMediaSelectionGroupForMediaCharacteristic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002188b
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;	// IMP=0x000000000002159c
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;	// IMP=0x0000000000021201
- (id)_mediaSelectionGroupDictionaries;	// IMP=0x00000000000211b2
- (id)alternateTrackGroups;	// IMP=0x0000000000021187
- (id)subtitleAlternatesTrackGroup;	// IMP=0x00000000000210f3
- (id)audioAlternatesTrackGroup;	// IMP=0x000000000002107b
- (id)_firstTrackGroupWithMediaTypes:(id)arg1;	// IMP=0x0000000000020e6d
- (id)trackGroups;	// IMP=0x0000000000020cc8
- (unsigned long long)referenceRestrictions;	// IMP=0x0000000000020cc0
- (_Bool)providesPreciseDurationAndTiming;	// IMP=0x0000000000020c95
- (int)naturalTimeScale;	// IMP=0x0000000000020c6a
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minimumTimeOffsetFromLive;
@property(readonly, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
- (id)availableVideoDynamicRanges;	// IMP=0x0000000000020b43
- (struct CGSize)maximumVideoResolution;	// IMP=0x0000000000020b18
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
- (float)preferredSoundCheckVolumeNormalization;	// IMP=0x0000000000020aa0
@property(readonly, nonatomic) float preferredVolume;
@property(readonly, nonatomic) float preferredRate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;	// IMP=0x00000000000209a0
- (void)_setFragmentMindingInterval:(double)arg1;	// IMP=0x0000000000020943
- (_Bool)_needsLegacyChangeNotifications;	// IMP=0x000000000002093b
- (_Bool)_mindsFragments;	// IMP=0x0000000000020933
- (double)_fragmentMindingInterval;	// IMP=0x00000000000208e9
- (_Bool)_isStreaming;	// IMP=0x00000000000208be
- (struct OpaqueFigMutableComposition *)_mutableComposition;	// IMP=0x00000000000208b6
- (id)_absoluteURL;	// IMP=0x00000000000208ae
- (Class)_classForTrackInspectors;	// IMP=0x0000000000020880
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x0000000000020855
- (struct OpaqueFigFormatReader *)_formatReader;	// IMP=0x0000000000020827
- (struct OpaqueFigAsset *)_figAsset;	// IMP=0x00000000000207fc
- (void)cancelLoading;	// IMP=0x00000000000207d1
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002078c
- (void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2;	// IMP=0x0000000000020690
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020650
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000020610
- (long long)statusOfValueForKey:(id)arg1;	// IMP=0x00000000000205fc
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x000000000002056b
- (unsigned long long)hash;	// IMP=0x0000000000020540
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000204cc
- (id)_comparisonToken;	// IMP=0x0000000000020478
- (id)_assetInspectorLoader;	// IMP=0x000000000002044a
- (id)_assetInspector;	// IMP=0x000000000002041c
- (id)_weakReference;	// IMP=0x000000000002040e
- (id)_nameForLogging;	// IMP=0x00000000000203c9
- (void)_setLoggingIdentifier:(id)arg1;	// IMP=0x0000000000020398
- (void)dealloc;	// IMP=0x0000000000020303
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000202f8
- (id)init;	// IMP=0x0000000000020214
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;	// IMP=0x0000000000020206
- (id)initWithURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000020021
@property(readonly, nonatomic) _Bool isProxy;
- (id)makePropertyListForProxyWithOptions:(id)arg1;	// IMP=0x000000000001fadb
@property(readonly, nonatomic) id propertyListForProxy;
- (void)loadChapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000252d7
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;	// IMP=0x0000000000025255
- (void)loadChapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000251b2
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;	// IMP=0x0000000000025161
- (id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2;	// IMP=0x0000000000024ee1
- (id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2;	// IMP=0x0000000000024913
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3;	// IMP=0x0000000000023d99
- (id)_chapterDataTypeForMediaSubType:(int)arg1;	// IMP=0x0000000000023d44
- (unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4;	// IMP=0x0000000000023aa4
@property(readonly) NSArray *availableChapterLocales;
- (id)_availableCanonicalizedChapterLanguages;	// IMP=0x0000000000023a5a
- (id)availableChapterLanguages;	// IMP=0x0000000000023a35
- (void)_loadChapterInfo;	// IMP=0x0000000000022e25
- (id)_exportURL;	// IMP=0x0000000000025813
- (_Bool)_containsAtLeastOnePlayableVideoTrack;	// IMP=0x0000000000025636
- (_Bool)_containsAtLeastOnePlayableAudioTrack;	// IMP=0x0000000000025513
- (id)_chapterTracks;	// IMP=0x0000000000025425
@property(readonly, nonatomic) long long moovAtomSize;
@property(readonly, nonatomic) NSArray *fragments;
@property(readonly, retain, nonatomic) id <AVLoggingIdentifier> loggingIdentifier;
- (void)findUnusedTrackIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b72d4
- (int)unusedTrackID;	// IMP=0x00000000000b7188

@end


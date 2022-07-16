//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/AVContentKeyRecipient-Protocol.h>

@class AVAssetResourceLoader, AVURLAssetInternal, NSArray, NSString, NSURL;

@interface AVURLAsset <AVContentKeyRecipient>
{
    AVURLAssetInternal *_URLAsset;	// 16 = 0x10
}

+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 assetLoggingIdentifier:(id)arg2 figAssetCreationFlags:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000026e58
+ (id)_initializationOptionsClasses;	// IMP=0x0000000000026d43
+ (id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1;	// IMP=0x0000000000026b13
+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000026ac9
+ (_Bool)isPlayableExtendedMIMEType:(id)arg1;	// IMP=0x0000000000026a72
+ (id)audiovisualMIMETypes;	// IMP=0x0000000000026a59
+ (id)audiovisualTypes;	// IMP=0x0000000000026a40
+ (id)_UTTypes;	// IMP=0x00000000000268f9
+ (id)_fileUTTypes;	// IMP=0x000000000002650e
+ (id)_streamingUTTypes;	// IMP=0x000000000002602f
+ (id)_figMIMETypes;	// IMP=0x0000000000025ed6
+ (id)_figFileUTIs;	// IMP=0x0000000000025ea4
+ (id)_figHFSFileTypes;	// IMP=0x0000000000025e72
+ (id)_figFilePathExtensions;	// IMP=0x0000000000025e40
+ (id)_figFileMIMETypes;	// IMP=0x0000000000025e0e
+ (id)_figStreamingMIMETypes;	// IMP=0x0000000000025ddc
+ (id)_figStreamingUTIs;	// IMP=0x0000000000025daa
+ (id)_avfValidationPlist;	// IMP=0x0000000000025ce7
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1;	// IMP=0x0000000000029ede
+ (id)userInfoObjectForURLAsset:(id)arg1;	// IMP=0x0000000000029e9e
+ (void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2;	// IMP=0x0000000000029e89
+ (id)instanceIdentifierMapTable;	// IMP=0x0000000000029d07
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x000000000002b589
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x000000000002b376
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x000000000002b31e
+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000002b1e6
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;	// IMP=0x000000000002b1de
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002afd2
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x000000000002af7a
- (id)contentKeySpecifiersEligibleForPreloading;	// IMP=0x00000000000296c3
- (_Bool)_requiresInProcessOperation;	// IMP=0x0000000000029698
- (unsigned long long)referenceRestrictions;	// IMP=0x0000000000029657
- (id)lyrics;	// IMP=0x0000000000029636
- (void)cancelLoading;	// IMP=0x00000000000295ed
- (id)creationOptions;	// IMP=0x00000000000295d8
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)_absoluteURL;	// IMP=0x0000000000029533
- (void)_tracksDidChange;	// IMP=0x00000000000294a5
- (id)tracks;	// IMP=0x000000000002932e
- (Class)_classForTrackInspectors;	// IMP=0x000000000002930d
- (Class)_classForAssetTracks;	// IMP=0x00000000000292fc
- (Class)_classForFigAssetInspectorLoader;	// IMP=0x00000000000292eb
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x00000000000292ca
- (struct OpaqueFigFormatReader *)_formatReader;	// IMP=0x00000000000292a9
- (id)_assetInspector;	// IMP=0x0000000000029288
- (void)_setAssetInspectorLoader:(id)arg1;	// IMP=0x00000000000291bb
- (id)_assetInspectorLoader;	// IMP=0x00000000000291a6
- (id)description;	// IMP=0x0000000000029143
- (void)dealloc;	// IMP=0x000000000002900f
- (void)_removeFigAssetNotifications;	// IMP=0x0000000000028f1a
- (void)_addFigAssetNotifications;	// IMP=0x0000000000028e2d
- (void)_ensureAssetDownloadCache;	// IMP=0x0000000000028adc
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;	// IMP=0x0000000000028a56
- (id)initWithFileURL:(id)arg1 offset:(long long)arg2 length:(long long)arg3 options:(id)arg4;	// IMP=0x0000000000028943
- (id)initWithURL:(id)arg1 options:(id)arg2;	// IMP=0x00000000000283c2
- (id)init;	// IMP=0x0000000000026afd
- (id)assetCache;	// IMP=0x000000000002970c
- (id)_managedAssetCache;	// IMP=0x00000000000296e4
- (_Bool)_clientURLLoadingRepresentsAccurateNetworkStatistics;	// IMP=0x00000000000299a2
- (_Bool)_shouldOptimizeAccessForLinearMoviePlayback;	// IMP=0x0000000000029961
- (id)SHA1Digest;	// IMP=0x0000000000029936
- (unsigned long long)downloadToken;	// IMP=0x0000000000029915
- (id)downloadDestinationURL;	// IMP=0x00000000000298ed
- (id)originalNetworkContentURL;	// IMP=0x00000000000298cc
- (id)resolvedURL;	// IMP=0x00000000000298ab
- (id)_instanceIdentifier;	// IMP=0x0000000000029880
- (id)identifyingTag;	// IMP=0x0000000000029855
- (id)identifyingTagClass;	// IMP=0x000000000002982a
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly, nonatomic) NSArray *variants;
- (id)_resourceLoaderWithRemoteHandlerContext:(id)arg1;	// IMP=0x0000000000029a7e
- (_Bool)_hasResourceLoaderDelegate;	// IMP=0x0000000000029b66
@property(readonly, nonatomic) AVAssetResourceLoader *resourceLoader;
- (void)_setUserInfoObject:(id)arg1;	// IMP=0x0000000000029da3
- (void)_removeUserInfoObject;	// IMP=0x0000000000029d7c
- (void)expire;	// IMP=0x000000000002ac08
- (_Bool)_attachedToExternalContentKeySession;	// IMP=0x000000000002abcb
- (id)contentKeySession;	// IMP=0x000000000002abaa
- (int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(_Bool *)arg2;	// IMP=0x000000000002a890
@property(readonly, nonatomic) _Bool mayRequireContentKeysForMediaDataProcessing;
- (id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002ac5b
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b591
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b37e

@end

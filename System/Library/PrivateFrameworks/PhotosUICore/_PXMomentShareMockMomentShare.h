//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXDisplayMomentShare-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface _PXMomentShareMockMomentShare <PXDisplayMomentShare>
{
    unsigned short _status;	// 8 = 0x8
    unsigned short _px_highlightEnrichmentState;	// 10 = 0xa
    unsigned long long _assetCount;	// 16 = 0x10
    unsigned long long _photosCount;	// 24 = 0x18
    unsigned long long _videosCount;	// 32 = 0x20
    unsigned long long _uploadedPhotosCount;	// 40 = 0x28
    unsigned long long _uploadedVideosCount;	// 48 = 0x30
    NSURL *_shareURL;	// 56 = 0x38
    NSDate *_expiryDate;	// 64 = 0x40
    NSString *_localizedTitle;	// 72 = 0x48
    NSDate *_startDate;	// 80 = 0x50
    NSDate *_endDate;	// 88 = 0x58
    NSArray *_localizedLocationNames;	// 96 = 0x60
    unsigned long long _estimatedAssetCount;	// 104 = 0x68
    long long _px_highlightKind;	// 112 = 0x70
}

+ (id)momentShareWithStatus:(unsigned short)arg1 photosCount:(unsigned long long)arg2 videosCount:(unsigned long long)arg3 uploadedPhotosCount:(unsigned long long)arg4 uploadedVideosCount:(unsigned long long)arg5;	// IMP=0x0000000000541597
- (void).cxx_destruct;	// IMP=0x0000000000541522
@property(readonly, nonatomic) long long px_highlightKind; // @synthesize px_highlightKind=_px_highlightKind;
@property(readonly, nonatomic) unsigned short px_highlightEnrichmentState; // @synthesize px_highlightEnrichmentState=_px_highlightEnrichmentState;
@property(readonly, nonatomic) unsigned long long estimatedAssetCount; // @synthesize estimatedAssetCount=_estimatedAssetCount;
@property(readonly, nonatomic) NSArray *localizedLocationNames; // @synthesize localizedLocationNames=_localizedLocationNames;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, nonatomic) unsigned long long uploadedVideosCount; // @synthesize uploadedVideosCount=_uploadedVideosCount;
@property(readonly, nonatomic) unsigned long long uploadedPhotosCount; // @synthesize uploadedPhotosCount=_uploadedPhotosCount;
@property(readonly, nonatomic) unsigned long long videosCount; // @synthesize videosCount=_videosCount;
@property(readonly, nonatomic) unsigned long long photosCount; // @synthesize photosCount=_photosCount;
@property(readonly, nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property(readonly, nonatomic) unsigned short status; // @synthesize status=_status;
- (id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;	// IMP=0x00000000005413b0
@property(readonly, nonatomic) long long px_momentShareType;
@property(readonly, nonatomic) long long aggregateMediaType;
@property(readonly, nonatomic) NSString *uuid;
- (id)initWithStatus:(unsigned short)arg1 assetCount:(unsigned long long)arg2 photosCount:(unsigned long long)arg3 videosCount:(unsigned long long)arg4 uploadedPhotosCount:(unsigned long long)arg5 uploadedVideosCount:(unsigned long long)arg6 shareURL:(id)arg7 expiryDate:(id)arg8 localizedTitle:(id)arg9 startDate:(id)arg10 endDate:(id)arg11;	// IMP=0x0000000000540f84

// Remaining properties
@property(readonly, nonatomic) _Bool canContainAssets;
@property(readonly, nonatomic) _Bool canContainCollections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAggregation; // @dynamic isAggregation;
@property(readonly, nonatomic) _Bool isEnriched; // @dynamic isEnriched;
@property(readonly, nonatomic) _Bool isEnrichmentComplete; // @dynamic isEnrichmentComplete;
@property(readonly, nonatomic) _Bool isRecent; // @dynamic isRecent;
@property(readonly, nonatomic) NSString *localizedDateDescription; // @dynamic localizedDateDescription;
@property(readonly, nonatomic) NSString *localizedDebugDescription; // @dynamic localizedDebugDescription;
@property(readonly, nonatomic) NSString *localizedSmartDescription; // @dynamic localizedSmartDescription;
@property(readonly, nonatomic) NSString *localizedSubtitle; // @dynamic localizedSubtitle;
@property(readonly, nonatomic) double promotionScore; // @dynamic promotionScore;
@property(readonly, nonatomic) _Bool px_allowsImplicitSelectionForProjectOrSharingAction;
@property(readonly, nonatomic) _Bool px_canAddContent;
@property(readonly, nonatomic) _Bool px_canCreateContent;
@property(readonly, nonatomic) _Bool px_canDeleteContent;
@property(readonly, nonatomic) _Bool px_canRearrangeContent;
@property(readonly, nonatomic) _Bool px_canRemoveContent;
@property(readonly, nonatomic) id px_cheapLogIdentifier;
@property(readonly, nonatomic) _Bool px_isAllPhotosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isAnimatedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isBurstsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isCinematicSmartAlbum;
@property(readonly, nonatomic) _Bool px_isCloudMultipleContributorsEnabled;
@property(readonly, nonatomic) _Bool px_isContentSyndicationAlbum;
@property(readonly, nonatomic) _Bool px_isContentSyndicationAllPhotosAlbum;
@property(readonly, nonatomic) _Bool px_isContentSyndicationFolder;
@property(readonly, nonatomic) _Bool px_isContentSyndicationVirtualCollection;
@property(readonly, nonatomic) _Bool px_isDeletable;
@property(readonly, nonatomic) _Bool px_isDepthEffectSmartAlbum;
@property(readonly, nonatomic) _Bool px_isFavoriteMemoriesSmartFolder;
@property(readonly, nonatomic) _Bool px_isFavoritesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isFolder;
@property(readonly, nonatomic) _Bool px_isForYouVirtualCollection;
@property(readonly, nonatomic) _Bool px_isHiddenSmartAlbum;
@property(readonly, nonatomic) _Bool px_isHighlight;
@property(readonly, nonatomic) _Bool px_isImportHistoryCollection;
@property(readonly, nonatomic) _Bool px_isImportSessionCollection;
@property(readonly, nonatomic) _Bool px_isImportedAlbum;
@property(readonly, nonatomic) _Bool px_isInReadWriteCloudLibrary;
@property(readonly, nonatomic) _Bool px_isLivePhotosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isLongExposuresSmartAlbum;
@property(readonly, nonatomic) _Bool px_isMacSyncedAlbum;
@property(readonly, nonatomic) _Bool px_isMacSyncedEventsFolder;
@property(readonly, nonatomic) _Bool px_isMacSyncedFacesAlbum;
@property(readonly, nonatomic) _Bool px_isMacSyncedFacesFolder;
@property(readonly, nonatomic) _Bool px_isMacSyncedRegularAlbum;
@property(readonly, nonatomic) _Bool px_isMediaTypeSmartAlbum;
@property(readonly, nonatomic) _Bool px_isMediaTypesFolder;
@property(readonly, nonatomic) _Bool px_isMemoriesVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMoment;
@property(readonly, nonatomic) _Bool px_isMomentShare;
@property(readonly, nonatomic) _Bool px_isMomentsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMyAlbumsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMyPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool px_isOwnedSharedAlbum;
@property(readonly, nonatomic) _Bool px_isPanoramasSmartAlbum;
@property(readonly, nonatomic) _Bool px_isPeopleVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPhotosVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPlacesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isProject;
@property(readonly, nonatomic) _Bool px_isProjectsFolder;
@property(readonly, nonatomic) _Bool px_isRAWSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyAddedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyDeletedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyEditedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRegularAlbum;
@property(readonly, nonatomic) _Bool px_isRegularFolder;
@property(readonly, nonatomic) _Bool px_isRenamable;
@property(readonly, nonatomic) _Bool px_isRootSmartAlbum;
@property(readonly, nonatomic) _Bool px_isScreenRecordingsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isScreenshotsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSelfPortraitsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSharedActivityVirtualCollection;
@property(readonly, nonatomic) _Bool px_isSharedAlbum;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsAndActivityFolder;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsFolder;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isSlomoVideosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSmartFolder;
@property(readonly, nonatomic) _Bool px_isStandInAlbum;
@property(readonly, nonatomic) _Bool px_isSuggestion;
@property(readonly, nonatomic) _Bool px_isTimelapsesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isTopLevelFolder;
@property(readonly, nonatomic) _Bool px_isTransientPlacesCollection;
@property(readonly, nonatomic) _Bool px_isUnableToUploadSmartAlbum;
@property(readonly, nonatomic) _Bool px_isUserCreated;
@property(readonly, nonatomic) _Bool px_isUserSmartAlbum;
@property(readonly, nonatomic) _Bool px_isVideosSmartAlbum;
@property(readonly) Class superclass;

@end


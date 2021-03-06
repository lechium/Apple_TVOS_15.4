//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHShare-Protocol.h>

@class NSData, NSDate, NSString, NSURL, PHMomentSharePreview;

@interface PHMomentShare <PHShare>
{
    NSDate *_creationDate;	// 112 = 0x70
    PHMomentSharePreview *_preview;	// 120 = 0x78
    _Bool _shouldIgnoreBudgets;	// 128 = 0x80
    _Bool _shouldNotifyOnUploadCompletion;	// 129 = 0x81
    unsigned short _status;	// 130 = 0x82
    short _publicPermission;	// 132 = 0x84
    unsigned short _trashedState;	// 134 = 0x86
    short _publishState;	// 136 = 0x88
    NSURL *_shareURL;	// 144 = 0x90
    NSDate *_expiryDate;	// 152 = 0x98
    unsigned long long _assetCount;	// 160 = 0xa0
    unsigned long long _photosCount;	// 168 = 0xa8
    unsigned long long _videosCount;	// 176 = 0xb0
    unsigned long long _uploadedPhotosCount;	// 184 = 0xb8
    unsigned long long _uploadedVideosCount;	// 192 = 0xc0
    NSData *_previewData;	// 200 = 0xc8
    NSData *_thumbnailImageData;	// 208 = 0xd0
    NSString *_scopeIdentifier;	// 216 = 0xd8
}

+ (id)fetchMomentSharesOverlappingAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x000000000019deaf
+ (id)_fetchLocalMomentShareWithUUID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019dc8e
+ (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019db3f
+ (id)fetchLocalMomentShareFromShareURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019d87c
+ (_Bool)managedObjectSupportsShareExpiredState;	// IMP=0x000000000019d874
+ (_Bool)managedObjectSupportsShareTrashedState;	// IMP=0x000000000019d86c
+ (_Bool)managedObjectSupportsTrashedState;	// IMP=0x000000000019d864
+ (id)localIdentifierWithUUID:(id)arg1;	// IMP=0x000000000019d7ce
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000019d705
+ (id)entityKeyMap;	// IMP=0x000000000019d6af
+ (id)identifierCode;	// IMP=0x000000000019d6a2
+ (id)fetchType;	// IMP=0x000000000019d683
+ (id)managedEntityName;	// IMP=0x000000000019d676
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x000000000019d646
+ (id)invitedMomentSharesExpiringInDays:(unsigned long long)arg1;	// IMP=0x0000000000069eb6
- (void).cxx_destruct;	// IMP=0x000000000019d246
@property(readonly, nonatomic) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
@property(readonly, nonatomic) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property(readonly, nonatomic) NSData *previewData; // @synthesize previewData=_previewData;
@property(readonly, nonatomic) _Bool shouldNotifyOnUploadCompletion; // @synthesize shouldNotifyOnUploadCompletion=_shouldNotifyOnUploadCompletion;
@property(readonly, nonatomic) _Bool shouldIgnoreBudgets; // @synthesize shouldIgnoreBudgets=_shouldIgnoreBudgets;
@property(readonly, nonatomic) unsigned long long uploadedVideosCount; // @synthesize uploadedVideosCount=_uploadedVideosCount;
@property(readonly, nonatomic) unsigned long long uploadedPhotosCount; // @synthesize uploadedPhotosCount=_uploadedPhotosCount;
@property(readonly, nonatomic) unsigned long long videosCount; // @synthesize videosCount=_videosCount;
@property(readonly, nonatomic) unsigned long long photosCount; // @synthesize photosCount=_photosCount;
@property(readonly, nonatomic) unsigned long long assetCount; // @synthesize assetCount=_assetCount;
@property(readonly, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, nonatomic) short publishState; // @synthesize publishState=_publishState;
@property(readonly, nonatomic) unsigned short trashedState; // @synthesize trashedState=_trashedState;
@property(readonly, nonatomic) short publicPermission; // @synthesize publicPermission=_publicPermission;
@property(readonly, nonatomic) unsigned short status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (void)publishMomentShareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000019cf9c
- (void)forceSyncMomentShareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019ce7a
- (void)acceptMomentShareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019cddd
- (_Bool)shouldSuggestShareBack;	// IMP=0x000000000019ccbe
- (_Bool)shouldPromptUserToIgnoreBudgets;	// IMP=0x000000000019cb9f
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x000000000019c6a3
@property(readonly, nonatomic) PHMomentSharePreview *preview; // @dynamic preview;
- (unsigned long long)estimatedVideosCount;	// IMP=0x000000000019c67d
- (unsigned long long)estimatedPhotosCount;	// IMP=0x000000000019c66c
- (unsigned long long)estimatedAssetCount;	// IMP=0x000000000019c65b
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (Class)changeRequestClass;	// IMP=0x000000000019c635

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(readonly, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(readonly) Class superclass;

@end


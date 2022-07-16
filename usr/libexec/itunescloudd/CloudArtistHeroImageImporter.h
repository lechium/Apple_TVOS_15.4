//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudArtworkImporter, DetermineArtistStoreIDLookupTypeOperation, ICConnectionConfiguration, ML3MusicLibrary, MSVWatchdog, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface CloudArtistHeroImageImporter : NSObject
{
    ML3MusicLibrary *_musicLibrary;	// 8 = 0x8
    ICConnectionConfiguration *_configuration;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSString *_powerAssertionIdentifier;	// 40 = 0x28
    MSVWatchdog *_watchdog;	// 48 = 0x30
    DetermineArtistStoreIDLookupTypeOperation *_currentUpdateOperation;	// 56 = 0x38
    DetermineArtistStoreIDLookupTypeOperation *_followupUpdateOpertion;	// 64 = 0x40
    CloudArtworkImporter *_artworkImporter;	// 72 = 0x48
}

+ (id)allArtistImagesMapCacheFilePathURL;	// IMP=0x0040000000052706
- (void).cxx_destruct;	// IMP=0x0020000000047d83
@property(retain, nonatomic) CloudArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
@property(retain, nonatomic) DetermineArtistStoreIDLookupTypeOperation *followupUpdateOpertion; // @synthesize followupUpdateOpertion=_followupUpdateOpertion;
@property(retain, nonatomic) DetermineArtistStoreIDLookupTypeOperation *currentUpdateOperation; // @synthesize currentUpdateOperation=_currentUpdateOperation;
@property(retain, nonatomic) MSVWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(retain, nonatomic) NSString *powerAssertionIdentifier; // @synthesize powerAssertionIdentifier=_powerAssertionIdentifier;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (void)_importHeroImageForArtistType:(long long)arg1 withPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000047b75
- (void)_artistHeroImageUpdateFinished;	// IMP=0x0010000000047b04
- (long long)_synchronouslyLoadArtistUpdatePollingFrequencyFromBag;	// IMP=0x00100000000477fd
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000476c0
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1;	// IMP=0x001000000004766f
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1;	// IMP=0x001000000004761e
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000475fe
- (void)importArtistHeroImageForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000475de
- (void)cancelArtistHeroImageUpdateAndWaitForOperationToFinish:(_Bool)arg1;	// IMP=0x00100000000474f9
- (void)cancelArtistHeroImageUpdate;	// IMP=0x00100000000474e5
- (void)updateArtistHeroImagesForArtistsAddedSinceLastUpdateUsingClientIdentity:(id)arg1;	// IMP=0x0010000000047434
- (void)updateArtistHeroImagesWithClientIdentity:(id)arg1;	// IMP=0x001000000004736e
- (id)userIdentity;	// IMP=0x001000000004731e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000047063

@end

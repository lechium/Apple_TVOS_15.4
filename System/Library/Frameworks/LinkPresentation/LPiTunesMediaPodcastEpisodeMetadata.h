//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataStoreTransformer-Protocol.h>

@class LPArtworkMetadata, LPImage, NSArray, NSDate, NSString;

@interface LPiTunesMediaPodcastEpisodeMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer>
{
    NSString *_storeFrontIdentifier;	// 16 = 0x10
    NSString *_storeIdentifier;	// 24 = 0x18
    NSString *_episodeName;	// 32 = 0x20
    NSString *_podcastName;	// 40 = 0x28
    NSString *_artist;	// 48 = 0x30
    NSDate *_releaseDate;	// 56 = 0x38
    LPImage *_artwork;	// 64 = 0x40
    LPArtworkMetadata *_artworkMetadata;	// 72 = 0x48
    NSArray *_offers;	// 80 = 0x50
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x0000000000014cc1
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014529
- (void).cxx_destruct;	// IMP=0x0000000000014e6b
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(copy, nonatomic) LPArtworkMetadata *artworkMetadata; // @synthesize artworkMetadata=_artworkMetadata;
@property(retain, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *podcastName; // @synthesize podcastName=_podcastName;
@property(copy, nonatomic) NSString *episodeName; // @synthesize episodeName=_episodeName;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014cac
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014a8a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014889
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001474d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014531
- (id)storeIdentifierForTransformer:(id)arg1;	// IMP=0x000000000002a710
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x000000000002a670
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x000000000002a668
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x000000000002a5b0
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x000000000002a597
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x000000000002a27e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


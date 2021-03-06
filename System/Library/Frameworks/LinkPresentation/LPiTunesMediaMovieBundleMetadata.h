//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataStoreTransformer-Protocol.h>

@class LPArtworkMetadata, LPImage, NSString;

@interface LPiTunesMediaMovieBundleMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer>
{
    NSString *_storeFrontIdentifier;	// 16 = 0x10
    NSString *_storeIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_genre;	// 40 = 0x28
    LPImage *_artwork;	// 48 = 0x30
    LPArtworkMetadata *_artworkMetadata;	// 56 = 0x38
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x0000000000017a64
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000174b5
- (void).cxx_destruct;	// IMP=0x0000000000017b87
@property(copy, nonatomic) LPArtworkMetadata *artworkMetadata; // @synthesize artworkMetadata=_artworkMetadata;
@property(retain, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017a4f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000178ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017735
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001764e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000174bd
- (id)storeIdentifierForTransformer:(id)arg1;	// IMP=0x000000000002b7c2
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x000000000002b722
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x000000000002b71a
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x000000000002b683
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x000000000002b66a
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x000000000002b547

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


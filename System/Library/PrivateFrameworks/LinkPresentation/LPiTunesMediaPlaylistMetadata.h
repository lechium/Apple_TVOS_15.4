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

@interface LPiTunesMediaPlaylistMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer>
{
    NSString *_storeFrontIdentifier;	// 16 = 0x10
    NSString *_storeIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_curator;	// 40 = 0x28
    LPImage *_artwork;	// 48 = 0x30
    LPArtworkMetadata *_artworkMetadata;	// 56 = 0x38
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x0000000000011fc6
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011a17
- (void).cxx_destruct;	// IMP=0x00000000000120e9
@property(copy, nonatomic) LPArtworkMetadata *artworkMetadata; // @synthesize artworkMetadata=_artworkMetadata;
@property(retain, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *curator; // @synthesize curator=_curator;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011fb1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011e10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011c97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011bb0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011a1f
- (id)storeIdentifierForTransformer:(id)arg1;	// IMP=0x0000000000028e5c
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x0000000000028d72
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x0000000000028d6a
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x0000000000028cb2
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x0000000000028c99
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x0000000000028a43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


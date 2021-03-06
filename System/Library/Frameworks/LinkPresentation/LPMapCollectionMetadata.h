//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataFallbackIconTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class LPImage, NSArray, NSString;

@interface LPMapCollectionMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>
{
    unsigned int _numberOfItems;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    LPImage *_icon;	// 24 = 0x18
    LPImage *_image;	// 32 = 0x20
    LPImage *_darkImage;	// 40 = 0x28
    NSArray *_addresses;	// 48 = 0x30
    NSString *_publisherName;	// 56 = 0x38
    LPImage *_publisherIcon;	// 64 = 0x40
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x000000000001ab1a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a379
- (void).cxx_destruct;	// IMP=0x000000000001ac9f
@property(retain, nonatomic) LPImage *publisherIcon; // @synthesize publisherIcon=_publisherIcon;
@property(copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(copy, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) LPImage *darkImage; // @synthesize darkImage=_darkImage;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned int numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x000000000001aab3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a8d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a714
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a5cc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a381
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x000000000004bc43
- (id)fallbackIconForTransformer:(id)arg1;	// IMP=0x000000000004bbd2
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x000000000004bb89
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x000000000004baf2
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x000000000004bad9
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x000000000004b51b
- (id)_bottomLine;	// IMP=0x000000000004b193
- (id)_resolvedImage;	// IMP=0x000000000004b0f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class LPImage, NSString;

@interface LPiCloudFamilyInvitationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility>
{
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_action;	// 32 = 0x20
    NSString *_kind;	// 40 = 0x28
    LPImage *_image;	// 48 = 0x30
    LPImage *_icon;	// 56 = 0x38
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x0000000000018dbb
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001877b
- (void).cxx_destruct;	// IMP=0x0000000000018ee1
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018d70
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018b68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000189ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018908
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018783
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x0000000000021d9e
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x0000000000021d8c
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x0000000000021cd1
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x0000000000021cb8
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x0000000000021042

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


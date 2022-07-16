//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class LPImage, NSString;

@interface LPAppleTVMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer>
{
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    LPImage *_artwork;	// 32 = 0x20
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x000000000001c1de
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001be1b
- (void).cxx_destruct;	// IMP=0x000000000001c27e
@property(retain, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c1c9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c0a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bfb3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001bf1d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001be23
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x00000000000619cb
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x00000000000618c5
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x000000000006186c
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x0000000000061329

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


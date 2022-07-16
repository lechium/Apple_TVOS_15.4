//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataFallbackIconTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class NSString;

@interface LPFaceTimeInviteMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>
{
    NSString *_title;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x000000000001cfcc
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001cdbf
- (void).cxx_destruct;	// IMP=0x000000000001d012
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001cf0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ce89
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ce5f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001cdc7
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x0000000000023271
- (id)fallbackIconForTransformer:(id)arg1;	// IMP=0x0000000000023258
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x0000000000023250
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x000000000002317b
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x0000000000023166
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x0000000000022be1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

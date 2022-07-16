//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataBackwardCompatibility-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataStoreTransformer-Protocol.h>

@class LPImage, LPVideo, NSArray, NSString;

@interface LPiTunesMediaSoftwareMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer>
{
    _Bool _isMessagesOnlyApp;	// 9 = 0x9
    NSString *_storeFrontIdentifier;	// 16 = 0x10
    NSString *_storeIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    NSString *_genre;	// 48 = 0x30
    NSString *_platform;	// 56 = 0x38
    LPImage *_icon;	// 64 = 0x40
    NSArray *_screenshots;	// 72 = 0x48
    LPVideo *_previewVideo;	// 80 = 0x50
    LPImage *_messagesAppIcon;	// 88 = 0x58
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x0000000000013185
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000128a5
- (void).cxx_destruct;	// IMP=0x0000000000013391
@property(retain, nonatomic) LPImage *messagesAppIcon; // @synthesize messagesAppIcon=_messagesAppIcon;
@property(nonatomic) _Bool isMessagesOnlyApp; // @synthesize isMessagesOnlyApp=_isMessagesOnlyApp;
@property(retain, nonatomic) LPVideo *previewVideo; // @synthesize previewVideo=_previewVideo;
@property(copy, nonatomic) NSArray *screenshots; // @synthesize screenshots=_screenshots;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x000000000001311e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012ebd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012c71
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012afe
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000128ad
- (id)storeIdentifierForTransformer:(id)arg1;	// IMP=0x0000000000029a6c
- (void)populateMetadataForBackwardCompatibility:(id)arg1;	// IMP=0x0000000000029980
- (id)previewImageForTransformer:(id)arg1;	// IMP=0x0000000000029978
- (id)previewSummaryForTransformer:(id)arg1;	// IMP=0x00000000000298e1
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x00000000000298c8
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x0000000000029411

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

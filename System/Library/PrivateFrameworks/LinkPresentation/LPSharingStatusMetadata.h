//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>

@class NSAttributedString, NSString;

@interface LPSharingStatusMetadata <LPLinkMetadataPresentationTransformer>
{
    NSAttributedString *_status;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x000000000001d168
- (void).cxx_destruct;	// IMP=0x000000000001d1ae
@property(copy, nonatomic) NSAttributedString *status; // @synthesize status=_status;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d0a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d025
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;	// IMP=0x0000000000030966
- (id)presentationPropertiesForTransformer:(id)arg1;	// IMP=0x0000000000030856

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

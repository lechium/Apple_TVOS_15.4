//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/NSSecureCoding-Protocol.h>

@class CRDocumentOutputRegionMetadata, CROutputRegion, CRTextDetectorResults;

@interface CRDocumentOutputRegion <NSSecureCoding>
{
    CROutputRegion *_title;	// 8 = 0x8
    CRTextDetectorResults *_detectorResults;	// 16 = 0x10
    unsigned long long _documentRevision;	// 24 = 0x18
    CRDocumentOutputRegionMetadata *_additionalMetadata;	// 32 = 0x20
}

+ (id)documentWithLines:(id)arg1 title:(id)arg2 confidence:(int)arg3 imageSize:(struct CGSize)arg4;	// IMP=0x000000000003fe04
+ (id)documentWithRegions:(id)arg1 title:(id)arg2 confidence:(int)arg3 imageSize:(struct CGSize)arg4;	// IMP=0x000000000003fcc9
- (void).cxx_destruct;	// IMP=0x0000000000040901
@property(retain) CRDocumentOutputRegionMetadata *additionalMetadata; // @synthesize additionalMetadata=_additionalMetadata;
@property unsigned long long documentRevision; // @synthesize documentRevision=_documentRevision;
@property(retain) CRTextDetectorResults *detectorResults; // @synthesize detectorResults=_detectorResults;
@property(retain) CROutputRegion *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1 copyChildren:(_Bool)arg2 copyCandidates:(_Bool)arg3;	// IMP=0x00000000000407a3
- (_Bool)_shouldReprocessRev1;	// IMP=0x0000000000040586
- (void)collectMetadataFromResults:(id)arg1;	// IMP=0x00000000000404fb
- (_Bool)shouldReprocessDocument;	// IMP=0x00000000000404c0
- (id)crCodableDataRepresentation;	// IMP=0x0000000000040310
- (id)outputRegionWithContentsOfCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000004024e
- (id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;	// IMP=0x000000000004016a
- (id)outputRegionWithContentsOfQuad:(id)arg1;	// IMP=0x00000000000400f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003fea9
- (unsigned long long)type;	// IMP=0x000000000003fe9e
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long *)arg3;	// IMP=0x000000000003fb08

@end


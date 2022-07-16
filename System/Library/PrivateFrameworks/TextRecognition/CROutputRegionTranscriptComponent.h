//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRCodable-Protocol.h>
#import <TextRecognition/NSCopying-Protocol.h>

@class CROutputRegion, NSString;

@interface CROutputRegionTranscriptComponent : NSObject <CRCodable, NSCopying>
{
    CROutputRegion *_outputRegion;	// 8 = 0x8
    struct _NSRange _representedRange;	// 16 = 0x10
}

+ (id)componentWithOutputRegion:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000ac07d
- (void).cxx_destruct;	// IMP=0x00000000000ac50d
@property struct _NSRange representedRange; // @synthesize representedRange=_representedRange;
@property(retain) CROutputRegion *outputRegion; // @synthesize outputRegion=_outputRegion;
- (id)crCodableDataRepresentation;	// IMP=0x00000000000ac3cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ac350
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac281
- (id)initWithCRCodableDataRepresentation:(id)arg1;	// IMP=0x00000000000ac16f
- (id)initWithOutputRegion:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000ac0de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


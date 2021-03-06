//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CROutputRegion, NSArray, NSAttributedString;

@interface VNRecognizedTextBlock
{
    CROutputRegion *_crOutputRegion;	// 8 = 0x8
    unsigned long long _requestRevision;	// 16 = 0x10
    NSAttributedString *_attributedString;	// 24 = 0x18
    NSArray *_baselines;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002209f0
- (void).cxx_destruct;	// IMP=0x00000000002209ae
@property(readonly, copy, nonatomic) NSArray *baselines; // @synthesize baselines=_baselines;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (unsigned long long)requestRevision;	// IMP=0x000000000022097b
- (id)getCROutputRegion;	// IMP=0x0000000000220966
- (id)boundingBoxForRange:(struct _NSRange)arg1 error:(id *)arg2;	// IMP=0x000000000022082c
- (float)confidence;	// IMP=0x000000000022080f
- (id)string;	// IMP=0x00000000002207f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000220782
- (unsigned long long)hash;	// IMP=0x0000000000220728
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002206b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022060c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002204fc
- (id)initWithRequestRevision:(unsigned long long)arg1 crOutputRegion:(id)arg2;	// IMP=0x000000000022047c

@end


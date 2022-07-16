//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaAnalysis/NSCopying-Protocol.h>

@class VCPProtoPoint;

__attribute__((visibility("hidden")))
@interface VCPProtoLine : PBCodable <NSCopying>
{
    VCPProtoPoint *_end;	// 8 = 0x8
    VCPProtoPoint *_start;	// 16 = 0x10
}

+ (id)lineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00000000001b278c
- (void).cxx_destruct;	// IMP=0x00000000001b1fcb
@property(retain, nonatomic) VCPProtoPoint *end; // @synthesize end=_end;
@property(retain, nonatomic) VCPProtoPoint *start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b1ef0
- (unsigned long long)hash;	// IMP=0x00000000001b1ea3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b1ddb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b1d3d
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b1ccc
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b1c6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b1c60
- (id)dictionaryRepresentation;	// IMP=0x00000000001b19b3
- (id)description;	// IMP=0x00000000001b1904
- (struct CGPoint)endPointValue;	// IMP=0x00000000001b28b5
- (struct CGPoint)startPointValue;	// IMP=0x00000000001b285b

@end


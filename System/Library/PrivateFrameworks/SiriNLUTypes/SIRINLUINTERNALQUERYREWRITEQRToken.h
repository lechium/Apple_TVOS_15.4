//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString;

@interface SIRINLUINTERNALQUERYREWRITEQRToken : PBCodable <NSCopying>
{
    double _asrConfidence;	// 8 = 0x8
    unsigned int _endIndex;	// 16 = 0x10
    NSString *_phoneSequence;	// 24 = 0x18
    unsigned int _startIndex;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
    _Bool _removeSpaceAfter;	// 48 = 0x30
    CDStruct_c1a2f969 _has;	// 52 = 0x34
}

+ (id)options;	// IMP=0x00000000000c5ee8
- (void).cxx_destruct;	// IMP=0x00000000000c6eab
@property(nonatomic) _Bool removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property(retain, nonatomic) NSString *phoneSequence; // @synthesize phoneSequence=_phoneSequence;
@property(nonatomic) double asrConfidence; // @synthesize asrConfidence=_asrConfidence;
@property(nonatomic) unsigned int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c6d3d
- (unsigned long long)hash;	// IMP=0x00000000000c6b70
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c69e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c68ca
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c67e8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c66fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c66f0
- (id)dictionaryRepresentation;	// IMP=0x00000000000c6137
- (id)description;	// IMP=0x00000000000c6088
@property(nonatomic) _Bool hasRemoveSpaceAfter;
@property(readonly, nonatomic) _Bool hasPhoneSequence;
@property(nonatomic) _Bool hasAsrConfidence;
@property(nonatomic) _Bool hasEndIndex;
@property(nonatomic) _Bool hasStartIndex;
@property(readonly, nonatomic) _Bool hasValue;

@end


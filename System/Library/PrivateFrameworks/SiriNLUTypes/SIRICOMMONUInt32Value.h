//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@interface SIRICOMMONUInt32Value : PBCodable <NSCopying>
{
    unsigned int _value;	// 8 = 0x8
    CDStruct_01ef6375 _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000051cbe
- (unsigned long long)hash;	// IMP=0x0000000000051c94
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000051c02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000051ba0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000051b7c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000051b51
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000051b44
- (id)dictionaryRepresentation;	// IMP=0x00000000000518cb
- (id)description;	// IMP=0x000000000005181c
@property(nonatomic) _Bool hasValue;

@end


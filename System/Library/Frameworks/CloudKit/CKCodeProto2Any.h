//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKCodeProto2Any : PBCodable <NSCopying>
{
    NSString *_typeUrl;	// 8 = 0x8
    NSData *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000177b5d
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *typeUrl; // @synthesize typeUrl=_typeUrl;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000177ab0
- (unsigned long long)hash;	// IMP=0x0000000000177a63
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017799b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001778fd
- (void)copyTo:(id)arg1;	// IMP=0x000000000017789a
- (void)writeTo:(id)arg1;	// IMP=0x000000000017783d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000177830
- (id)dictionaryRepresentation;	// IMP=0x000000000017761d
- (id)description;	// IMP=0x000000000017756e
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasTypeUrl;

@end

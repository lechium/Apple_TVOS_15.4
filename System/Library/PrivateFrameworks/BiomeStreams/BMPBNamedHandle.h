//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBNamedHandle : PBCodable <NSCopying>
{
    NSString *_contactIdentifier;	// 8 = 0x8
    NSString *_handle;	// 16 = 0x10
    NSString *_handleType;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008605b
@property(retain, nonatomic) NSString *handleType; // @synthesize handleType=_handleType;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000085f24
- (unsigned long long)hash;	// IMP=0x0000000000085ea0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000085d74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000085c8a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000085be7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000085b50
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000085b43
- (id)dictionaryRepresentation;	// IMP=0x00000000000858eb
- (id)description;	// IMP=0x000000000008583c
@property(readonly, nonatomic) _Bool hasHandleType;
@property(readonly, nonatomic) _Bool hasContactIdentifier;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) _Bool hasName;

@end


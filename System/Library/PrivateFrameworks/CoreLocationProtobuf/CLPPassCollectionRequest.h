//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSData, NSMutableArray;

@interface CLPPassCollectionRequest : PBRequest <NSCopying>
{
    CLPMeta *_meta;	// 8 = 0x8
    NSMutableArray *_passLocations;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
}

+ (Class)passLocationType;	// IMP=0x0000000000042f00
- (void).cxx_destruct;	// IMP=0x00000000000440ea
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSMutableArray *passLocations; // @synthesize passLocations=_passLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000043eb5
- (unsigned long long)hash;	// IMP=0x0000000000043e48
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000043d50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000043b39
- (void)copyTo:(id)arg1;	// IMP=0x0000000000043a3a
- (Class)responseClass;	// IMP=0x0000000000043a29
- (unsigned int)requestTypeCode;	// IMP=0x0000000000043a1e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000043899
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004388c
- (id)dictionaryRepresentation;	// IMP=0x0000000000042fd5
- (id)description;	// IMP=0x0000000000042f26
@property(readonly, nonatomic) _Bool hasSignature;
- (id)passLocationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000042ee3
- (unsigned long long)passLocationsCount;	// IMP=0x0000000000042ec6
- (void)addPassLocation:(id)arg1;	// IMP=0x0000000000042e5c
- (void)clearPassLocations;	// IMP=0x0000000000042e3f

@end


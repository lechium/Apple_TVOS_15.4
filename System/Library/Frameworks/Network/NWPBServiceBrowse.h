//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSString;

@interface NWPBServiceBrowse : PBCodable <NSCopying>
{
    NSString *_domain;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000019800
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000019710
- (unsigned long long)hash;	// IMP=0x00000000000196c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000195f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019550
- (void)copyTo:(id)arg1;	// IMP=0x00000000000194e0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000019480
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000019470
- (id)dictionaryRepresentation;	// IMP=0x00000000000193e0
- (id)description;	// IMP=0x0000000000019330
@property(readonly, nonatomic) _Bool hasDomain;
@property(readonly, nonatomic) _Bool hasType;

@end


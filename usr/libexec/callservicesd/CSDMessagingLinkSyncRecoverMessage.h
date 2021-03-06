//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CSDMessagingLinkSyncRecoverMessage : PBCodable
{
    NSMutableArray *_pseudonyms;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

+ (Class)pseudonymType;	// IMP=0x00200000000031d6
- (void).cxx_destruct;	// IMP=0x0020000000003c6c
@property(retain, nonatomic) NSMutableArray *pseudonyms; // @synthesize pseudonyms=_pseudonyms;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000003ac4
- (unsigned long long)hash;	// IMP=0x0010000000003a78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000039b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000037c6
- (void)copyTo:(id)arg1;	// IMP=0x00100000000036e1
- (void)writeTo:(id)arg1;	// IMP=0x001000000000358c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000357f
- (id)dictionaryRepresentation;	// IMP=0x0010000000003296
- (id)description;	// IMP=0x00100000000031e7
- (id)pseudonymAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000031b9
- (unsigned long long)pseudonymsCount;	// IMP=0x001000000000319c
- (void)addPseudonym:(id)arg1;	// IMP=0x0010000000003132
- (void)clearPseudonyms;	// IMP=0x0010000000003115
@property(nonatomic) _Bool hasVersion;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable <NSCopying>
{
    NSMutableArray *_attestations;	// 8 = 0x8
}

+ (Class)attestationsType;	// IMP=0x00000000001c1ad5
- (void).cxx_destruct;	// IMP=0x00000000001c2561
@property(retain, nonatomic) NSMutableArray *attestations; // @synthesize attestations=_attestations;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c2407
- (unsigned long long)hash;	// IMP=0x00000000001c23ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c2350
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c218d
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c20c6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c1f96
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c1f89
- (id)dictionaryRepresentation;	// IMP=0x00000000001c1b95
- (id)description;	// IMP=0x00000000001c1ae6
- (id)attestationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c1ab8
- (unsigned long long)attestationsCount;	// IMP=0x00000000001c1a9b
- (void)addAttestations:(id)arg1;	// IMP=0x00000000001c1a31
- (void)clearAttestations;	// IMP=0x00000000001c1a14

@end


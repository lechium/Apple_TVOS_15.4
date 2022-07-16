//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface XDCInstallRequest : PBRequest
{
    NSMutableArray *_metadatas;	// 8 = 0x8
}

+ (Class)metadataType;	// IMP=0x0020000000212716
- (void).cxx_destruct;	// IMP=0x00200000002130d3
@property(retain, nonatomic) NSMutableArray *metadatas; // @synthesize metadatas=_metadatas;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000212f79
- (unsigned long long)hash;	// IMP=0x0010000000212f5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000212ec2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000212cff
- (void)writeTo:(id)arg1;	// IMP=0x0010000000212bcf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000212a09
- (id)dictionaryRepresentation;	// IMP=0x00100000002127d6
- (id)description;	// IMP=0x0010000000212727
- (id)metadataAtIndex:(unsigned long long)arg1;	// IMP=0x00100000002126f9
- (unsigned long long)metadatasCount;	// IMP=0x00100000002126dc
- (void)addMetadata:(id)arg1;	// IMP=0x0010000000212672
- (void)clearMetadatas;	// IMP=0x0010000000212655

@end

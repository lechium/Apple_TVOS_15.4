//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAsset, NSMutableArray;

@interface CKDPPackage : PBCodable <NSCopying>
{
    CKDPAsset *_manifest;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

+ (Class)sectionsType;	// IMP=0x00000000002a569f
- (void).cxx_destruct;	// IMP=0x00000000002a62d8
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CKDPAsset *manifest; // @synthesize manifest=_manifest;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002a60fd
- (unsigned long long)hash;	// IMP=0x00000000002a60b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a5fe8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a5e0f
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a5d25
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a5bd9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a5bcc
- (id)dictionaryRepresentation;	// IMP=0x00000000002a575f
- (id)description;	// IMP=0x00000000002a56b0
- (id)sectionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a5682
- (unsigned long long)sectionsCount;	// IMP=0x00000000002a5665
- (void)addSections:(id)arg1;	// IMP=0x00000000002a55fb
- (void)clearSections;	// IMP=0x00000000002a55de
@property(readonly, nonatomic) _Bool hasManifest;

@end


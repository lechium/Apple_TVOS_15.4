//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SIRINLUINTERNALOVERRIDESOverridesResponse : PBCodable <NSCopying>
{
    NSMutableArray *_parses;	// 8 = 0x8
}

+ (Class)parsesType;	// IMP=0x0000000000050d36
- (void).cxx_destruct;	// IMP=0x00000000000517c4
@property(retain, nonatomic) NSMutableArray *parses; // @synthesize parses=_parses;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005166a
- (unsigned long long)hash;	// IMP=0x000000000005164d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000515b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000513f0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000051329
- (void)writeTo:(id)arg1;	// IMP=0x00000000000511f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000511ec
- (id)dictionaryRepresentation;	// IMP=0x0000000000050df6
- (id)description;	// IMP=0x0000000000050d47
- (id)parsesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000050d19
- (unsigned long long)parsesCount;	// IMP=0x0000000000050cfc
- (void)addParses:(id)arg1;	// IMP=0x0000000000050c92
- (void)clearParses;	// IMP=0x0000000000050c75

@end


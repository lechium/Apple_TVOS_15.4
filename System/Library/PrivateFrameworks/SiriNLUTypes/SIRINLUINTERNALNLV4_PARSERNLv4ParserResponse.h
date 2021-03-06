//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse : PBCodable <NSCopying>
{
    NSMutableArray *_hypotheses;	// 8 = 0x8
}

+ (Class)hypothesesType;	// IMP=0x000000000008ea49
- (void).cxx_destruct;	// IMP=0x000000000008f4d7
@property(retain, nonatomic) NSMutableArray *hypotheses; // @synthesize hypotheses=_hypotheses;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008f37d
- (unsigned long long)hash;	// IMP=0x000000000008f360
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008f2c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008f103
- (void)copyTo:(id)arg1;	// IMP=0x000000000008f03c
- (void)writeTo:(id)arg1;	// IMP=0x000000000008ef0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008eeff
- (id)dictionaryRepresentation;	// IMP=0x000000000008eb09
- (id)description;	// IMP=0x000000000008ea5a
- (id)hypothesesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008ea2c
- (unsigned long long)hypothesesCount;	// IMP=0x000000000008ea0f
- (void)addHypotheses:(id)arg1;	// IMP=0x000000000008e9a5
- (void)clearHypotheses;	// IMP=0x000000000008e988

@end


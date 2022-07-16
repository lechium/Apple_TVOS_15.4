//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SIRINLUINTERNALCATICATIResponse : PBCodable <NSCopying>
{
    NSMutableArray *_hypotheses;	// 8 = 0x8
}

+ (Class)hypothesesType;	// IMP=0x000000000005c7b8
- (void).cxx_destruct;	// IMP=0x000000000005d246
@property(retain, nonatomic) NSMutableArray *hypotheses; // @synthesize hypotheses=_hypotheses;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005d0ec
- (unsigned long long)hash;	// IMP=0x000000000005d0cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d035
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ce72
- (void)copyTo:(id)arg1;	// IMP=0x000000000005cdab
- (void)writeTo:(id)arg1;	// IMP=0x000000000005cc7b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005cc6e
- (id)dictionaryRepresentation;	// IMP=0x000000000005c878
- (id)description;	// IMP=0x000000000005c7c9
- (id)hypothesesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005c79b
- (unsigned long long)hypothesesCount;	// IMP=0x000000000005c77e
- (void)addHypotheses:(id)arg1;	// IMP=0x000000000005c714
- (void)clearHypotheses;	// IMP=0x000000000005c6f7

@end


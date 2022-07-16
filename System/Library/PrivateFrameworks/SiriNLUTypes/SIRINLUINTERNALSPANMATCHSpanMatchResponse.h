//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SIRINLUINTERNALSPANMATCHSpanMatchResponse : PBCodable <NSCopying>
{
    NSMutableArray *_matchingSpans;	// 8 = 0x8
}

+ (Class)matchingSpansType;	// IMP=0x000000000004852d
- (void).cxx_destruct;	// IMP=0x0000000000048fbb
@property(retain, nonatomic) NSMutableArray *matchingSpans; // @synthesize matchingSpans=_matchingSpans;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000048e61
- (unsigned long long)hash;	// IMP=0x0000000000048e44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048daa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048be7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000048b20
- (void)writeTo:(id)arg1;	// IMP=0x00000000000489f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000489e3
- (id)dictionaryRepresentation;	// IMP=0x00000000000485ed
- (id)description;	// IMP=0x000000000004853e
- (id)matchingSpansAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000048510
- (unsigned long long)matchingSpansCount;	// IMP=0x00000000000484f3
- (void)addMatchingSpans:(id)arg1;	// IMP=0x0000000000048489
- (void)clearMatchingSpans;	// IMP=0x000000000004846c

@end

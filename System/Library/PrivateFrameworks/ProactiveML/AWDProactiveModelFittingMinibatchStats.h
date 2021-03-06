//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying>
{
    unsigned long long _batchSize;	// 8 = 0x8
    NSMutableArray *_perLabelSupports;	// 16 = 0x10
    float _support;	// 24 = 0x18
    struct {
        unsigned int batchSize:1;
        unsigned int support:1;
    } _has;	// 28 = 0x1c
}

+ (Class)perLabelSupportType;	// IMP=0x000000000001e5a9
- (void).cxx_destruct;	// IMP=0x000000000001e2e2
@property(retain, nonatomic) NSMutableArray *perLabelSupports; // @synthesize perLabelSupports=_perLabelSupports;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) float support; // @synthesize support=_support;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001e106
- (unsigned long long)hash;	// IMP=0x000000000001dfb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001deca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001dcb4
- (void)copyTo:(id)arg1;	// IMP=0x000000000001dbae
- (void)writeTo:(id)arg1;	// IMP=0x000000000001da36
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001da29
- (id)dictionaryRepresentation;	// IMP=0x000000000001d742
- (id)description;	// IMP=0x000000000001d693
- (id)perLabelSupportAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001d676
- (unsigned long long)perLabelSupportsCount;	// IMP=0x000000000001d659
- (void)addPerLabelSupport:(id)arg1;	// IMP=0x000000000001d5ef
- (void)clearPerLabelSupports;	// IMP=0x000000000001d5d2
@property(nonatomic) _Bool hasBatchSize;
@property(nonatomic) _Bool hasSupport;

@end


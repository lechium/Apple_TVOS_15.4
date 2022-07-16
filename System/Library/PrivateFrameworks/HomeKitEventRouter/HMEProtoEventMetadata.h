//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitEventRouter/NSCopying-Protocol.h>

@class NSString;

@interface HMEProtoEventMetadata : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    unsigned int _cachePolicy;	// 16 = 0x10
    unsigned int _combinePolicy;	// 20 = 0x14
    unsigned int _qos;	// 24 = 0x18
    NSString *_source;	// 32 = 0x20
    struct {
        unsigned int timestamp:1;
        unsigned int cachePolicy:1;
        unsigned int combinePolicy:1;
        unsigned int qos:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000ae13
@property(nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(nonatomic) unsigned int combinePolicy; // @synthesize combinePolicy=_combinePolicy;
@property(nonatomic) unsigned int cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000acf2
- (unsigned long long)hash;	// IMP=0x000000000000ab5a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000aa29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a93a
- (void)copyTo:(id)arg1;	// IMP=0x000000000000a880
- (void)writeTo:(id)arg1;	// IMP=0x000000000000a7b2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000a7a5
- (id)dictionaryRepresentation;	// IMP=0x000000000000a5d7
- (id)description;	// IMP=0x000000000000a528
@property(nonatomic) _Bool hasQos;
@property(nonatomic) _Bool hasCombinePolicy;
@property(nonatomic) _Bool hasCachePolicy;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSource;

@end


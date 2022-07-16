//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveExperiments/NSCopying-Protocol.h>

@interface PREUMResponseItem : PBCodable <NSCopying>
{
    unsigned int _modelId;	// 8 = 0x8
    unsigned int _replyTextId;	// 12 = 0xc
    unsigned int _responseClassId;	// 16 = 0x10
    _Bool _isCustomResponse;	// 20 = 0x14
    struct {
        unsigned int modelId:1;
        unsigned int replyTextId:1;
        unsigned int responseClassId:1;
        unsigned int isCustomResponse:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) _Bool isCustomResponse; // @synthesize isCustomResponse=_isCustomResponse;
@property(nonatomic) unsigned int replyTextId; // @synthesize replyTextId=_replyTextId;
@property(nonatomic) unsigned int responseClassId; // @synthesize responseClassId=_responseClassId;
@property(nonatomic) unsigned int modelId; // @synthesize modelId=_modelId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000149a0
- (unsigned long long)hash;	// IMP=0x0000000000014924
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014821
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014772
- (void)copyTo:(id)arg1;	// IMP=0x00000000000146e6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000014636
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000014629
- (id)dictionaryRepresentation;	// IMP=0x0000000000014483
- (id)description;	// IMP=0x00000000000143d4
@property(nonatomic) _Bool hasIsCustomResponse;
@property(nonatomic) _Bool hasReplyTextId;
@property(nonatomic) _Bool hasResponseClassId;
@property(nonatomic) _Bool hasModelId;

@end


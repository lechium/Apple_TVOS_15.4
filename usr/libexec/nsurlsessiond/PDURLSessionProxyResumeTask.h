//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyResumeTask : PBCodable
{
    NSData *_additionalProperties;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002e93c
@property(retain, nonatomic) NSData *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002e878
- (unsigned long long)hash;	// IMP=0x001000000002e82b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002e763
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002e6c5
- (void)copyTo:(id)arg1;	// IMP=0x001000000002e662
- (void)writeTo:(id)arg1;	// IMP=0x001000000002e605
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002e42e
- (id)dictionaryRepresentation;	// IMP=0x001000000002e37e
- (id)description;	// IMP=0x001000000002e2cf
@property(readonly, nonatomic) _Bool hasAdditionalProperties;
@property(readonly, nonatomic) _Bool hasTask;

@end


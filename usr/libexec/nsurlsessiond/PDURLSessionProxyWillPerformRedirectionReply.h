//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, PDURLSessionProxyRequest, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyWillPerformRedirectionReply : PBCodable
{
    MISSING_TYPE *_request;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000377f0
@property(retain, nonatomic) PDURLSessionProxyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000037715
- (unsigned long long)hash;	// IMP=0x00100000000376c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000037600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000037562
- (void)copyTo:(id)arg1;	// IMP=0x00100000000374ff
- (void)writeTo:(id)arg1;	// IMP=0x00100000000374a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000372b5
- (id)dictionaryRepresentation;	// IMP=0x00100000000371e0
- (id)description;	// IMP=0x0010000000037131
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end


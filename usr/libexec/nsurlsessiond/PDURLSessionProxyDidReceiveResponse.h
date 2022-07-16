//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveResponse : PBCodable
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002e274
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002e199
- (unsigned long long)hash;	// IMP=0x001000000002e14c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002e084
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002dfe6
- (void)copyTo:(id)arg1;	// IMP=0x001000000002df83
- (void)writeTo:(id)arg1;	// IMP=0x001000000002df26
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002dd39
- (id)dictionaryRepresentation;	// IMP=0x001000000002dc64
- (id)description;	// IMP=0x001000000002dbb5
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end

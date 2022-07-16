//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyRequest, PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyWillPerformRedirection : PBCodable
{
    PDURLSessionProxyRequest *_request;	// 8 = 0x8
    PDURLSessionProxyResponse *_response;	// 16 = 0x10
    PDURLSessionProxyTaskMessage *_task;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000597c6
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000005968f
- (unsigned long long)hash;	// IMP=0x0010000000059622
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005952a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000059466
- (void)copyTo:(id)arg1;	// IMP=0x00100000000593e3
- (void)writeTo:(id)arg1;	// IMP=0x0010000000059369
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000005912d
- (id)dictionaryRepresentation;	// IMP=0x001000000005900c
- (id)description;	// IMP=0x0010000000058f5d
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end

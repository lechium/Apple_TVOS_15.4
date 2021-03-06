//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDataTaskWithRequestReply : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSData *_taskInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000007507
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000007443
- (unsigned long long)hash;	// IMP=0x00100000000073f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000732e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000007290
- (void)copyTo:(id)arg1;	// IMP=0x001000000000722d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000071d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000006ff9
- (id)dictionaryRepresentation;	// IMP=0x0010000000006f49
- (id)description;	// IMP=0x0010000000006e9a
@property(readonly, nonatomic) _Bool hasTaskInfo;
@property(readonly, nonatomic) _Bool hasTask;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySocketDisconnected : PBCodable
{
    NSString *_socketUUID;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000030eb6
@property(retain, nonatomic) NSString *socketUUID; // @synthesize socketUUID=_socketUUID;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000030df2
- (unsigned long long)hash;	// IMP=0x0010000000030da5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000030cdd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000030c3f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000030bdc
- (void)writeTo:(id)arg1;	// IMP=0x0010000000030b7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000309a8
- (id)dictionaryRepresentation;	// IMP=0x00100000000308f8
- (id)description;	// IMP=0x0010000000030849
@property(readonly, nonatomic) _Bool hasSocketUUID;
@property(readonly, nonatomic) _Bool hasTask;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyConnectedToServer : PBCodable
{
    NSString *_socketUUID;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004a171
@property(retain, nonatomic) NSString *socketUUID; // @synthesize socketUUID=_socketUUID;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004a0ad
- (unsigned long long)hash;	// IMP=0x001000000004a060
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000049f98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000049efa
- (void)copyTo:(id)arg1;	// IMP=0x0010000000049e97
- (void)writeTo:(id)arg1;	// IMP=0x0010000000049e3a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000049c63
- (id)dictionaryRepresentation;	// IMP=0x0010000000049bb3
- (id)description;	// IMP=0x0010000000049b04
@property(readonly, nonatomic) _Bool hasSocketUUID;
@property(readonly, nonatomic) _Bool hasTask;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyError, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskWillBeRetried : PBCodable
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000049aa9
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000499ce
- (unsigned long long)hash;	// IMP=0x0010000000049981
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000498b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004981b
- (void)copyTo:(id)arg1;	// IMP=0x00100000000497b8
- (void)writeTo:(id)arg1;	// IMP=0x001000000004975b
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004956e
- (id)dictionaryRepresentation;	// IMP=0x0010000000049499
- (id)description;	// IMP=0x00100000000493ea
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTask;

@end


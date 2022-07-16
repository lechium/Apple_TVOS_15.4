//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyOpenBodyStream : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003c801
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003c782
- (unsigned long long)hash;	// IMP=0x001000000003c765
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003c6cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003c653
- (void)copyTo:(id)arg1;	// IMP=0x001000000003c629
- (void)writeTo:(id)arg1;	// IMP=0x001000000003c605
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003c465
- (id)dictionaryRepresentation;	// IMP=0x001000000003c3db
- (id)description;	// IMP=0x001000000003c32c
@property(readonly, nonatomic) _Bool hasTask;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyCancelTask : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003d87f
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003d800
- (unsigned long long)hash;	// IMP=0x001000000003d7e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003d749
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003d6d1
- (void)copyTo:(id)arg1;	// IMP=0x001000000003d6a7
- (void)writeTo:(id)arg1;	// IMP=0x001000000003d683
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003d4e3
- (id)dictionaryRepresentation;	// IMP=0x001000000003d459
- (id)description;	// IMP=0x001000000003d3aa
@property(readonly, nonatomic) _Bool hasTask;

@end


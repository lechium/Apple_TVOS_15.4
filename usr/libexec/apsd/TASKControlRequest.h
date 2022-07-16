//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class TASKRequest;

@interface TASKControlRequest : PBRequest
{
    TASKRequest *_create;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003e8b4
@property(retain, nonatomic) TASKRequest *create; // @synthesize create=_create;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003e835
- (unsigned long long)hash;	// IMP=0x001000000003e818
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003e77e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003e706
- (void)copyTo:(id)arg1;	// IMP=0x001000000003e6dc
- (void)writeTo:(id)arg1;	// IMP=0x001000000003e6b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003e6ab
- (id)dictionaryRepresentation;	// IMP=0x001000000003e467
- (id)description;	// IMP=0x001000000003e3b8
@property(readonly, nonatomic) _Bool hasCreate;

@end


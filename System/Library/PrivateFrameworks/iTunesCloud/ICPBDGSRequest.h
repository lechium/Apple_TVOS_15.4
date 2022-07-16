//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

__attribute__((visibility("hidden")))
@interface ICPBDGSRequest : PBRequest <NSCopying>
{
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;	// 8 = 0x8
    ICPBDGSStartDelegationRequest *_startDelegationRequest;	// 16 = 0x10
    unsigned int _uniqueID;	// 24 = 0x18
    struct {
        unsigned int uniqueID:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000157b42
- (unsigned long long)hash;	// IMP=0x0000000000157ac2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001579cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015790c
- (void)writeTo:(id)arg1;	// IMP=0x000000000015788b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015787e
- (id)dictionaryRepresentation;	// IMP=0x000000000015774f
- (id)description;	// IMP=0x00000000001576a0

@end

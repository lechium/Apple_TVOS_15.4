//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitRemoteLogin : PBCodable <NSCopying>
{
    unsigned long long _delay;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _loginType;	// 24 = 0x18
    int _requester;	// 28 = 0x1c
    int _resultErrorCode;	// 32 = 0x20
    struct {
        unsigned int delay:1;
        unsigned int timestamp:1;
        unsigned int loginType:1;
        unsigned int requester:1;
        unsigned int resultErrorCode:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) unsigned long long delay; // @synthesize delay=_delay;
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000007b9fc3
- (unsigned long long)hash;	// IMP=0x00000000007b9f28
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007b9e06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007b9d3a
- (void)copyTo:(id)arg1;	// IMP=0x00000000007b9c91
- (void)writeTo:(id)arg1;	// IMP=0x00000000007b9bc1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007b9bb4
- (id)dictionaryRepresentation;	// IMP=0x00000000007b993f
- (id)description;	// IMP=0x00000000007b9890
- (int)StringAsRequester:(id)arg1;	// IMP=0x00000000007b97dc
- (id)requesterAsString:(int)arg1;	// IMP=0x00000000007b975c
@property(nonatomic) _Bool hasRequester;
@property(nonatomic) int requester; // @synthesize requester=_requester;
@property(nonatomic) _Bool hasDelay;
@property(nonatomic) _Bool hasResultErrorCode;
- (int)StringAsLoginType:(id)arg1;	// IMP=0x00000000007b95f7
- (id)loginTypeAsString:(int)arg1;	// IMP=0x00000000007b95a1
@property(nonatomic) _Bool hasLoginType;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(nonatomic) _Bool hasTimestamp;

@end


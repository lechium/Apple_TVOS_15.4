//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PDSAgent/NSCopying-Protocol.h>

@class NSString, PDSProtoUserPushToken;

@interface PDSProtoUserPushTokenRegResponse : PBCodable <NSCopying>
{
    NSString *_message;	// 8 = 0x8
    int _status;	// 16 = 0x10
    PDSProtoUserPushToken *_userPushToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000209fe
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) PDSProtoUserPushToken *userPushToken; // @synthesize userPushToken=_userPushToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002090c
- (unsigned long long)hash;	// IMP=0x000000000002089d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000207c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020718
- (void)copyTo:(id)arg1;	// IMP=0x00000000000206ac
- (void)writeTo:(id)arg1;	// IMP=0x0000000000020632
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000020625
- (id)dictionaryRepresentation;	// IMP=0x000000000002027a
- (id)description;	// IMP=0x00000000000201cb
@property(readonly, nonatomic) _Bool hasMessage;

@end


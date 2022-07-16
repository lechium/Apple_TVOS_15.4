//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKDPAnonymousShareRemoveRequest : PBRequest <NSCopying>
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
    NSData *_encryptedShareTuple;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00000000000700bb
- (void).cxx_destruct;	// IMP=0x0000000000070724
@property(retain, nonatomic) NSData *encryptedShareTuple; // @synthesize encryptedShareTuple=_encryptedShareTuple;
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000070677
- (unsigned long long)hash;	// IMP=0x000000000007062a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000070562
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000704c4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000070461
- (void)writeTo:(id)arg1;	// IMP=0x0000000000070404
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000703f7
- (id)dictionaryRepresentation;	// IMP=0x00000000000701e4
- (id)description;	// IMP=0x0000000000070135
@property(readonly, nonatomic) _Bool hasEncryptedShareTuple;
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end

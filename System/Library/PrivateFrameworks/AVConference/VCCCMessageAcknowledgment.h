//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCCCMessageAcknowledgment : PBCodable <NSCopying>
{
    unsigned long long _transactionID;	// 8 = 0x8
    unsigned int _status;	// 16 = 0x10
    struct {
        unsigned int status:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f2634
- (unsigned long long)hash;	// IMP=0x00000000001f25f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f2589
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f2518
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f24e5
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f2493
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f2486
- (id)dictionaryRepresentation;	// IMP=0x00000000001f216c
- (id)description;	// IMP=0x00000000001f20d2
@property(nonatomic) _Bool hasStatus;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufPromptDetailsForVirtualCard : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _showNotification;	// 16 = 0x10
    struct {
        unsigned int showNotification:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000032da10
@property(nonatomic) _Bool showNotification; // @synthesize showNotification=_showNotification;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000032d978
- (unsigned long long)hash;	// IMP=0x000000000032d925
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032d854
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032d7bc
- (void)copyTo:(id)arg1;	// IMP=0x000000000032d759
- (void)writeTo:(id)arg1;	// IMP=0x000000000032d6f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000032d6e7
- (id)dictionaryRepresentation;	// IMP=0x000000000032d414
- (id)description;	// IMP=0x000000000032d365
@property(nonatomic) _Bool hasShowNotification;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

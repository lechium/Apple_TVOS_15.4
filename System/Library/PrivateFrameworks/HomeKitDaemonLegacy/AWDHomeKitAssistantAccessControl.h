//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitAssistantAccessControl : PBCodable <NSCopying>
{
    unsigned long long _numCapableAccessories;	// 8 = 0x8
    unsigned long long _numEnabledAccessories;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    unsigned long long _timestamp;	// 32 = 0x20
    _Bool _isEnabled;	// 40 = 0x28
    struct {
        unsigned int numCapableAccessories:1;
        unsigned int numEnabledAccessories:1;
        unsigned int options:1;
        unsigned int timestamp:1;
        unsigned int isEnabled:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) unsigned long long numCapableAccessories; // @synthesize numCapableAccessories=_numCapableAccessories;
@property(nonatomic) unsigned long long numEnabledAccessories; // @synthesize numEnabledAccessories=_numEnabledAccessories;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008b87ec
- (unsigned long long)hash;	// IMP=0x00000000008b8754
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008b8624
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008b8554
- (void)copyTo:(id)arg1;	// IMP=0x00000000008b84a7
- (void)writeTo:(id)arg1;	// IMP=0x00000000008b83d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008b83c7
- (id)dictionaryRepresentation;	// IMP=0x00000000008b81cb
- (id)description;	// IMP=0x00000000008b811c
@property(nonatomic) _Bool hasNumCapableAccessories;
@property(nonatomic) _Bool hasNumEnabledAccessories;
@property(nonatomic) _Bool hasOptions;
@property(nonatomic) _Bool hasIsEnabled;
@property(nonatomic) _Bool hasTimestamp;

@end

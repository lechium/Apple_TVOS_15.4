//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICIAMApplicationMessage;

@interface ICIAMApplicationMessageSyncCommand : PBCodable <NSCopying>
{
    long long _commandSerialNumber;	// 8 = 0x8
    ICIAMApplicationMessage *_applicationMessage;	// 16 = 0x10
    int _commandType;	// 24 = 0x18
    struct {
        unsigned int commandSerialNumber:1;
        unsigned int commandType:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000095d88
@property(nonatomic) long long commandSerialNumber; // @synthesize commandSerialNumber=_commandSerialNumber;
@property(retain, nonatomic) ICIAMApplicationMessage *applicationMessage; // @synthesize applicationMessage=_applicationMessage;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000095cb3
- (unsigned long long)hash;	// IMP=0x0000000000095c3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000095b4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000095a9a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000095a12
- (void)writeTo:(id)arg1;	// IMP=0x0000000000095985
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000095978
- (id)dictionaryRepresentation;	// IMP=0x00000000000957e1
- (id)description;	// IMP=0x0000000000095732
@property(nonatomic) _Bool hasCommandSerialNumber;
@property(readonly, nonatomic) _Bool hasApplicationMessage;
- (int)StringAsCommandType:(id)arg1;	// IMP=0x0000000000095628
- (id)commandTypeAsString:(int)arg1;	// IMP=0x00000000000955a9
@property(nonatomic) _Bool hasCommandType;
@property(nonatomic) int commandType; // @synthesize commandType=_commandType;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MailIntelligencePETContactEvents : PBCodable <NSCopying>
{
    NSMutableArray *_contactEvents;	// 8 = 0x8
}

+ (Class)contactEventType;	// IMP=0x0000000000117b5d
- (void).cxx_destruct;	// IMP=0x00000000001185eb
@property(retain, nonatomic) NSMutableArray *contactEvents; // @synthesize contactEvents=_contactEvents;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000118491
- (unsigned long long)hash;	// IMP=0x0000000000118474
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001183da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000118217
- (void)copyTo:(id)arg1;	// IMP=0x0000000000118150
- (void)writeTo:(id)arg1;	// IMP=0x0000000000118020
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000118013
- (id)dictionaryRepresentation;	// IMP=0x0000000000117c1d
- (id)description;	// IMP=0x0000000000117b6e
- (id)contactEventAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000117b40
- (unsigned long long)contactEventsCount;	// IMP=0x0000000000117b23
- (void)addContactEvent:(id)arg1;	// IMP=0x0000000000117ab9
- (void)clearContactEvents;	// IMP=0x0000000000117a9c

@end


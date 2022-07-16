//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCallCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBCallCommand : PBCodable <_SFPBCallCommand, NSSecureCoding>
{
    NSString *_phoneNumber;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a77d9
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a76de
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000a7620
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a7500
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a7361
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a72f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a72ec
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001ee851

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


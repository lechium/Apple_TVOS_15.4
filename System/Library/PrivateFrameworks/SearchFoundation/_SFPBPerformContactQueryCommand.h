//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPerformContactQueryCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBPerformContactQueryCommand : PBCodable <_SFPBPerformContactQueryCommand, NSSecureCoding>
{
    NSString *_contactIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a8aaa
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a89af
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000a88f1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a87d1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a8632
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a85ca
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a85bd
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000191ab1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


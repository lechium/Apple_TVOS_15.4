//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBUpdateSearchQueryCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBUpdateSearchQueryCommand : PBCodable <_SFPBUpdateSearchQueryCommand, NSSecureCoding>
{
    int _querySource;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a9bd9
@property(nonatomic) int querySource; // @synthesize querySource=_querySource;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a9a57
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000a9999
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a97e2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a95fe
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a9576
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a9569
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001d570a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBOpenPunchoutCommand-Protocol.h>

@class NSData, NSString, _SFPBPunchout;

@interface _SFPBOpenPunchoutCommand : PBCodable <_SFPBOpenPunchoutCommand, NSSecureCoding>
{
    _SFPBPunchout *_punchout;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b0a17
@property(retain, nonatomic) _SFPBPunchout *punchout; // @synthesize punchout=_punchout;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000b0909
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000b084b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000b06e2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b0543
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b04db
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b04ce
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000051bb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


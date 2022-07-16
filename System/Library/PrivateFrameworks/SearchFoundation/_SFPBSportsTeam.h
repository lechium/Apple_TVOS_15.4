//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBSportsTeam-Protocol.h>

@class NSData, NSString, _SFPBImage;

@interface _SFPBSportsTeam : PBCodable <_SFPBSportsTeam, NSSecureCoding>
{
    _SFPBImage *_logo;	// 8 = 0x8
    NSString *_record;	// 16 = 0x10
    NSString *_score;	// 24 = 0x18
    NSString *_accessibilityDescription;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000012f455
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *record; // @synthesize record=_record;
@property(retain, nonatomic) _SFPBImage *logo; // @synthesize logo=_logo;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000012f106
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000012f048
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000012ed3a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012e6d9
- (void)writeTo:(id)arg1;	// IMP=0x000000000012e58d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012e580
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001a78fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCalendarImage-Protocol.h>

@class NSData, NSString, _SFPBDate;

@interface _SFPBCalendarImage : PBCodable <_SFPBCalendarImage, NSSecureCoding>
{
    _SFPBDate *_date;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000060f79
@property(retain, nonatomic) _SFPBDate *date; // @synthesize date=_date;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000060e6b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000060dad
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000060c44
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000060aa5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000060a3d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000060a30
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001ee643

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


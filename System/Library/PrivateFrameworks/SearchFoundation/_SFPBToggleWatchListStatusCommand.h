//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBToggleWatchListStatusCommand-Protocol.h>

@class NSData, NSString, _SFPBWatchListItem;

@interface _SFPBToggleWatchListStatusCommand : PBCodable <_SFPBToggleWatchListStatusCommand, NSSecureCoding>
{
    _SFPBWatchListItem *_watchListItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009cce7
@property(retain, nonatomic) _SFPBWatchListItem *watchListItem; // @synthesize watchListItem=_watchListItem;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000009cbd9
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000009cb1b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000009c9b2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c813
- (void)writeTo:(id)arg1;	// IMP=0x000000000009c7ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009c79e
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001f0ea2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


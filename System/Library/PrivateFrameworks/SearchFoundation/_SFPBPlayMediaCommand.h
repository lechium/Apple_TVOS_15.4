//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPlayMediaCommand-Protocol.h>

@class NSData, NSString, _SFPBMediaMetadata;

@interface _SFPBPlayMediaCommand : PBCodable <_SFPBPlayMediaCommand, NSSecureCoding>
{
    int _playbackLocation;	// 8 = 0x8
    _SFPBMediaMetadata *_mediaMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009c207
@property(nonatomic) int playbackLocation; // @synthesize playbackLocation=_playbackLocation;
@property(retain, nonatomic) _SFPBMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000009c076
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000009bfb8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000009bd8e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009bbaa
- (void)writeTo:(id)arg1;	// IMP=0x000000000009bb22
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009bb15
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000001e17d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

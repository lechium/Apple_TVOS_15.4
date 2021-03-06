//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBRunVoiceShortcutCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBRunVoiceShortcutCommand : PBCodable <_SFPBRunVoiceShortcutCommand, NSSecureCoding>
{
    NSString *_voiceShortcutIdentifier;	// 8 = 0x8
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000aca6b
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *voiceShortcutIdentifier; // @synthesize voiceShortcutIdentifier=_voiceShortcutIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000ac8dd
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000ac81f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000ac68f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac385
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ac2e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ac2d7
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000018f12f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


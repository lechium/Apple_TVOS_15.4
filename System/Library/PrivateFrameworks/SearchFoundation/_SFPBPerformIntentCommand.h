//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPerformIntentCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBPerformIntentCommand : PBCodable <_SFPBPerformIntentCommand, NSSecureCoding>
{
    NSString *_intentMessageName;	// 8 = 0x8
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
    NSData *_intentMessageData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000aaf19
@property(copy, nonatomic) NSData *intentMessageData; // @synthesize intentMessageData=_intentMessageData;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *intentMessageName; // @synthesize intentMessageName=_intentMessageName;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000aacf8
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000aac3a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000aa9f8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aa59c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000aa4c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000aa4b5
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000194eee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

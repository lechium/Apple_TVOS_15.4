//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBOpenCoreSpotlightItemCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBOpenCoreSpotlightItemCommand : PBCodable <_SFPBOpenCoreSpotlightItemCommand, NSSecureCoding>
{
    NSString *_coreSpotlightIdentifier;	// 8 = 0x8
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
    NSString *_actionIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000aba00
@property(copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *coreSpotlightIdentifier; // @synthesize coreSpotlightIdentifier=_coreSpotlightIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000ab7ef
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000ab731
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000ab53a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ab0de
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ab004
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000aaff7
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000001fe8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


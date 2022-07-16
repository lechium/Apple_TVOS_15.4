//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBSearchInAppCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBSearchInAppCommand : PBCodable <_SFPBSearchInAppCommand, NSSecureCoding>
{
    NSString *_searchString;	// 8 = 0x8
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000aa3e8
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000aa25a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000aa19c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000aa00c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a9d02
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a9c61
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a9c54
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001ec2f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


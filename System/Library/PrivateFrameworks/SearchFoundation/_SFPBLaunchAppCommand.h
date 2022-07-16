//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBLaunchAppCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBLaunchAppCommand : PBCodable <_SFPBLaunchAppCommand, NSSecureCoding>
{
    NSString *_applicationBundleIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000acfbd
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000acec2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000ace04
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000acce4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000acb45
- (void)writeTo:(id)arg1;	// IMP=0x00000000000acadd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000acad0
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001e9641

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


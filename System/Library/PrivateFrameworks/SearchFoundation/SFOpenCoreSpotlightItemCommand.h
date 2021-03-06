//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFOpenCoreSpotlightItemCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFOpenCoreSpotlightItemCommand <SFOpenCoreSpotlightItemCommand, NSSecureCoding, NSCopying>
{
    NSString *_coreSpotlightIdentifier;	// 8 = 0x8
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
    NSString *_actionIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001dcce
- (void).cxx_destruct;	// IMP=0x000000000001dc8c
@property(copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *coreSpotlightIdentifier; // @synthesize coreSpotlightIdentifier=_coreSpotlightIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001db74
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001da25
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d973
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000020020

// Remaining properties
@property(copy, nonatomic) NSString *commandDetail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


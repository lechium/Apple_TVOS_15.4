//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSDestinationProtocol-Protocol.h>
#import <IDSFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bc1fc
+ (id)destinationWithDeviceURI:(id)arg1;	// IMP=0x00000000000bc0c1
+ (id)destinationWithRapportPublicIdentifierURI:(id)arg1;	// IMP=0x00000000000bc074
+ (id)sentinelSelfAliasDestination;	// IMP=0x00000000000bc05b
+ (id)defaultPairedDeviceDestination;	// IMP=0x00000000000bc042
+ (id)destinationWithStringURI:(id)arg1 isLightWeight:(_Bool)arg2;	// IMP=0x00000000000bbfe6
+ (id)destinationWithGroup:(id)arg1;	// IMP=0x00000000000bbf99
+ (id)destinationWithStrings:(id)arg1;	// IMP=0x00000000000bbd8c
+ (id)destinationWithURI:(id)arg1;	// IMP=0x00000000000bbd07
+ (id)destinationWithString:(id)arg1;	// IMP=0x00000000000bbc23
+ (id)destinationWithDestinations:(id)arg1;	// IMP=0x00000000000bb8f0
+ (id)destinationWithAlias:(id)arg1 pushToken:(id)arg2;	// IMP=0x00000000000bb880
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDestination:(id)arg1;	// IMP=0x00000000000bc362
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bc305
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bc28b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bc204
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isDevice) _Bool device;
@property(readonly, nonatomic, getter=isGuest) _Bool guest;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bc127
- (id)destinationURIs;	// IMP=0x00000000000bc10e
- (id)normalizedURIStrings;	// IMP=0x0000000000002ead
- (id)normalizedURIs;	// IMP=0x0000000000002dfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


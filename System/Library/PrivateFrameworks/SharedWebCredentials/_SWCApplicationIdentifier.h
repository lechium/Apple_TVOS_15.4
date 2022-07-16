//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSCopying-Protocol.h>
#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>
{
    unsigned long long _hash;	// 8 = 0x8
    NSString *_prefix;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001120b
+ (id)new;	// IMP=0x0000000000010bc2
+ (_Bool)isCaseSensitive;	// IMP=0x0000000000010bba
- (void).cxx_destruct;	// IMP=0x0000000000011377
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *prefix; // @synthesize prefix=_prefix;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000112a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011213
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011200
- (id)redactedDescription;	// IMP=0x00000000000111f3
- (id)debugDescription;	// IMP=0x0000000000011154
- (id)description;	// IMP=0x0000000000011142
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001107e
- (unsigned long long)hash;	// IMP=0x0000000000011074
- (id)UUIDRepresentation;	// IMP=0x0000000000010edd
- (_Bool)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1;	// IMP=0x0000000000010e57
@property(readonly, getter=isValid) _Bool valid;
@property(readonly) NSString *rawValue;
- (id)initWithString:(id)arg1;	// IMP=0x0000000000010bf0
- (id)init;	// IMP=0x0000000000010bcb
- (id)initForBundleRecord:(id)arg1;	// IMP=0x000000000001139f

@end

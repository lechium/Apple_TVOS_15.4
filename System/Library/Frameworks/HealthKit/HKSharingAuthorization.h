//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKSharingAuthorization : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_authorizationIdentifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009c23a
- (void).cxx_destruct;	// IMP=0x000000000009c389
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *authorizationIdentifier; // @synthesize authorizationIdentifier=_authorizationIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009c2b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009c242
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c22f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c199
- (unsigned long long)hash;	// IMP=0x000000000009c15a
- (id)description;	// IMP=0x000000000009c0dd
- (id)initWithAuthorizationIdentifier:(id)arg1;	// IMP=0x000000000009c0c9
- (id)initWithAuthorizationIdentifier:(id)arg1 displayName:(id)arg2;	// IMP=0x000000000009c010

@end


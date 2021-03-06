//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ICLocalStoreAccountProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_storefrontIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b9c42
- (void).cxx_destruct;	// IMP=0x00000000001b9c32
- (void)_copyLocalStoreAccountPropertiesToOtherInstance:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x00000000001b9bd9
@property(readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x00000000001b9a9b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b9a78
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b99c1
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b9962
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b9957
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b98de
- (unsigned long long)hash;	// IMP=0x00000000001b8dbc
- (id)description;	// IMP=0x00000000001b8cfe
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;

@end


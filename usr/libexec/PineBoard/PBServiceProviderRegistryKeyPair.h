//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBServiceProviderRegistryKeyPair : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_providerType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a2440
@property(copy) NSString *providerType; // @synthesize providerType=_providerType;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00100000000a2290
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a2040
- (unsigned long long)hash;	// IMP=0x00100000000a1fa0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a1ee0

@end


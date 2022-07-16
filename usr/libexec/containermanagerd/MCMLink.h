//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerIdentityMinimal;

@interface MCMLink : NSObject
{
    _Bool _implied;	// 8 = 0x8
    MCMContainerIdentityMinimal *_originContainerIdentity;	// 16 = 0x10
    MCMContainerIdentityMinimal *_containerIdentity;	// 24 = 0x18
    unsigned long long _attributes;	// 32 = 0x20
}

+ (id)linkFromPlist:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0020000000058f25
- (void).cxx_destruct;	// IMP=0x0020000000058efd
@property(readonly, nonatomic) _Bool implied; // @synthesize implied=_implied;
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) MCMContainerIdentityMinimal *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, nonatomic) MCMContainerIdentityMinimal *originContainerIdentity; // @synthesize originContainerIdentity=_originContainerIdentity;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000058e31
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000058dc4
- (_Bool)isFuzzyEqualToLink:(id)arg1;	// IMP=0x0010000000058d33
- (_Bool)isEqualToLink:(id)arg1;	// IMP=0x0010000000058cc1
- (unsigned long long)hash;	// IMP=0x0010000000058c7e
- (id)description;	// IMP=0x0010000000058ba4
- (id)linkInverted;	// IMP=0x0010000000058a9e
- (id)linkBySubtractingAttributes:(unsigned long long)arg1;	// IMP=0x00100000000589df
- (id)linkByMergingWithLink:(id)arg1;	// IMP=0x00100000000587eb
- (id)plist;	// IMP=0x001000000005866a
- (id)initWithVersion1PlistDictionary:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000058244
- (id)initWithPlist:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000058124
- (id)initWithLibsystemLink:(struct container_link_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000057fad
- (id)initWithOriginContainerIdentity:(id)arg1 containerIdentity:(id)arg2 attributes:(unsigned long long)arg3 implied:(_Bool)arg4;	// IMP=0x0010000000057ecc

@end


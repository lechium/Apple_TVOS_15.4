//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSCopying-Protocol.h>
#import <ProactiveSupport/NSMutableCopying-Protocol.h>
#import <ProactiveSupport/NSSecureCoding-Protocol.h>

@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000425d1
- (id)description;	// IMP=0x0000000000040533
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000404ba
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000040195
- (unsigned long long)count;	// IMP=0x0000000000040136
- (unsigned long long)hash;	// IMP=0x0000000000040124
- (_Bool)isEqualToDomainSelection:(id)arg1;	// IMP=0x0000000000040106
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004009a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040066
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004005b
- (_Bool)isEmpty;	// IMP=0x0000000000040053
- (id)globPatterns;	// IMP=0x000000000003f99e
- (id)allDomains;	// IMP=0x000000000003f985
- (_Bool)containsDomain:(id)arg1;	// IMP=0x000000000003f97d
- (id)initWithDomainsFromSet:(id)arg1;	// IMP=0x000000000003f8cb
- (id)initWithDomainsFromArray:(id)arg1;	// IMP=0x000000000003f804
- (id)initWithDomain:(id)arg1;	// IMP=0x000000000003f755
- (id)init;	// IMP=0x000000000003f726
- (id)_initWithNonOverlappingDomainSet:(id)arg1;	// IMP=0x000000000003f6a8

@end

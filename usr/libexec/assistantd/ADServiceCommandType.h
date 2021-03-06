//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADServiceCommandType : NSObject
{
    NSString *_domainName;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
}

+ (id)domainObjectCommitTypeForDomainNamed:(id)arg1;	// IMP=0x00400000000ff4d7
+ (id)domainObjectCancelTypeForDomainNamed:(id)arg1;	// IMP=0x00100000000ff4bb
+ (id)domainObjectDeleteTypeForDomainNamed:(id)arg1;	// IMP=0x00100000000ff49f
+ (id)domainObjectUpdateTypeForDomainNamed:(id)arg1;	// IMP=0x00100000000ff483
+ (id)domainObjectRetrieveTypeForDomainNamed:(id)arg1;	// IMP=0x00100000000ff467
+ (id)domainObjectCreateTypeForDomainNamed:(id)arg1;	// IMP=0x00100000000ff44b
+ (id)_serviceCommandTypeWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x00100000000ff3df
- (void).cxx_destruct;	// IMP=0x00200000000ff814
- (unsigned long long)hash;	// IMP=0x00100000000ff7d5
- (_Bool)isEqualToServiceCommandType:(id)arg1;	// IMP=0x00100000000ff716
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ff6b9
- (id)description;	// IMP=0x00100000000ff631
- (id)qualifiedCommandName;	// IMP=0x00100000000ff5c8
- (id)className;	// IMP=0x00100000000ff5ba
- (id)domainName;	// IMP=0x00100000000ff5ac
- (id)initWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x00100000000ff4f3

@end


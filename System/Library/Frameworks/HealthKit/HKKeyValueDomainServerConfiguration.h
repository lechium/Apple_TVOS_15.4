//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HKKeyValueDomainServerConfiguration
{
    long long _category;	// 8 = 0x8
    NSString *_domainName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012cc2c
- (void).cxx_destruct;	// IMP=0x000000000012cdb8
@property(readonly, copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012ccf6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012cc34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012cb9e
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2;	// IMP=0x000000000012cb12

@end


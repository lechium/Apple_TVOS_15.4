//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSMetricsIdentifierStore, AMSProcessInfo, NSString;

@interface AMSMetricsIdentifier : NSObject
{
    AMSMetricsIdentifierStore *_store;	// 8 = 0x8
}

+ (id)clientIdKey;	// IMP=0x000000000019a26f
+ (void)removeIdentifiersForAccount:(id)arg1;	// IMP=0x000000000019a256
+ (void)cleanupIdentifiers;	// IMP=0x000000000019a119
- (void).cxx_destruct;	// IMP=0x000000000019a2dd
- (id)generateIdentifier;	// IMP=0x000000000019a1ef
- (id)generateEventFields;	// IMP=0x000000000019a132
@property(nonatomic) double duration;
@property(retain, nonatomic) NSString *domain;
@property(retain, nonatomic) AMSProcessInfo *clientInfo;
@property(retain, nonatomic) ACAccount *account;
- (id)init;	// IMP=0x0000000000199fc9

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSString;

@interface AMSMetricsIdentifierStore : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    NSString *_domain;	// 24 = 0x18
    double _resetInterval;	// 32 = 0x20
}

+ (void)_sync;	// IMP=0x00000000001a0672
+ (id)_sharedQueue;	// IMP=0x00000000001a061b
+ (id)_database;	// IMP=0x00000000001a01a5
+ (id)_accountIdentifierForAccount:(id)arg1;	// IMP=0x00000000001a012a
+ (void)removeIdentifiersForAccount:(id)arg1;	// IMP=0x000000000019d0a8
+ (id)identifierStoreWithAccount:(id)arg1 bagNamespace:(id)arg2 bag:(id)arg3;	// IMP=0x000000000019ccea
+ (void)cleanupIdentifiers;	// IMP=0x000000000019c7e0
- (void).cxx_destruct;	// IMP=0x00000000001a0877
@property(nonatomic) double resetInterval; // @synthesize resetInterval=_resetInterval;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_generateIdentifierKey:(id)arg1 storeInfo:(id)arg2 period:(long long)arg3;	// IMP=0x00000000001a0442
- (id)_generateStoreKey;	// IMP=0x00000000001a01c5
- (id)_identifierStoreInfoForKeys:(id)arg1 inDatabase:(id)arg2 date:(id)arg3 needsToSync:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x000000000019f9e7
- (id)_identifiersForKeys:(id)arg1 currentDate:(id)arg2;	// IMP=0x000000000019ef58
- (id)_identifierInfoForKey:(id)arg1 storeInfo:(id)arg2 period:(long long)arg3 inDatabase:(id)arg4 date:(id)arg5 setValue:(id)arg6 needsToSync:(_Bool *)arg7 error:(id *)arg8;	// IMP=0x000000000019e6f4
- (void)_generateFutureIdentifiersIfNeededForKeys:(id)arg1 storeInfo:(id)arg2 afterPeriod:(long long)arg3 inDatabase:(id)arg4 date:(id)arg5;	// IMP=0x000000000019e0fb
- (void)setIdentifier:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000019d8e3
- (void)reset;	// IMP=0x000000000019d346
- (id)identifierForKey:(id)arg1;	// IMP=0x000000000019cbc7
- (id)generateEventFieldsForKeys:(id)arg1;	// IMP=0x000000000019ca01

@end

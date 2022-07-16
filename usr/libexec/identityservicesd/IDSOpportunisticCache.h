//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSFrequentURISuggester, IDSKeychainWrapper, NSMutableDictionary;

@interface IDSOpportunisticCache : NSObject
{
    NSMutableDictionary *_keychainCache;	// 8 = 0x8
    long long _accessCount;	// 16 = 0x10
    IDSKeychainWrapper *_keychainWrapper;	// 24 = 0x18
    IDSFrequentURISuggester *_uriSuggester;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000a450
@property(retain, nonatomic) IDSFrequentURISuggester *uriSuggester; // @synthesize uriSuggester=_uriSuggester;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(nonatomic) long long accessCount; // @synthesize accessCount=_accessCount;
@property(retain, nonatomic) NSMutableDictionary *keychainCache; // @synthesize keychainCache=_keychainCache;
- (id)description;	// IMP=0x001000000000a260
- (id)dataForService:(id)arg1 identifier:(id)arg2;	// IMP=0x0010000000009fb0
- (id)selectDataForDestination:(id)arg1;	// IMP=0x0010000000009370
- (void)selectServicesForKeychainCacheFromDictionary:(id)arg1;	// IMP=0x00100000000091e0
- (void)limitDataInDictionary:(id)arg1 forService:(id)arg2;	// IMP=0x0010000000008bb0
- (void)mergeKeychainCacheDataIntoDictionary:(id)arg1 forService:(id)arg2;	// IMP=0x00100000000086f0
- (void)mergeKeychainCacheIntoDictionary:(id)arg1;	// IMP=0x00100000000084b0
- (void)syncCacheWithKeychain;	// IMP=0x00100000000083e0
- (_Bool)removeDataWithIdentifier:(id)arg1 serviceName:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000008210
- (_Bool)addData:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000007a00
- (_Bool)clearKeychainWithError:(id *)arg1;	// IMP=0x00100000000078b0
- (void)copyCacheWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007370
- (_Bool)saveOpportunisticCache:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000070e0
- (id)fetchOpportunisticCacheWithError:(id *)arg1;	// IMP=0x0010000000006c70
- (id)initWithKeychainWrapper:(id)arg1 uriSuggester:(id)arg2;	// IMP=0x0010000000006b50
- (id)init;	// IMP=0x0010000000006ab0

@end

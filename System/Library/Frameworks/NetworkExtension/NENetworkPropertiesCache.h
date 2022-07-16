//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface NENetworkPropertiesCache : NSObject
{
    struct os_unfair_lock_s lock;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
    NSURL *_cacheFileURL;	// 16 = 0x10
    NSString *_keychainIdentifier;	// 24 = 0x18
    NSDictionary *_cache;	// 32 = 0x20
}

+ (id)sharedCache;	// IMP=0x00000000001881c5
- (void).cxx_destruct;	// IMP=0x000000000018a17a
@property(retain, nonatomic) NSDictionary *cache; // @synthesize cache=_cache;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSString *keychainIdentifier; // @synthesize keychainIdentifier=_keychainIdentifier;
@property(retain, nonatomic) NSURL *cacheFileURL; // @synthesize cacheFileURL=_cacheFileURL;
- (void)rotateEncryptionKey;	// IMP=0x000000000018a04a
- (void)clear;	// IMP=0x0000000000189d8e
- (void)setProperties:(id)arg1 forNetworkPath:(id)arg2;	// IMP=0x0000000000189c13
- (void)saveCacheToDisk:(id)arg1;	// IMP=0x00000000001899ff
- (id)copyPropertiesForNetworkPath:(id)arg1;	// IMP=0x0000000000189885
- (id)createCacheKeyFromSignature:(id)arg1;	// IMP=0x00000000001896d2
- (void)updateKeyWithCurrentKey:(id)arg1 currentCache:(id)arg2;	// IMP=0x000000000018915e
- (id)encryptData:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000188df6
- (id)generateNewKey;	// IMP=0x0000000000188d45
- (_Bool)saveKey:(id)arg1 itemExists:(_Bool)arg2;	// IMP=0x0000000000188abf
- (int)fetchKey:(id *)arg1;	// IMP=0x0000000000188849
- (_Bool)loadCache;	// IMP=0x00000000001884e3
- (id)copyNetworkSignatureForPath:(id)arg1;	// IMP=0x000000000018833e
- (id)init;	// IMP=0x000000000018821f

@end


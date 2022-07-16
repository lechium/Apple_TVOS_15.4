//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNCache;

@interface CNManagedAccountsCache : NSObject
{
    CNCache *_accountsCache;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
}

+ (id)sharedCache;	// IMP=0x0000000000012eb0
- (void).cxx_destruct;	// IMP=0x000000000001333b
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) CNCache *accountsCache; // @synthesize accountsCache=_accountsCache;
- (void)clearCache;	// IMP=0x00000000000132c8
- (id)accountsForIdentifiers:(id)arg1;	// IMP=0x0000000000013106
- (id)accountForIdentifier:(id)arg1;	// IMP=0x0000000000012fce
- (id)init;	// IMP=0x0000000000012f35

@end


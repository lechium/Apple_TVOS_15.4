//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSKeychainView, NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface OTFetchCKKSKeysOperation
{
    _Bool _fetchBeforeGettingKeyset;	// 10 = 0xa
    NSArray *_viewKeySets;	// 16 = 0x10
    NSArray *_incompleteKeySets;	// 24 = 0x18
    NSArray *_pendingTLKShares;	// 32 = 0x20
    NSSet *_zonesTimedOutWithoutKeysets;	// 40 = 0x28
    unsigned long long _desiredTimeout;	// 48 = 0x30
    CKKSKeychainView *_ckks;	// 56 = 0x38
    NSSet *_viewFilter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000028e26
@property _Bool fetchBeforeGettingKeyset; // @synthesize fetchBeforeGettingKeyset=_fetchBeforeGettingKeyset;
@property(retain) NSSet *viewFilter; // @synthesize viewFilter=_viewFilter;
@property(retain) CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
@property unsigned long long desiredTimeout; // @synthesize desiredTimeout=_desiredTimeout;
@property(retain) NSSet *zonesTimedOutWithoutKeysets; // @synthesize zonesTimedOutWithoutKeysets=_zonesTimedOutWithoutKeysets;
@property(retain) NSArray *pendingTLKShares; // @synthesize pendingTLKShares=_pendingTLKShares;
@property(retain) NSArray *incompleteKeySets; // @synthesize incompleteKeySets=_incompleteKeySets;
@property(retain) NSArray *viewKeySets; // @synthesize viewKeySets=_viewKeySets;
- (void)groupStart;	// IMP=0x001000000002893b
- (id)initWithDependencies:(id)arg1 viewsToFetch:(id)arg2;	// IMP=0x00100000000288d7
- (id)initWithDependencies:(id)arg1 refetchNeeded:(_Bool)arg2;	// IMP=0x0010000000028797

@end


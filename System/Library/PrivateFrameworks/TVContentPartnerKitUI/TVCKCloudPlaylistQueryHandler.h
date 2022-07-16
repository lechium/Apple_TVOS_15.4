//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVCKCloudPlaylistQueryHandler
{
}

+ (id)mlPropertyForATVProperty:(id)arg1;	// IMP=0x000000000007842d
+ (id)mlPredicatePropertyForATVProperty:(id)arg1;	// IMP=0x00000000000781ae
+ (id)mlQueryPropertyForATVProperty:(id)arg1;	// IMP=0x0000000000077f0e
- (unsigned int)_specialPlaylistKindForMLKind:(id)arg1;	// IMP=0x000000000007a92e
- (id)_predicateForPlaylistMediaType:(id)arg1;	// IMP=0x000000000007a824
- (void)_getArtworkItemsForPlaylist:(id)arg1;	// IMP=0x0000000000079b55
- (void)_handleDAAPQuery:(id)arg1;	// IMP=0x00000000000790b1
- (void)_handleQuery:(id)arg1;	// IMP=0x0000000000078abf
- (id)_mlQueryForATVMediaQuery:(id)arg1 mediaTypePredicate:(id *)arg2;	// IMP=0x00000000000786c7
- (Class)collectionClass;	// IMP=0x00000000000786b6
- (Class)entityClass;	// IMP=0x00000000000786a5
- (id)foreignPersistentIDProperty;	// IMP=0x000000000007869d
- (id)orderingTermsForProperty:(id)arg1;	// IMP=0x0000000000078586
- (void)handleQuery:(id)arg1 withContext:(void *)arg2;	// IMP=0x000000000007852e

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSSearchableIndex, NSArray, PLPhotoLibrary;
@protocol PLSpotlightDonationManagerSignpostDelegate;

@interface PLSpotlightDonationOperation
{
    CSSearchableIndex *_searchableIndex;	// 8 = 0x8
    NSArray *_searchableItems;	// 16 = 0x10
    PLPhotoLibrary *_photoLibrary;	// 24 = 0x18
    id <PLSpotlightDonationManagerSignpostDelegate> _signpostDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002497b2
@property(nonatomic) __weak id <PLSpotlightDonationManagerSignpostDelegate> signpostDelegate; // @synthesize signpostDelegate=_signpostDelegate;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, copy, nonatomic) NSArray *searchableItems; // @synthesize searchableItems=_searchableItems;
@property(readonly, nonatomic) CSSearchableIndex *searchableIndex; // @synthesize searchableIndex=_searchableIndex;
- (void)main;	// IMP=0x00000000002493fb
- (id)initWithPhotoLibrary:(id)arg1 spotlightSearchableIndex:(id)arg2 searchableItems:(id)arg3;	// IMP=0x00000000002491b9

@end


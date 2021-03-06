//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface AVFragmentedMovieMinder
{
}

+ (id)fragmentedMovieMinderWithMovie:(id)arg1 mindingInterval:(double)arg2;	// IMP=0x00000000000fa3f0
- (void)removeFragmentedMovie:(id)arg1;	// IMP=0x00000000000fa556
- (void)addFragmentedMovie:(id)arg1;	// IMP=0x00000000000fa527
@property(readonly, nonatomic) NSArray *movies;
@property(nonatomic) double mindingInterval;
- (_Bool)_throwsWhenAlreadyMindedAssetIsAdded;	// IMP=0x00000000000fa483
- (id)initWithMovie:(id)arg1 mindingInterval:(double)arg2;	// IMP=0x00000000000fa454

@end


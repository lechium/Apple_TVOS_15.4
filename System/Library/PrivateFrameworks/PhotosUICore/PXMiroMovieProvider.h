//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PXMiroMovieProvider
{
    NSSet *_defaultAssets;	// 8 = 0x8
}

+ (void)preloadMiroFrameworkIfNeeded;	// IMP=0x000000000082e5ca
+ (void *)_loadMiroFrameworkIfNeeded;	// IMP=0x000000000082e59e
+ (void)initialize;	// IMP=0x000000000082e50f
- (void).cxx_destruct;	// IMP=0x000000000082e4cc
@property(readonly, nonatomic) NSSet *defaultAssets; // @synthesize defaultAssets=_defaultAssets;
- (id)diagnosticsItemProvider;	// IMP=0x000000000082e4b3
- (_Bool)canPlayMovie;	// IMP=0x000000000082e4ab
- (id)movieViewController;	// IMP=0x000000000082e4a3
- (Class)_miroMovieClass;	// IMP=0x000000000082e3e0

@end

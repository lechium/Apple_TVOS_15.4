//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVCKSearchSiriContext, TVSSSearchResult;

@interface TVCKSearchSiriPluginViewController
{
    TVCKSearchSiriContext *_siriContext;	// 8 = 0x8
    TVSSSearchResult *_searchResult;	// 16 = 0x10
    NSString *_pluginMode;	// 24 = 0x18
    CDUnknownBlockType _loadingCompletionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b404d
@property(copy, nonatomic) CDUnknownBlockType loadingCompletionHandler; // @synthesize loadingCompletionHandler=_loadingCompletionHandler;
@property(copy, nonatomic) NSString *pluginMode; // @synthesize pluginMode=_pluginMode;
@property(retain, nonatomic) TVSSSearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000000000b3f5c
- (id)_launchOptions;	// IMP=0x00000000000b3e88
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000b3e77
- (void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(struct CGPoint)arg3;	// IMP=0x00000000000b3dd8
- (void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1;	// IMP=0x00000000000b3d89
- (void)loadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3bce
- (id)siriContext;	// IMP=0x00000000000b3b40
- (void)appendBatch:(id)arg1;	// IMP=0x00000000000b38ef
- (void)_waitForLoadingToFinish;	// IMP=0x00000000000b2b67
- (void)_didFinishLoading;	// IMP=0x00000000000b2b16
- (void)_accumulateImageStackViews:(id)arg1 descendingFromView:(id)arg2;	// IMP=0x00000000000b293b
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000b28e6

@end


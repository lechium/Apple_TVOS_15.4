//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface PXMoviePresenter : NSObject
{
    UIViewController *_presentingViewController;	// 8 = 0x8
}

+ (id)moviePresenterWithPresentingViewController:(id)arg1;	// IMP=0x00000000006c4ca9
- (void).cxx_destruct;	// IMP=0x00000000006c4c9b
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (_Bool)presentMovieViewControllerForAssetCollection:(id)arg1 keyAsset:(id)arg2 referencePersons:(id)arg3 preferredTransitionType:(long long)arg4;	// IMP=0x00000000006c4bbf
- (_Bool)presentMovieViewControllerForAssetCollection:(id)arg1 keyAsset:(id)arg2 preferredTransitionType:(long long)arg3;	// IMP=0x00000000006c4ba7
- (id)init;	// IMP=0x00000000006c4b2d
- (id)initWithPresentingViewController:(id)arg1;	// IMP=0x00000000006c4ac9

@end


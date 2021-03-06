//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUI/_GKStateMachineDelegate-Protocol.h>

@class GKLoadableContentStateMachine, NSArray, NSString, UIActivityIndicatorView;

@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate>
{
    NSArray *_viewsToHideWhileLoading;	// 8 = 0x8
    double _loadingIndicatorDelay;	// 16 = 0x10
    GKLoadableContentStateMachine *_loadingMachine;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f85bf
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(nonatomic) double loadingIndicatorDelay; // @synthesize loadingIndicatorDelay=_loadingIndicatorDelay;
@property(retain, nonatomic) NSArray *viewsToHideWhileLoading; // @synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading;
- (void)didExitRefreshingState;	// IMP=0x00000000000f853a
- (void)didEnterRefreshingState;	// IMP=0x00000000000f8534
- (void)didExitLoadedState;	// IMP=0x00000000000f852e
- (void)didEnterLoadedState;	// IMP=0x00000000000f8528
- (void)didExitLoadingState;	// IMP=0x00000000000f8441
- (void)didEnterLoadingState;	// IMP=0x00000000000f827e
- (void)showLoadingIndicator;	// IMP=0x00000000000f803f
- (void)setViewsToHideHidden:(_Bool)arg1;	// IMP=0x00000000000f7ee8
@property(retain, nonatomic) NSString *loadingState;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000f7ccd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


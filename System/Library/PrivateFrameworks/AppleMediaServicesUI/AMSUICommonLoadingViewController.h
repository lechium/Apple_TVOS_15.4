//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUILoadingView;

__attribute__((visibility("hidden")))
@interface AMSUICommonLoadingViewController
{
    AMSUILoadingView *_loadingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000dbc6
@property(retain, nonatomic) AMSUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)_setup;	// IMP=0x000000000000d7fd
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000d793
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000d6ca
- (void)viewDidLoad;	// IMP=0x000000000000d689
- (void)loadView;	// IMP=0x000000000000d5ee

@end


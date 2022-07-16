//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMBaseViewController.h>

#import <TVHomeUI/TVHMHighContrastFocusable-Protocol.h>
#import <TVHomeUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, TVHMAllCamerasViewControllerImpl;

@interface TVHMAllCamerasPreviewViewController : TVSMBaseViewController <UICollectionViewDelegate, TVHMHighContrastFocusable>
{
    TVHMAllCamerasViewControllerImpl *_impl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000017060
@property(nonatomic) _Bool showsHighContrastFocusIndicator;
@property(copy, nonatomic) NSArray *cameraItems;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000016d50
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000016cc0
- (void)viewDidLoad;	// IMP=0x0000000000016c10
- (id)init;	// IMP=0x0000000000016b20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


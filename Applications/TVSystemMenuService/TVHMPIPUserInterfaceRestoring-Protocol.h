//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol TVHMPIPUserInterfaceRestoring <NSObject>
- (void)dismissPictureInPictureViewControllerFromFullScreen:(UIViewController *)arg1;
- (void)restorePictureInPictureViewControllerToFullScreen:(UIViewController *)arg1;

@optional
- (_Bool)dismissPictureInPictureViewController:(UIViewController *)arg1;
@end

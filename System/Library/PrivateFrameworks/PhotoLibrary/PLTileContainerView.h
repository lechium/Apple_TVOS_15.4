//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PLPhotoTileViewController;

@interface PLTileContainerView : UIView
{
    PLPhotoTileViewController *_photoTileController;	// 8 = 0x8
}

- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000001b469
- (void)clearBackReference;	// IMP=0x000000000001b454
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000000001b401
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001b39f
- (id)initWithFrame:(struct CGRect)arg1 photoTileController:(id)arg2;	// IMP=0x000000000001b319

@end


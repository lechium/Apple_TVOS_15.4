//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class TVPhotoAsset, TVPhotoCollection, TVSettingsPhotoCollectionGroupViewController;

@protocol TVSettingsPhotoCollectionGroupViewControllerDelegate <NSObject>

@optional
- (void)controller:(TVSettingsPhotoCollectionGroupViewController *)arg1 didSelectAsset:(TVPhotoAsset *)arg2 inCollection:(TVPhotoCollection *)arg3;
@end


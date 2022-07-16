//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PXPhotoKitAssetsDataSourceManager, PXPhotosDataSource;

@protocol PXPhotosDataSourceProvider <NSObject>
- (PXPhotosDataSource *)createInitialPhotosDataSourceForDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1;

@optional
- (NSString *)localizedInitialLoadingStatusMessageForDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1;
- (PXPhotosDataSource *)loadInitialPhotosDataSourceForDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1;
@end


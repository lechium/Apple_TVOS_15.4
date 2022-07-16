//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSManagedObjectID, NSString, PLPhotoLibrary;

@protocol _PLThumbnailLoadingAsset <NSObject>
- (PLPhotoLibrary *)pl_photoLibrary;
- (long long)cloudPlaceholderKind;
- (_Bool)complete;
- (unsigned long long)effectiveThumbnailIndex;
- (NSManagedObjectID *)objectID;

@optional
- (struct CGSize)imageSize;
- (NSString *)thumbnailIdentifier;
- (NSString *)uuid;
@end


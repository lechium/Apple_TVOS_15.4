//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPhotoSources/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol _TVPhotoStreamServerInterface <NSObject>
- (void)fetchImageForAssetURL:(NSURL *)arg1 completion:(void (^)(NSString *))arg2;
- (void)fetchAssetsForCollectionWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)fetchCollectionsWithCompletion:(void (^)(NSArray *))arg1;
- (void)syncWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end


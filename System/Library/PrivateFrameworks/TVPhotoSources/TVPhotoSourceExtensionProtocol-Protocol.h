//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol TVPhotoSourceExtensionProtocol
- (void)fetchAssetsForCollectionWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)fetchCollectionsWithCompletion:(void (^)(NSArray *))arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@protocol PLAssetsdMigrationServiceProtocol <NSObject>
- (void)moveiPhotoLibraryMediaWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)dataMigrationWillFinishWithReply:(void (^)(void))arg1;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(void (^)(void))arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXAssetLoader/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol AXAssetsServiceInterface <NSObject>
- (void)updateAssetForAssetType:(NSString *)arg1;
- (void)refreshAssetCatalogForAssetType:(NSString *)arg1 withOverrideTimeout:(NSNumber *)arg2;
@end


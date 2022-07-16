//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SplashBoard/NSObject-Protocol.h>

@class NSData, NSString;

@protocol XBSnapshotManifestStore <NSObject>
- (void)synchronizeForBundleIdentifier:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (NSData *)loadManifestDataForBundleIdentifier:(NSString *)arg1;
- (void)clearManifestDataForBundleIdentifier:(NSString *)arg1;
- (void)persistManifestData:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;

@optional
- (void)endAccessBlockForBundleIdentifier:(NSString *)arg1;
- (void)beginAccessBlockForBundleIdentifier:(NSString *)arg1;
@end


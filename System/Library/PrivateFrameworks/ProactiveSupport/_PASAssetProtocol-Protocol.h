//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSupport/NSObject-Protocol.h>

@class NSString, _PASNotificationToken;

@protocol _PASAssetProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long bestAssetVersionObserved;
@property(readonly, nonatomic) unsigned long long compatibilityVersion;
@property(readonly, nonatomic) NSString *assetType;
@property(readonly, nonatomic) unsigned long long assetVersion;
- (NSString *)pathForResourceWithName:(NSString *)arg1 extension:(NSString *)arg2;
- (_Bool)deregisterUpdateHandlerAsyncWithToken:(_PASNotificationToken *)arg1;
- (_PASNotificationToken *)registerUpdateHandler:(void (^)(id <_PASAssetProtocol>))arg1;
@end


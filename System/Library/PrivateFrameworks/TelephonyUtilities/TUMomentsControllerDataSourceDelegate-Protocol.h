//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, NSURL, TUMomentDescriptor, TUMomentsCapabilities;
@protocol TUMomentsControllerDataSource;

@protocol TUMomentsControllerDataSourceDelegate <NSObject>
- (void)serverDiedForDataSource:(id <TUMomentsControllerDataSource>)arg1;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 requestSandboxExtensionForURL:(NSURL *)arg2 reply:(void (^)(TUSandboxExtendedURL *, NSError *))arg3;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg2;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 willCaptureRemoteRequestFromRequesterID:(NSString *)arg2;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didUpdateCapabilities:(TUMomentsCapabilities *)arg2 forVideoStreamToken:(long long)arg3;
@end


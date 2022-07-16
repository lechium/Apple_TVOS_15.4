//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDAppleMediaAccessoryInfoController, NSString;
@protocol HMEEventForwarder, HMELastEventStoreReadHandle;

@protocol HMDAppleMediaAccessoryInfoControllerDataSource <NSObject>
@property(readonly) id <HMELastEventStoreReadHandle> eventStoreReadHandle;
@property(readonly) id <HMEEventForwarder> eventForwarder;
- (NSString *)eventSourceIdentifierNameForAccessoryInfoController:(HMDAppleMediaAccessoryInfoController *)arg1;
- (NSString *)accessoryInfoController:(HMDAppleMediaAccessoryInfoController *)arg1 topicForKeyPath:(NSString *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAppleMediaAccessoriesStateMessenger, HMFMessage, NSString;

@protocol HMDAppleMediaAccessoriesStateMessengerDelegate <NSObject>
- (void)appleMediaAccessoriesStateMessenger:(HMDAppleMediaAccessoriesStateMessenger *)arg1 didReceiveModelIdentiferRequestMessage:(HMFMessage *)arg2 withAccessoryIdentifier:(NSString *)arg3;
@end


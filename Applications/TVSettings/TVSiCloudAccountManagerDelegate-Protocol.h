//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ACAccount, TVSiCloudAccountManager;

@protocol TVSiCloudAccountManagerDelegate <NSObject>

@optional
- (void)iCloudAccountManager:(TVSiCloudAccountManager *)arg1 didModifyActiveAccount:(ACAccount *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString;

@protocol HMDAccessoryMinimumUserPrivilegeCapable <NSObject>
- (void)handleUpdatedPassword:(NSString *)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (_Bool)supportsMinimumUserPrivilege;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SHRemoteConfiguration;
@protocol SHService;

@protocol SHServiceDelegate <NSObject>
- (SHRemoteConfiguration *)configurationForService:(id <SHService>)arg1;
- (void)serviceUpdated:(id <SHService>)arg1 withRunningState:(_Bool)arg2;
@end


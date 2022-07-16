//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSObject-Protocol.h>

@class NSDictionary;
@protocol LSMIInstallCall, LSMIUninstallCall;

@protocol LSInstallationServiceProtocol <NSObject>
- (void)performUninstallCall:(id <LSMIUninstallCall>)arg1 withOptions:(NSDictionary *)arg2 uninstallType:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)performInstallCall:(id <LSMIInstallCall>)arg1 withOptions:(NSDictionary *)arg2 installType:(unsigned long long)arg3 reply:(void (^)(NSArray *, LSRecordPromise *, NSError *))arg4;
@end


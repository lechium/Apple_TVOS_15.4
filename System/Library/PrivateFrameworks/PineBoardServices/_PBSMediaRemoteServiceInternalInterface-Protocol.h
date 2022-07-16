//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class NSDictionary, PBSMediaRemoteSiriContext;

@protocol _PBSMediaRemoteServiceInternalInterface <NSObject>
- (void)__volumeControlTargetDeviceTypeWithCompletion:(void (^)(long long))arg1;
- (void)__noteUserPresenceDetected;
- (void)__dismissPinDialogWithToken:(id)arg1;
- (void)__showPinDialogWithOptions:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)__stopSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
- (void)__startSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
- (void)__activateSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
@end


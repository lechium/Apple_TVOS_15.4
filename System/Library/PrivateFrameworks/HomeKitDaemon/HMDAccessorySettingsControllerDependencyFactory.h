//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDAccessorySettingsControllerDependencyFactory-Protocol.h>

@interface HMDAccessorySettingsControllerDependencyFactory : HMFObject <HMDAccessorySettingsControllerDependencyFactory>
{
}

- (void)assertWithCondition:(_Bool)arg1 message:(id)arg2;	// IMP=0x0000000000916ceb
- (id)createMessageHandlerWithQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000916c7b
- (id)settingModelForUpdateWithIdentifier:(id)arg1 parent:(id)arg2 value:(id)arg3 configNumber:(id)arg4;	// IMP=0x0000000000916b8a
- (id)timerWithReason:(long long)arg1 interval:(double)arg2;	// IMP=0x0000000000916b4a

@end


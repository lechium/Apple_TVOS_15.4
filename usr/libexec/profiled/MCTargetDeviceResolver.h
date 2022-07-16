//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCTargetDeviceResolver : NSObject
{
}

+ (id)stringForWatchAvailability:(unsigned long long)arg1;	// IMP=0x004000000001bb6f
+ (void)_showPromptForWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b98c
+ (void)_showPromptForHomePodWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b7a9
+ (void)_showPromptForHomePodAndWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b5f4
+ (void)_showPromptForPhoneAndOtherDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b3ce
+ (void)showResolutionPromptWithWatchOption:(_Bool)arg1 homePodOption:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b15f
+ (_Bool)isHomePodAvailable;	// IMP=0x001000000001b157
+ (unsigned long long)watchAvailability;	// IMP=0x000000000001b14c

@end

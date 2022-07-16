//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BiometricsHandler : NSObject
{
}

+ (void)_storeToken:(id)arg1;	// IMP=0x0020000000007cea
+ (void)_retreiveTokenWithAction:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000079e5
+ (void)_removeToken;	// IMP=0x0010000000007756
+ (void)_presentBiometricsDialogWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007534
+ (void)storeToken:(id)arg1;	// IMP=0x001000000000723d
+ (id)retreiveTokenWithAction:(long long)arg1;	// IMP=0x0010000000006f46
+ (void)reset;	// IMP=0x0010000000006f16
+ (void)removeToken;	// IMP=0x0010000000006f04
+ (void)setState:(long long)arg1;	// IMP=0x0010000000006eaa
+ (_Bool)isSupported;	// IMP=0x0010000000006d20
+ (id)storeQueue;	// IMP=0x0010000000006cc9
+ (long long)state;	// IMP=0x0010000000006c77

@end


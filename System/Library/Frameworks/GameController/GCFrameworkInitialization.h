//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GCFrameworkInitialization : NSObject
{
}

+ (void)initializeFramework;	// IMP=0x00000000000819a4
+ (void)enableKeyboardAndMouseSupportServerSide;	// IMP=0x00000000000818d4
+ (void)enableKeyboardSupportWithReason:(long long)arg1;	// IMP=0x0000000000081752
+ (void)enableMouseSupportWithReason:(long long)arg1;	// IMP=0x00000000000815d0
+ (void)enableControllerSupportWithReason:(long long)arg1;	// IMP=0x000000000008146b
+ (void)listenForObservers;	// IMP=0x00000000000813ef
+ (id)initOperationQueue;	// IMP=0x000000000008138a
+ (id)initQueue;	// IMP=0x0000000000081330
+ (void)controllerManagerDidOpen;	// IMP=0x000000000008122a

@end


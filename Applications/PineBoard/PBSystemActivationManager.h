//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBSystemActivationManager : NSObject
{
    long long _activationState;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000001ae7c0
@property long long activationState; // @synthesize activationState=_activationState;
- (void)_updateActivationState;	// IMP=0x00100000001ae940
- (id)init;	// IMP=0x00100000001ae8b0

@end


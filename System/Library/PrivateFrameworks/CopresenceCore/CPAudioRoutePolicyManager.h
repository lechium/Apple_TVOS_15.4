//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CopresenceCore/CPAudioRoutePolicyManager-Protocol.h>

@class MISSING_TYPE, TURoute;

@interface CPAudioRoutePolicyManager : NSObject <CPAudioRoutePolicyManager>
{
    MISSING_TYPE *observers;	// 8 = 0x8
    MISSING_TYPE *pickedRoute;	// 16 = 0x10
    MISSING_TYPE *routeController;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000051580
- (void).cxx_destruct;	// IMP=0x0000000000052260
- (void)addObserver:(id)arg1 withQueue:(id)arg2;	// IMP=0x00000000000521a0
- (void)switchToSpeakerRouteIfNecessary;	// IMP=0x0000000000052120
- (id)init;	// IMP=0x0000000000051d80
@property(nonatomic, readonly) _Bool sharePlaySupported;
@property(nonatomic, retain) TURoute *pickedRoute; // @synthesize pickedRoute;

@end

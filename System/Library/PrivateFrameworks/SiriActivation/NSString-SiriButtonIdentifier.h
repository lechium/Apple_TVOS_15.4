//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SiriButtonIdentifier)
+ (id)stringWithSiriButtonIdentifier:(long long)arg1;	// IMP=0x00000000000042b0
+ (id)stringWithSiriPresentationIdentifier:(long long)arg1;	// IMP=0x000000000001eba8
+ (id)stringWithSiriPresentationActivationCancelReason:(unsigned long long)arg1;	// IMP=0x000000000001ed83
+ (id)stringWithSiriHomeAffordanceSuppression:(long long)arg1;	// IMP=0x000000000001efc9
+ (id)stringWithSiriActivationEventType:(long long)arg1;	// IMP=0x000000000001f2e4
+ (id)stringWithSiriSpotlightContextSource:(long long)arg1;	// IMP=0x000000000002f4af
- (long long)siriPresentationIdentifier;	// IMP=0x000000000001ec34
- (unsigned long long)cancelReason;	// IMP=0x000000000001ede8
@end


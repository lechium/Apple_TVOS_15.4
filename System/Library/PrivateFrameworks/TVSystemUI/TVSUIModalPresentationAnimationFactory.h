//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/_UIBasicAnimationFactory-Protocol.h>

@class NSString;

@interface TVSUIModalPresentationAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    unsigned long long _curve;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long curve; // @synthesize curve=_curve;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000026dfb
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000026ddf
- (id)initWithCurve:(unsigned long long)arg1;	// IMP=0x0000000000026da2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


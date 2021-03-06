//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPDAuthListener-Protocol.h>
#import <CoreCDP/CDPDCircleListener-Protocol.h>

@class NSString;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener>
{
    id <CDPDCircleProxy> _circleProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000013ef4
@property(retain, nonatomic) id <CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
- (void)_sendNotification:(const char *)arg1 withValue:(unsigned long long)arg2;	// IMP=0x0000000000013cf1
- (void)_didCreateCircleProxy;	// IMP=0x0000000000013ceb
- (void)reportManateeUnavailable;	// IMP=0x0000000000013c69
- (void)reportManateeAvailable;	// IMP=0x0000000000013be4
- (void)circleViewStatusChanged;	// IMP=0x0000000000013ae9
- (void)circleStatusChanged;	// IMP=0x00000000000139ee
- (void)securityLevelChanged:(_Bool)arg1;	// IMP=0x00000000000138d1
- (_Bool)isPrimaryAccountHSA2;	// IMP=0x0000000000013881
- (_Bool)_checkSecurityEligibility:(id *)arg1;	// IMP=0x00000000000136ec
- (_Bool)isManateeAvailable:(id *)arg1;	// IMP=0x00000000000135f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


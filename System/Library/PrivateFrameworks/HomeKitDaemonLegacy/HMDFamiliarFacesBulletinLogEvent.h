//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDFamiliarFacesBulletinLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    _Bool _doorbellPressed;	// 8 = 0x8
    long long _numberOfKnownPersons;	// 16 = 0x10
    long long _numberOfUnknownPersons;	// 24 = 0x18
    NSString *_bulletinReason;	// 32 = 0x20
    double _secondsFromDoorbellToFaceClassification;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000078002
@property(readonly) double secondsFromDoorbellToFaceClassification; // @synthesize secondsFromDoorbellToFaceClassification=_secondsFromDoorbellToFaceClassification;
@property(readonly) _Bool doorbellPressed; // @synthesize doorbellPressed=_doorbellPressed;
@property(readonly, copy) NSString *bulletinReason; // @synthesize bulletinReason=_bulletinReason;
@property(readonly) long long numberOfUnknownPersons; // @synthesize numberOfUnknownPersons=_numberOfUnknownPersons;
@property(readonly) long long numberOfKnownPersons; // @synthesize numberOfKnownPersons=_numberOfKnownPersons;
- (id)initWithNumberOfKnownPersons:(long long)arg1 numberOfUnknownPersons:(long long)arg2 bulletinReason:(id)arg3 doorbellPressed:(_Bool)arg4 secondsFromDoorbellToFaceClassification:(double)arg5;	// IMP=0x0000000000077ee0
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end


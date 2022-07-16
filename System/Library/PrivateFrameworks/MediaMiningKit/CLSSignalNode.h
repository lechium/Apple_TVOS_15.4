//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSSignalNode : NSObject
{
    unsigned long long _identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _operatingPoint;	// 24 = 0x18
    double _highPrecisionOperatingPoint;	// 32 = 0x20
    double _highRecallOperatingPoint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000029e4f
@property(readonly) double highRecallOperatingPoint; // @synthesize highRecallOperatingPoint=_highRecallOperatingPoint;
@property(readonly) double highPrecisionOperatingPoint; // @synthesize highPrecisionOperatingPoint=_highPrecisionOperatingPoint;
@property(readonly) double operatingPoint; // @synthesize operatingPoint=_operatingPoint;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)signalInfoWithIsHierarchical:(_Bool)arg1;	// IMP=0x0000000000029c3e
- (_Bool)failsHighRecallWithConfidence:(double)arg1;	// IMP=0x0000000000029c2c
- (_Bool)failsHighPrecisionWithConfidence:(double)arg1;	// IMP=0x0000000000029c1a
- (_Bool)failsWithConfidence:(double)arg1;	// IMP=0x0000000000029c08
- (_Bool)passesHighRecallWithConfidence:(double)arg1;	// IMP=0x0000000000029bfa
- (_Bool)passesHighPrecisionWithConfidence:(double)arg1;	// IMP=0x0000000000029bec
- (_Bool)passesWithConfidence:(double)arg1;	// IMP=0x0000000000029bde
- (_Bool)failsHighRecallWithSignal:(id)arg1;	// IMP=0x0000000000029b7c
- (_Bool)failsHighPrecisionWithSignal:(id)arg1;	// IMP=0x0000000000029b1a
- (_Bool)failsWithSignal:(id)arg1;	// IMP=0x0000000000029ab8
- (_Bool)passesHighRecallWithSignal:(id)arg1;	// IMP=0x0000000000029a5a
- (_Bool)passesHighPrecisionWithSignal:(id)arg1;	// IMP=0x00000000000299fc
- (_Bool)passesWithSignal:(id)arg1;	// IMP=0x000000000002999e
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 operatingPoint:(double)arg3 highPrecisionOperatingPoint:(double)arg4 highRecallOperatingPoint:(double)arg5;	// IMP=0x00000000000298fb

@end


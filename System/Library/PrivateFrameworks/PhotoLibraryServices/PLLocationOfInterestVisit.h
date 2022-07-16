//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSUUID, PLLocationOfInterest;

@interface PLLocationOfInterestVisit : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSDateInterval *_visitInterval;	// 16 = 0x10
    double _confidence;	// 24 = 0x18
    PLLocationOfInterest *_locationOfInterest;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004acdd8
- (void).cxx_destruct;	// IMP=0x00000000004acda7
@property(nonatomic) __weak PLLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSDateInterval *visitInterval; // @synthesize visitInterval=_visitInterval;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000004accec
- (unsigned long long)hash;	// IMP=0x00000000004accd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004acc3e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004acaed
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004ac9cb
- (id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2 confidence:(double)arg3;	// IMP=0x00000000004ac834

@end

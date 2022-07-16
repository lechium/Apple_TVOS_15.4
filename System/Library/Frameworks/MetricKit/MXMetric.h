//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding>
{
    NSMeasurementFormatter *_measurementFormatter;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008288
- (void).cxx_destruct;	// IMP=0x000000000000858d
@property(retain) NSMeasurementFormatter *measurementFormatter; // @synthesize measurementFormatter=_measurementFormatter;
- (id)dictionaryRepresentation;	// IMP=0x0000000000008558
- (id)DictionaryRepresentation;	// IMP=0x0000000000008546
- (id)JSONRepresentation;	// IMP=0x00000000000084a1
- (id)toDictionary;	// IMP=0x0000000000008494
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008395
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000838f
- (id)init;	// IMP=0x0000000000008290

@end


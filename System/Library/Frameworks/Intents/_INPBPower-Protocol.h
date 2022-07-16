//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBPowerValue;

@protocol _INPBPower <NSObject>
+ (Class)valueType;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(copy, nonatomic) NSArray *values;
- (_INPBPowerValue *)valueAtIndex:(unsigned long long)arg1;
- (void)addValue:(_INPBPowerValue *)arg1;
- (void)clearValues;
@end


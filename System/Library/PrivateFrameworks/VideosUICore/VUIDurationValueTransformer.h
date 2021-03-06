//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface VUIDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_hoursMinutesFormatter;	// 8 = 0x8
    NSDateComponentsFormatter *_secondsFormatter;	// 16 = 0x10
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0000000000011e64
+ (Class)transformedValueClass;	// IMP=0x0000000000011e53
+ (void)initialize;	// IMP=0x0000000000011cfe
- (void).cxx_destruct;	// IMP=0x0000000000011f7d
@property(retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *hoursMinutesFormatter; // @synthesize hoursMinutesFormatter=_hoursMinutesFormatter;
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000011e6c
- (id)init;	// IMP=0x0000000000011d6e

@end


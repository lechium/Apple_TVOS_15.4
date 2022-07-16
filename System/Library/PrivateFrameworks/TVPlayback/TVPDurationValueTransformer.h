//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

__attribute__((visibility("hidden")))
@interface TVPDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_hoursFormatter;	// 8 = 0x8
    NSDateComponentsFormatter *_minutesFormatter;	// 16 = 0x10
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x000000000009a688
+ (Class)transformedValueClass;	// IMP=0x000000000009a677
- (void).cxx_destruct;	// IMP=0x000000000009a7e2
@property(retain, nonatomic) NSDateComponentsFormatter *minutesFormatter; // @synthesize minutesFormatter=_minutesFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *hoursFormatter; // @synthesize hoursFormatter=_hoursFormatter;
- (id)transformedValue:(id)arg1;	// IMP=0x000000000009a690
- (id)init;	// IMP=0x000000000009a598

@end


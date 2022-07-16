//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSMetricsEventLocation : NSObject
{
    long long _position;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSMutableDictionary *_values;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000124ee2
@property(copy, nonatomic) NSString *locationType; // @synthesize locationType=_type;
@property(nonatomic) long long locationPosition; // @synthesize locationPosition=_position;
- (id)valueForLocationKey:(id)arg1;	// IMP=0x0000000000124e9f
- (void)setValue:(id)arg1 forLocationKey:(id)arg2;	// IMP=0x0000000000124dff
@property(readonly, nonatomic) NSDictionary *reportingDictionary;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface SOSIntervalEvent : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
    NSString *_dateDescription;	// 16 = 0x10
    double _earliestDate;	// 24 = 0x18
    double _latestDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001ff8a1
@property(nonatomic) double latestDate; // @synthesize latestDate=_latestDate;
@property(nonatomic) double earliestDate; // @synthesize earliestDate=_earliestDate;
@property(retain, nonatomic) NSString *dateDescription; // @synthesize dateDescription=_dateDescription;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (id)initWithDefaults:(id)arg1 dateDescription:(id)arg2 earliest:(double)arg3 latest:(double)arg4;	// IMP=0x00100000001ff754
- (void)schedule;	// IMP=0x00100000001ff710
- (void)followup;	// IMP=0x00100000001ff6c7
- (_Bool)checkDate;	// IMP=0x00100000001ff672
- (id)getDate;	// IMP=0x00100000001ff655

@end


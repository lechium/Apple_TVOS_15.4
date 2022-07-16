//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class CLPlacemark, NSArray, NSDate, NSString;

@interface PPTripPart : NSObject <NSSecureCoding>
{
    unsigned char _tripMode;	// 8 = 0x8
    NSArray *_eventIdentifiers;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
    NSString *_startLocation;	// 40 = 0x28
    NSString *_endLocation;	// 48 = 0x30
    CLPlacemark *_mainLocation;	// 56 = 0x38
    NSString *_fallbackLocationString;	// 64 = 0x40
}

+ (id)descriptionForTripMode:(unsigned char)arg1;	// IMP=0x0000000000054df4
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000054dec
- (void).cxx_destruct;	// IMP=0x0000000000054d8d
@property(readonly, nonatomic) unsigned char tripMode; // @synthesize tripMode=_tripMode;
@property(retain, nonatomic) NSString *fallbackLocationString; // @synthesize fallbackLocationString=_fallbackLocationString;
@property(retain, nonatomic) CLPlacemark *mainLocation; // @synthesize mainLocation=_mainLocation;
@property(readonly, nonatomic) NSString *endLocation; // @synthesize endLocation=_endLocation;
@property(readonly, nonatomic) NSString *startLocation; // @synthesize startLocation=_startLocation;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSArray *eventIdentifiers; // @synthesize eventIdentifiers=_eventIdentifiers;
- (id)description;	// IMP=0x0000000000054b9b
- (id)destinationString;	// IMP=0x0000000000054a22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054960
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000054755
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventIdentifiers:(id)arg3 mode:(unsigned char)arg4 location:(id)arg5 fallbackLocationString:(id)arg6;	// IMP=0x000000000005464e

@end

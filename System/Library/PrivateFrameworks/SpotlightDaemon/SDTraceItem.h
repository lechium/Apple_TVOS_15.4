//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/NSCopying-Protocol.h>

@class NSString;

@interface SDTraceItem : NSObject <NSCopying>
{
    double _startTime;	// 8 = 0x8
    long long _identifier;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    NSObject *_data;	// 40 = 0x28
    NSString *_string;	// 48 = 0x30
}

+ (void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3;	// IMP=0x000000000000be61
+ (id)stringFromReferenceDate:(double)arg1;	// IMP=0x000000000000bc61
- (void).cxx_destruct;	// IMP=0x000000000000c5c4
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;	// IMP=0x000000000000c3cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bd34

@end

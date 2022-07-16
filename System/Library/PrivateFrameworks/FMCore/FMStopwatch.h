//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMStopwatch : NSObject
{
    NSString *_label;	// 8 = 0x8
    NSString *_comment;	// 16 = 0x10
    unsigned long long _startTime;	// 24 = 0x18
    unsigned long long _endTime;	// 32 = 0x20
}

+ (id)illegalLabelCharacterSet;	// IMP=0x000000000001302b
+ (void)dumpBuffer:(id)arg1;	// IMP=0x0000000000012c25
+ (void)eventWithLabel:(id)arg1;	// IMP=0x0000000000012c0a
+ (void)eventWithLabel:(id)arg1 comment:(id)arg2;	// IMP=0x0000000000012a2e
+ (id)stopwatchWithLabel:(id)arg1;	// IMP=0x00000000000129d0
+ (void)initialize;	// IMP=0x00000000000127aa
- (void).cxx_destruct;	// IMP=0x00000000000136f0
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)descriptionAsData;	// IMP=0x0000000000013604
- (id)description;	// IMP=0x000000000001336b
- (void)stop;	// IMP=0x0000000000013350
- (void)stopWithComment:(id)arg1;	// IMP=0x00000000000131cd
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000000130b8

@end


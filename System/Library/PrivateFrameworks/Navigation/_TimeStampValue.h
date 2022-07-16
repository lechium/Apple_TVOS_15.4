//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/GEOServerFormatTokenTimeStampValue-Protocol.h>

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _TimeStampValue : NSObject <GEOServerFormatTokenTimeStampValue>
{
    double _timeStamp;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
    NSString *_formatPattern;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000174bf
@property(readonly, nonatomic) NSString *formatPattern;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) double timeStamp;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017409
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000172fc
- (id)initWithTimeStamp:(double)arg1 timeZone:(id)arg2 formatPattern:(id)arg3;	// IMP=0x0000000000017242

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


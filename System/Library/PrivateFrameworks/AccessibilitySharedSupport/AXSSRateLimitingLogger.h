//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_os_log;

@interface AXSSRateLimitingLogger : NSObject
{
    unsigned char _logLevel;	// 8 = 0x8
    double _timeInterval;	// 16 = 0x10
    NSObject<OS_os_log> *_categoryLog;	// 24 = 0x18
    NSDate *__dateSinceLastLog;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002171d
@property(retain, nonatomic) NSDate *_dateSinceLastLog; // @synthesize _dateSinceLastLog=__dateSinceLastLog;
@property(retain, nonatomic) NSObject<OS_os_log> *categoryLog; // @synthesize categoryLog=_categoryLog;
@property(readonly, nonatomic) unsigned char logLevel; // @synthesize logLevel=_logLevel;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)_logStringAtProperLevel:(id)arg1;	// IMP=0x0000000000021609
- (_Bool)logString:(id)arg1;	// IMP=0x000000000002149e
- (id)initWithLogLevel:(unsigned char)arg1 categoryLog:(id)arg2 timeInterval:(double)arg3;	// IMP=0x0000000000021419

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface CLFallLogger : NSObject
{
    NSObject<OS_dispatch_queue> *fQueue;	// 8 = 0x8
    NSString *fLogDirectory;	// 16 = 0x10
    NSString *fLogFilePrefix;	// 24 = 0x18
    long long fRotation;	// 32 = 0x20
    NSOutputStream *fOutputStream;	// 40 = 0x28
    long long fHour;	// 48 = 0x30
    NSDate *fDate;	// 56 = 0x38
}

- (void)logData:(id)arg1;	// IMP=0x00200000008bc708
- (id)_outputStream;	// IMP=0x00100000008bc2c2
- (void)flushInMemoryDataWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000008bc1bf
- (void)flushToFile;	// IMP=0x00100000008bc138
- (void)clearLogs;	// IMP=0x00100000008bc08d
- (void)stopLogging;	// IMP=0x00100000008bc02c
- (_Bool)_shouldRotateToHour:(long long *)arg1 date:(id *)arg2;	// IMP=0x00100000008bbf66
- (_Bool)_shouldRotate;	// IMP=0x00100000008bbf50
- (void)_stopLoggingOnQueue;	// IMP=0x00100000008bbf0c
- (id)currentFilename;	// IMP=0x00100000008bbdec
- (id)_currentFilename;	// IMP=0x00100000008bbd23
- (id)logDirectory;	// IMP=0x00100000008bbd19
- (void)dealloc;	// IMP=0x00100000008bbcb9
- (id)initToDirectory:(id)arg1 prefix:(id)arg2 rotation:(long long)arg3;	// IMP=0x00100000008bbc5c
- (id)init;	// IMP=0x00100000008bbc0e

@end

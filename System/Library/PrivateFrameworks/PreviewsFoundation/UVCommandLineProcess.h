//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSTask, NSURL;

@interface UVCommandLineProcess : NSObject
{
    CDUnknownBlockType _terminationHandler;	// 8 = 0x8
    NSTask *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002c5b
@property(retain) NSTask *task; // @synthesize task=_task;
@property long long qualityOfService;
@property(copy) CDUnknownBlockType terminationHandler;
@property(readonly) long long terminationReason;
@property(readonly) int terminationStatus;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) int processIdentifier;
- (_Bool)suspend;	// IMP=0x0000000000002a1b
- (_Bool)resume;	// IMP=0x0000000000002a05
- (void)terminate;	// IMP=0x00000000000029ef
- (void)interrupt;	// IMP=0x00000000000029d9
- (_Bool)launchAndReturnError:(out id *)arg1;	// IMP=0x00000000000029c3
@property(retain) id standardError;
@property(retain) id standardOutput;
@property(retain) id standardInput;
@property(copy) NSURL *currentDirectoryURL;
@property(copy) NSDictionary *environment;
@property(copy) NSArray *arguments;
@property(copy) NSURL *executableURL;
- (void)dealloc;	// IMP=0x0000000000002836
- (id)initNoTask;	// IMP=0x0000000000002807
- (id)initWithTask:(id)arg1;	// IMP=0x000000000000279c
- (id)init;	// IMP=0x000000000000275c

@end


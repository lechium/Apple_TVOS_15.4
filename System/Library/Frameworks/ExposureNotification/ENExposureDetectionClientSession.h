//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/CUXPCCodable-Protocol.h>

@class ENExposureConfiguration, ENExposureDetectionSummary, ENManager, NSArray, NSMutableArray, NSMutableDictionary, NSProgress;
@protocol OS_dispatch_queue;

@interface ENExposureDetectionClientSession : NSObject <CUXPCCodable>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    _Bool _guardActivateDone;	// 10 = 0xa
    _Bool _guardAddFileDone;	// 11 = 0xb
    _Bool _guardFinishDone;	// 12 = 0xc
    int _runState;	// 16 = 0x10
    ENExposureDetectionSummary *_summary;	// 24 = 0x18
    NSMutableArray *_mainFileURLs;	// 32 = 0x20
    unsigned long long _mainFileIndex;	// 40 = 0x28
    unsigned long long _mainFileCount;	// 48 = 0x30
    NSMutableDictionary *_signatureURLMap;	// 56 = 0x38
    CDUnknownBlockType _completionHandler;	// 64 = 0x40
    ENExposureConfiguration *_configuration;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 80 = 0x50
    NSArray *_diagnosisKeyURLs;	// 88 = 0x58
    ENManager *_manager;	// 96 = 0x60
    NSProgress *_progress;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000f44f
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) ENManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) NSArray *diagnosisKeyURLs; // @synthesize diagnosisKeyURLs=_diagnosisKeyURLs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) ENExposureConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_runDetectionDone;	// IMP=0x000000000000f36a
- (_Bool)_runFinishStart;	// IMP=0x000000000000f299
- (_Bool)_runAddFile;	// IMP=0x000000000000f0df
- (_Bool)_runActivateStart;	// IMP=0x000000000000ea4c
- (void)_run;	// IMP=0x000000000000e86f
- (void)_reportError:(id)arg1 where:(const char *)arg2;	// IMP=0x000000000000e791
- (void)invalidate;	// IMP=0x000000000000e6e0
- (void)activate;	// IMP=0x000000000000e615
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x000000000000e586
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e45d
- (id)init;	// IMP=0x000000000000e3ed

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MLMediaLibraryAccountChangeObserver-Protocol.h>

@class MSVTaskAssertion, NSString, NSXPCConnection;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MLChangeObserver : NSObject <MLMediaLibraryAccountChangeObserver>
{
    _Bool _timedOut;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 24 = 0x18
    MSVTaskAssertion *_taskAssertion;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
}

+ (id)observerWithConnection:(id)arg1;	// IMP=0x00000000001297fd
- (void).cxx_destruct;	// IMP=0x00000000001293ba
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic, getter=hasTimedOut) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(retain, nonatomic) MSVTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)tearDownTimeoutTimer;	// IMP=0x000000000012924e
- (void)setupTimeoutTimer;	// IMP=0x0000000000128f81
- (void)tearDownTaskAssertion;	// IMP=0x0000000000128e73
- (void)setupTaskAssertion;	// IMP=0x0000000000128cf7
@property(readonly, copy) NSString *description;
- (void)terminateForFailureToPerformDatabasePathChange;	// IMP=0x00000000001289e9
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001289d4
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012876e
- (void)dealloc;	// IMP=0x000000000012871b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


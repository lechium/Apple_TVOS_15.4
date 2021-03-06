//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface CURangingSession : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    _Bool _invalidateDone;	// 10 = 0xa
    _Bool _peersChanged;	// 11 = 0xb
    struct LogCategory *_ucat;	// 16 = 0x10
    unsigned int _flags;	// 24 = 0x18
    unsigned int _statusFlags;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    CDUnknownBlockType _errorHandler;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
    NSString *_label;	// 56 = 0x38
    CDUnknownBlockType _measurementHandler;	// 64 = 0x40
    CDUnknownBlockType _measurementHandlerEx;	// 72 = 0x48
    NSArray *_peers;	// 80 = 0x50
    CDUnknownBlockType _statusChangedHandler;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000097f48
@property(readonly, nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(copy, nonatomic) NSArray *peers; // @synthesize peers=_peers;
@property(copy, nonatomic) CDUnknownBlockType measurementHandlerEx; // @synthesize measurementHandlerEx=_measurementHandlerEx;
@property(copy, nonatomic) CDUnknownBlockType measurementHandler; // @synthesize measurementHandler=_measurementHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_updatePeers;	// IMP=0x0000000000097e7b
- (void)_updateResponder;	// IMP=0x0000000000097e5d
- (void)_updateInitiator;	// IMP=0x0000000000097e57
- (void)_update;	// IMP=0x0000000000097e2b
- (void)_invalidated;	// IMP=0x0000000000097d62
- (void)_invalidate;	// IMP=0x0000000000097d50
- (void)invalidate;	// IMP=0x0000000000097d05
- (void)activate;	// IMP=0x0000000000097cba
- (void)addSample:(id)arg1;	// IMP=0x0000000000097cb4
- (void)dealloc;	// IMP=0x00000000000979ed
- (id)init;	// IMP=0x0000000000097962

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/TVLJSObject-Protocol.h>

@class NSLock, NSMutableDictionary, TVLLegacyJSContext;
@protocol TVLJSRootDelegate;

@interface TVLJSRoot : NSObject <TVLJSObject>
{
    NSMutableDictionary *_dateFormatterCache;	// 8 = 0x8
    TVLLegacyJSContext *_context;	// 16 = 0x10
    struct OpaqueJSValue *_jsObjectRef;	// 24 = 0x18
    id <TVLJSRootDelegate> _delegate;	// 32 = 0x20
    NSMutableDictionary *_timers;	// 40 = 0x28
    NSLock *_timersLock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000ac37c
@property(retain, nonatomic) NSLock *timersLock; // @synthesize timersLock=_timersLock;
@property(retain, nonatomic) NSMutableDictionary *timers; // @synthesize timers=_timers;
@property(nonatomic) __weak id <TVLJSRootDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct OpaqueJSValue *jsObjectRef; // @synthesize jsObjectRef=_jsObjectRef;
- (id)_localtime:(id)arg1 context:(struct OpaqueJSContext *)arg2 exception:(const struct OpaqueJSValue **)arg3;	// IMP=0x00000000000abf76
- (void)_timerFired:(id)arg1;	// IMP=0x00000000000abd0a
- (void)_jsFinalize;	// IMP=0x00000000000abb98
- (void)_clearTimer:(id)arg1;	// IMP=0x00000000000aba11
- (id)_startTimer:(double)arg1 repeating:(_Bool)arg2 context:(struct OpaqueJSContext *)arg3 callback:(struct OpaqueJSValue *)arg4 thisObject:(struct OpaqueJSValue *)arg5 args:(const struct OpaqueJSValue **)arg6 argCount:(unsigned long long)arg7;	// IMP=0x00000000000ab827
- (id)initWithContext:(id)arg1 jsContext:(struct OpaqueJSContext *)arg2;	// IMP=0x00000000000aa363

@end


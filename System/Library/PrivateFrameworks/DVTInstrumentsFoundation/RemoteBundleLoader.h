//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_queue;

@interface RemoteBundleLoader : NSObject
{
    unsigned int _targetTask;	// 8 = 0x8
    int _targetPid;	// 12 = 0xc
    CDUnknownBlockType _releaseOpaqueSymbolicator;	// 16 = 0x10
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned long long _field4;
        unsigned long long _field5;
        unsigned long long _field6;
        unsigned long long _field7;
        unsigned long long _field8;
        unsigned long long _field9;
        unsigned long long _field10;
        unsigned long long _field11;
        unsigned long long _field12;
        unsigned long long _field13;
        unsigned long long _field14;
        unsigned long long _field15;
        unsigned long long _field16;
        unsigned long long _field17;
    } *_remoteFunctionAddresses;	// 24 = 0x18
    NSString *_helperLaunchPath;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_symbolLookupQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_injectionQueue;	// 48 = 0x30
    NSError *_missingSymbolError;	// 56 = 0x38
    _Bool _attemptedSymbolLookup;	// 64 = 0x40
    _Bool _exited;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x000000000005cf89
- (void)scheduleLibraryLoad:(id)arg1 calling:(id)arg2 arguments:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000000005b7ee
- (void)dealloc;	// IMP=0x000000000005b775
- (id)initWithTask:(unsigned int)arg1;	// IMP=0x000000000005b101
- (void)_lookupFunctionAddresses:(struct _CSTypeRef)arg1;	// IMP=0x000000000005aa33

@end


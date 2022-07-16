//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CuttlefishXPCWrapper, NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTResetOperation
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    long long _resetReason;	// 32 = 0x20
    NSString *_containerName;	// 40 = 0x28
    NSString *_contextID;	// 48 = 0x30
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 56 = 0x38
    OTOperationDependencies *_deps;	// 64 = 0x40
    NSOperation *_finishedOp;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001cc76b
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
@property long long resetReason; // @synthesize resetReason=_resetReason;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x00100000001cc456
- (id)init:(id)arg1 contextID:(id)arg2 reason:(long long)arg3 intendedState:(id)arg4 dependencies:(id)arg5 errorState:(id)arg6 cuttlefishXPCWrapper:(id)arg7;	// IMP=0x00100000001cc30a

@end


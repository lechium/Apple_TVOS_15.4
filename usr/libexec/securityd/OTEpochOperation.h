//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CuttlefishXPCWrapper, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTEpochOperation
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    unsigned long long _epoch;	// 32 = 0x20
    NSString *_containerName;	// 40 = 0x28
    NSString *_contextID;	// 48 = 0x30
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000189a91
@property(retain) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
@property(nonatomic) unsigned long long epoch; // @synthesize epoch=_epoch;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x00100000001897f3
- (id)init:(id)arg1 contextID:(id)arg2 intendedState:(id)arg3 errorState:(id)arg4 cuttlefishXPCWrapper:(id)arg5;	// IMP=0x00100000001896e1

@end

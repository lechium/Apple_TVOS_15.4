//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOLogMsgState;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineUpdateSharedStateOperation
{
    int _stateType;	// 56 = 0x38
    GEOLogMsgState *_state;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000098dae4
- (void)main;	// IMP=0x000000000098da3a
- (id)initWithStateType:(int)arg1 state:(id)arg2 remoteProxy:(id)arg3 runQueue:(id)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000098d9a0

@end


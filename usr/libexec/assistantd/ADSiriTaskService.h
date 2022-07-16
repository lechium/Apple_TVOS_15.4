//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ADServiceCommandType, NSObject;
@protocol ADAceRequestTransformer, ADAceResponseTransformer, AFSiriRequestHandling, OS_dispatch_queue;

@interface ADSiriTaskService
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADServiceCommandType *_commandType;	// 16 = 0x10
    id <ADAceRequestTransformer> _requestTransformer;	// 24 = 0x18
    id <ADAceResponseTransformer> _responseTransformer;	// 32 = 0x20
    id <AFSiriRequestHandling> _requestHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001cbce7
- (id)requestCommandAceType;	// IMP=0x00100000001cbcd2
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001cb445
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000001cb35d
- (id)commandsForDomain:(id)arg1;	// IMP=0x00100000001cb24d
- (id)domains;	// IMP=0x00100000001cb1b7
- (CDUnknownBlockType)_informCommandCenter:(id)arg1 willPerformLaunchApp:(id)arg2;	// IMP=0x00100000001caffc
- (id)initWithCommandType:(id)arg1 requestTransformer:(id)arg2 responseTransformer:(id)arg3 requestHandler:(id)arg4;	// IMP=0x00100000001cade6

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface NEPathControllerNetworkAgent
{
    _Bool updateClientsImmediately;	// 72 = 0x48
    _Bool _isForcedAdvisory;	// 73 = 0x49
    _Bool _weakAdvisory;	// 74 = 0x4a
    _Bool _noAdvisoryTimer;	// 75 = 0x4b
    _Bool _preferAdvisory;	// 76 = 0x4c
    CDUnknownBlockType _internalAssertHandler;	// 80 = 0x50
    CDUnknownBlockType _internalUnassertHandler;	// 88 = 0x58
    NSMutableArray *_predictedInterfaceArray;	// 96 = 0x60
    NSMutableArray *_advisoryInterfaceArray;	// 104 = 0x68
    NSString *_advisoryAgentDomain;	// 112 = 0x70
    NSString *_advisoryAgentType;	// 120 = 0x78
}

+ (id)agentFromData:(id)arg1;	// IMP=0x000000000013fe38
+ (id)agentType;	// IMP=0x000000000013fe2b
- (void).cxx_destruct;	// IMP=0x0000000000140f2f
@property _Bool preferAdvisory; // @synthesize preferAdvisory=_preferAdvisory;
@property _Bool noAdvisoryTimer; // @synthesize noAdvisoryTimer=_noAdvisoryTimer;
@property _Bool weakAdvisory; // @synthesize weakAdvisory=_weakAdvisory;
@property(retain) NSString *advisoryAgentType; // @synthesize advisoryAgentType=_advisoryAgentType;
@property(retain) NSString *advisoryAgentDomain; // @synthesize advisoryAgentDomain=_advisoryAgentDomain;
@property(retain) NSMutableArray *advisoryInterfaceArray; // @synthesize advisoryInterfaceArray=_advisoryInterfaceArray;
@property(retain) NSMutableArray *predictedInterfaceArray; // @synthesize predictedInterfaceArray=_predictedInterfaceArray;
@property(copy) CDUnknownBlockType internalUnassertHandler; // @synthesize internalUnassertHandler=_internalUnassertHandler;
@property(copy) CDUnknownBlockType internalAssertHandler; // @synthesize internalAssertHandler=_internalAssertHandler;
@property(nonatomic) _Bool isForcedAdvisory; // @synthesize isForcedAdvisory=_isForcedAdvisory;
- (void)setUpdateClientsImmediately:(_Bool)arg1;	// IMP=0x0000000000140dbf
- (_Bool)updateClientsImmediately;	// IMP=0x0000000000140daf
- (id)initWithAdvisoryAgentDomain:(id)arg1 agentType:(id)arg2 advisoryMode:(unsigned long long)arg3;	// IMP=0x0000000000140cbb
- (id)initWithAdvisoryInterface:(id)arg1 advisoryMode:(unsigned long long)arg2;	// IMP=0x0000000000140b13
- (void)setUnassertHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000140b01
- (void)setAssertHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000140aef
- (void)unassertAgentWithOptions:(id)arg1;	// IMP=0x00000000001409e8
- (_Bool)assertAgentWithOptions:(id)arg1;	// IMP=0x00000000001406f9
- (id)copyAgentData;	// IMP=0x00000000001401a6

@end

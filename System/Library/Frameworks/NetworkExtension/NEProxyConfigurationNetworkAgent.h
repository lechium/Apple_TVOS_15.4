//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NEProxyConfigurationNetworkAgent
{
    NSData *_agentData;	// 72 = 0x48
}

+ (id)agentFromData:(id)arg1;	// IMP=0x00000000001417b3
+ (id)agentType;	// IMP=0x000000000014173e
+ (id)agentDomain;	// IMP=0x0000000000141731
- (void).cxx_destruct;	// IMP=0x0000000000141874
@property(retain) NSData *agentData; // @synthesize agentData=_agentData;
- (id)copyAgentData;	// IMP=0x0000000000141809
- (id)initWithProxyConfiguration:(id)arg1;	// IMP=0x0000000000141765
- (id)agentDescription;	// IMP=0x000000000014174b

@end

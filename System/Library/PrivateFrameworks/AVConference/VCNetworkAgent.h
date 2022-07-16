//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCNetworkAgent : NSObject
{
    int _assertionRefCount;	// 8 = 0x8
}

+ (id)agentFromData:(id)arg1;	// IMP=0x00000000002bcfc7
+ (id)agentType;	// IMP=0x00000000002bcfba
+ (id)agentDomain;	// IMP=0x00000000002bcfad
+ (id)sharedInstance;	// IMP=0x00000000002bcef5
- (id)copyAgentData;	// IMP=0x00000000002bcfcf
- (void)removeAssertion;	// IMP=0x00000000002bcfa7
- (void)addAssertion;	// IMP=0x00000000002bcfa1
- (void)dealloc;	// IMP=0x00000000002bcf4f
- (id)init;	// IMP=0x00000000002bcefd

@end


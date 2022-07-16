//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterWANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_portRules;	// 8 = 0x8
    NSMutableArray *_icmpRules;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004cb494
- (void).cxx_destruct;	// IMP=0x00000000004c89f5
@property(retain, nonatomic) NSMutableArray *icmpRules; // @synthesize icmpRules=_icmpRules;
@property(retain, nonatomic) NSMutableArray *portRules; // @synthesize portRules=_portRules;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c8707
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c8679
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004c8174
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c7d2f
- (id)initWithPortRules:(id)arg1 icmpRules:(id)arg2;	// IMP=0x00000000004c7c96
- (id)init;	// IMP=0x00000000004c7c67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

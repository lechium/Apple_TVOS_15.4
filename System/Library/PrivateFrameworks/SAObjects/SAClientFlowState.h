//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface SAClientFlowState
{
}

+ (id)clientFlowStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000025823
+ (id)clientFlowState;	// IMP=0x0000000000025811
+ (id)persistencePolicy;	// IMP=0x00000000000257dc
+ (id)deliveryDeadline;	// IMP=0x00000000000257c8
@property(copy, nonatomic) NSDictionary *cachedDomainClassJavascriptChecksumMap;
- (id)encodedClassName;	// IMP=0x0000000000025804
- (id)groupIdentifier;	// IMP=0x00000000000257f0

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable
{
    id <WFVariableProvider> _variableProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001b20e1
- (id)variableProvider;	// IMP=0x00000000001b20c8
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;	// IMP=0x00000000001b1fca
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b1eef
- (id)possibleContentClassesWithContext:(id)arg1;	// IMP=0x00000000001b1e21
@property(readonly, nonatomic) NSString *name;
- (id)UUID;	// IMP=0x00000000001b1cda
- (id)iconImage;	// IMP=0x00000000001b1cba
- (_Bool)requiresModernVariableSupport;	// IMP=0x00000000001b1c72
- (_Bool)isAvailable;	// IMP=0x00000000001b1bd0
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;	// IMP=0x00000000001b19c3
- (id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;	// IMP=0x00000000001b1871

@end

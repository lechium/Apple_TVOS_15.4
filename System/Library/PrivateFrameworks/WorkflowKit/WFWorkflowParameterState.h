//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFWorkflowParameterState
{
}

+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x000000000025a77c
+ (id)serializedRepresentationFromValue:(id)arg1;	// IMP=0x000000000025a68c
+ (Class)processingValueClass;	// IMP=0x000000000025a67b
- (void)processValue:(id)arg1 withContext:(id)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000025ac05
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000025aa0f
- (id)legacySerializedRepresentation;	// IMP=0x000000000025a96f

@end


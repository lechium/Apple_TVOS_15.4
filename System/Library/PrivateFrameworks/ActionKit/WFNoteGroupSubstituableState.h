//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFNoteGroupSubstituableState : WFVariableSubstitutableParameterState
{
}

+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x0000000000340bbe
+ (id)serializedRepresentationFromValue:(id)arg1;	// IMP=0x0000000000340ab5
+ (Class)processingValueClass;	// IMP=0x0000000000340aa4
- (_Bool)stateIsEquivalent:(id)arg1;	// IMP=0x0000000000340881
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000034064e
- (id)initWithNoteGroupSpeakableString:(id)arg1;	// IMP=0x00000000003405d0

@end


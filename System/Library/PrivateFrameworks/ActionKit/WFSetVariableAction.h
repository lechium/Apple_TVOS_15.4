//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFSetVariableAction : WFAction
{
}

- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;	// IMP=0x000000000030b61d
- (id)accessibilityName;	// IMP=0x000000000030b589
- (id)providedVariableNames;	// IMP=0x000000000030b4f1
- (id)variableName;	// IMP=0x000000000030b49a
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000030b32a
- (void)runWithInput:(id)arg1 error:(id *)arg2;	// IMP=0x000000000030b26b

@end


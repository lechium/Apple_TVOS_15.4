//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFEvernoteAccessResource;

@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;	// 8 = 0x8
    WFEvernoteAccessResource *_evernoteAccessResource;	// 16 = 0x10
}

+ (id)referencedActionResourceClasses;	// IMP=0x00000000003373db
- (void).cxx_destruct;	// IMP=0x00000000003370df
@property(retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource; // @synthesize evernoteAccessResource=_evernoteAccessResource;
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000003370b9
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (void)possibleStatesDidChange;	// IMP=0x0000000000336f45
- (void)updateNotebooks;	// IMP=0x0000000000336e36
- (void)wasAddedToWorkflow;	// IMP=0x0000000000336df5
- (void)setActionResources:(id)arg1;	// IMP=0x0000000000336b8e
- (Class)singleStateClass;	// IMP=0x0000000000336b7d

@end

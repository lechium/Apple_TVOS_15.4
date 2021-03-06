//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction
{
    long long _datePickerMode;	// 8 = 0x8
}

@property(readonly, nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
- (id)outputContentClasses;	// IMP=0x00000000002442b3
- (void)finishRunningWithDate:(id)arg1;	// IMP=0x000000000024422c
- (void)finishRunningWithResultText:(id)arg1;	// IMP=0x0000000000243d24
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002439b1
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000024313c
- (id)datePickerModeFromInputType:(id)arg1;	// IMP=0x00000000002430b6
@property(readonly, nonatomic) _Bool immediatelyActivateWatchDictation;
@property(readonly, nonatomic) NSString *defaultAnswer;
@property(readonly, nonatomic) NSString *promptText;
@property(readonly, nonatomic) NSString *inputType;
- (id)appResource;	// IMP=0x0000000000242c79

@end


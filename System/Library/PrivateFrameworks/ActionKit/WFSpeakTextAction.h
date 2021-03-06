//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class WFSpeakTextActionOperation;
@protocol WFActionExtendedOperation;

@interface WFSpeakTextAction : WFAction
{
    id <WFActionExtendedOperation> _extendedOperation;	// 8 = 0x8
    WFSpeakTextActionOperation *_runningOperation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000026b21b
@property(retain, nonatomic) WFSpeakTextActionOperation *runningOperation; // @synthesize runningOperation=_runningOperation;
- (void)setExtendedOperation:(id)arg1;	// IMP=0x000000000026b1e2
- (id)extendedOperation;	// IMP=0x000000000026b1d1
- (void)initializeParameters;	// IMP=0x000000000026b160
- (void)cancel;	// IMP=0x000000000026b0e3
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000026b091
- (_Bool)isProgressIndeterminate;	// IMP=0x000000000026b089
- (id)voicePickerParameter;	// IMP=0x000000000026afc6

@end


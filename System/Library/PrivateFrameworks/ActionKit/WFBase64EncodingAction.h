//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFBase64EncodingAction : WFAction
{
}

+ (_Bool)outputIsExemptFromTaintTrackingInheritance;	// IMP=0x00000000002dc7d3
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002dc4b8
- (id)outputContentClasses;	// IMP=0x00000000002dc39b
- (id)inputContentClasses;	// IMP=0x00000000002dc27e
- (id)itemFromBase64EncodedString:(id)arg1 nameIfKnown:(id)arg2;	// IMP=0x00000000002dc1d4
- (id)base64EncodedStringItemFromFile:(id)arg1 lineBreakMode:(id)arg2;	// IMP=0x00000000002dc09f
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000002dbec7

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject
{
    NSString *_resultString;	// 8 = 0x8
    NSString *_statusString;	// 16 = 0x10
    union {
        NSString *stringValue;
        NSAttributedString *attributedStringValue;
    } _spokenString;	// 24 = 0x18
    VSRecognitionSession *_session;	// 32 = 0x20
    unsigned int _spokenStringIsAttributed:1;	// 40 = 0x28
}

- (void)_continueAfterDeferredStart;	// IMP=0x0000000000024a49
- (_Bool)sensitiveActionsEnabled;	// IMP=0x0000000000024a33
- (_Bool)_hasDeferredStartCallback;	// IMP=0x0000000000024a2b
- (void)completeWithNextAction:(id)arg1 error:(id)arg2;	// IMP=0x0000000000024a0c
- (id)cancel;	// IMP=0x0000000000024a04
- (id)perform;	// IMP=0x00000000000249d0
- (int)completionType;	// IMP=0x00000000000249c8
- (void)setSpokenFeedbackAttributedString:(id)arg1;	// IMP=0x000000000002498a
- (id)spokenFeedbackAttributedString;	// IMP=0x0000000000024976
- (void)setSpokenFeedbackString:(id)arg1;	// IMP=0x0000000000024938
- (id)spokenFeedbackString;	// IMP=0x0000000000024916
- (void)setStatusDisplayString:(id)arg1;	// IMP=0x00000000000248e8
- (id)statusDisplayString;	// IMP=0x00000000000248de
- (void)setResultDisplayString:(id)arg1;	// IMP=0x00000000000248b0
- (id)resultDisplayString;	// IMP=0x00000000000248a6
- (void)dealloc;	// IMP=0x0000000000024855
- (void)_setSession:(id)arg1;	// IMP=0x000000000002484b
- (id)_session;	// IMP=0x0000000000024841

@end

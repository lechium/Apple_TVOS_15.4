//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebFormDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebDefaultFormDelegate : NSObject <WebFormDelegate>
{
}

+ (id)sharedFormDelegate;	// IMP=0x00000000000ebdc0
- (void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;	// IMP=0x00000000000ebe70
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;	// IMP=0x00000000000ebe50
- (_Bool)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;	// IMP=0x00000000000ebe40
- (void)didFocusTextField:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000000ebe30
- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000000ebe20
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000000ebe10
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000000ebe00
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000000ebdf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


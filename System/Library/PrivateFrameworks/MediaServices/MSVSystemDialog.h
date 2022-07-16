//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVSystemDialogOptions, NSArray, NSMutableArray;

@interface MSVSystemDialog : NSObject
{
    NSMutableArray *_textFields;	// 8 = 0x8
    struct __CFUserNotification *_presentedUserNotification;	// 16 = 0x10
    struct __CFRunLoopSource *_activeRunLoopSource;	// 24 = 0x18
    CDUnknownBlockType _pendingCompletion;	// 32 = 0x20
    MSVSystemDialogOptions *_options;	// 40 = 0x28
}

+ (id)systemDialogWithOptions:(id)arg1;	// IMP=0x000000000002e173
- (void).cxx_destruct;	// IMP=0x000000000002d889
@property(readonly, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(readonly, nonatomic) MSVSystemDialogOptions *options; // @synthesize options=_options;
- (void)dismiss;	// IMP=0x000000000002d860
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cfe2
- (void)clearTextFields;	// IMP=0x000000000002cfcc
- (void)addTextFieldWithTitle:(id)arg1 secure:(_Bool)arg2;	// IMP=0x000000000002cf79
- (void)addTextField:(id)arg1;	// IMP=0x000000000002cf63
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion;
@property(nonatomic) struct __CFRunLoopSource *activeRunLoopSource;
@property(nonatomic) struct __CFUserNotification *presentedUserNotification;
- (void)dealloc;	// IMP=0x000000000002ce43
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000002cdbe

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SSDialogButton;

@interface SSDialog : NSObject
{
    NSArray *_buttons;	// 8 = 0x8
    NSMutableDictionary *_dialogDictionary;	// 16 = 0x10
}

- (void)_setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000a86c6
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSArray *buttons;
@property(readonly, nonatomic) NSString *dialogKind;
@property(readonly, nonatomic) NSDictionary *dialogDictionary;
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000000a855c
@property(retain, nonatomic) SSDialogButton *defaultButton;
- (void)dealloc;	// IMP=0x00000000000a807c
- (id)initWithDialogDictionary:(id)arg1;	// IMP=0x00000000000a7f75
- (id)init;	// IMP=0x00000000000a7f29

@end


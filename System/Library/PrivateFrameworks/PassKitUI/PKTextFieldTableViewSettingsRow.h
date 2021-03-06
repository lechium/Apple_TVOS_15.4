//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKTableViewSettingsRow-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, PKTextFieldTableViewSettingsRowFormatter;
@protocol NSCopying;

@interface PKTextFieldTableViewSettingsRow : NSObject <UITextFieldDelegate, PKTableViewSettingsRow>
{
    PKTextFieldTableViewSettingsRowFormatter *_formatter;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    id <NSCopying> _identifier;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    id _value;	// 40 = 0x28
    CDUnknownBlockType _changeHandler;	// 48 = 0x30
    long long _keyboardType;	// 56 = 0x38
    NSString *_placeholder;	// 64 = 0x40
}

+ (id)cellReuseIdentifier;	// IMP=0x000000000020699a
- (void).cxx_destruct;	// IMP=0x0000000000206efe
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
- (void)_textFieldValueChanged:(id)arg1;	// IMP=0x0000000000206dbe
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;	// IMP=0x0000000000206d39
- (_Bool)shouldHighlight;	// IMP=0x0000000000206d31
- (id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000002069ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000206795
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 value:(id)arg3 formatter:(id)arg4 changeHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000020657a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


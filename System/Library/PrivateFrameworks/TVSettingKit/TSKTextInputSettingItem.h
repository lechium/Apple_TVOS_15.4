//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TSKTextInputSettingItem
{
    _Bool _secure;	// 8 = 0x8
    _Bool _useFormatterError;	// 9 = 0x9
    long long _keyboardType;	// 16 = 0x10
    long long _autocapitalizationType;	// 24 = 0x18
    long long _autocorrectionType;	// 32 = 0x20
    NSString *_localizedTextEntryInstructions;	// 40 = 0x28
    NSString *_recentsCategory;	// 48 = 0x30
}

+ (id)textInputItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4;	// IMP=0x00000000000205c0
- (void).cxx_destruct;	// IMP=0x0000000000020b60
@property(nonatomic) _Bool useFormatterError; // @synthesize useFormatterError=_useFormatterError;
@property(copy, nonatomic) NSString *recentsCategory; // @synthesize recentsCategory=_recentsCategory;
@property(copy, nonatomic) NSString *localizedTextEntryInstructions; // @synthesize localizedTextEntryInstructions=_localizedTextEntryInstructions;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
- (id)localizedValue;	// IMP=0x00000000000207c0
- (id)initWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 readOnly:(_Bool)arg5 accessoryTypes:(unsigned long long)arg6 childControllerClass:(Class)arg7;	// IMP=0x0000000000020420

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, SABaseCommand;

@interface SiriTVUIToggleButtonTemplateItem
{
    NSDictionary *_onTitles;	// 8 = 0x8
    NSDictionary *_offTitles;	// 16 = 0x10
    NSDictionary *_highlightedOnTitles;	// 24 = 0x18
    NSDictionary *_highlightedOffTitles;	// 32 = 0x20
    NSDictionary *_backgroundColors;	// 40 = 0x28
    _Bool _initialState;	// 48 = 0x30
    SABaseCommand *_commandToToggleToOnMode;	// 56 = 0x38
    SABaseCommand *_commandToToggleToOffMode;	// 64 = 0x40
    NSDictionary *_onDynamicImages;	// 72 = 0x48
    NSDictionary *_offDynamicImages;	// 80 = 0x50
    struct CGSize _onIconImagePointSize;	// 88 = 0x58
    struct CGSize _offIconImagePointSize;	// 104 = 0x68
    struct UIEdgeInsets _contentEdgeInsets;	// 120 = 0x78
    struct UIEdgeInsets _onImageEdgeInsets;	// 152 = 0x98
    struct UIEdgeInsets _offImageEdgeInsets;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000029cb
@property(nonatomic) struct CGSize offIconImagePointSize; // @synthesize offIconImagePointSize=_offIconImagePointSize;
@property(nonatomic) struct CGSize onIconImagePointSize; // @synthesize onIconImagePointSize=_onIconImagePointSize;
@property(nonatomic) struct UIEdgeInsets offImageEdgeInsets; // @synthesize offImageEdgeInsets=_offImageEdgeInsets;
@property(nonatomic) struct UIEdgeInsets onImageEdgeInsets; // @synthesize onImageEdgeInsets=_onImageEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(copy, nonatomic) NSDictionary *offDynamicImages; // @synthesize offDynamicImages=_offDynamicImages;
@property(copy, nonatomic) NSDictionary *onDynamicImages; // @synthesize onDynamicImages=_onDynamicImages;
@property(copy, nonatomic) SABaseCommand *commandToToggleToOffMode; // @synthesize commandToToggleToOffMode=_commandToToggleToOffMode;
@property(copy, nonatomic) SABaseCommand *commandToToggleToOnMode; // @synthesize commandToToggleToOnMode=_commandToToggleToOnMode;
@property(nonatomic) _Bool initialState; // @synthesize initialState=_initialState;
- (id)offDynamicImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000000279b
- (id)onDynamicImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000000272d
- (id)backgroundColorForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000026bf
- (id)highlightedOffTitleForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000002651
- (id)highlightedOnTitleForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000025e3
- (id)offTitleForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000002575
- (id)onTitleForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000002507
- (id)initWithOnTitles:(id)arg1 offTitles:(id)arg2 highlightedOnTitles:(id)arg3 highlightedOffTitles:(id)arg4 backgroundColors:(id)arg5 commandToToggleToOnMode:(id)arg6 commandToToggleToOffMode:(id)arg7 initialState:(_Bool)arg8;	// IMP=0x000000000000233f

@end


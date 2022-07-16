//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKTableViewSettingsRow-Protocol.h>

@class NSString;
@protocol NSCopying;

@interface PKButtonTableViewSettingsRow : NSObject <PKTableViewSettingsRow>
{
    _Bool _enabled;	// 8 = 0x8
    id <NSCopying> _identifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    id _value;	// 32 = 0x20
    CDUnknownBlockType _changeHandler;	// 40 = 0x28
    long long _style;	// 48 = 0x30
}

+ (id)cellReuseIdentifier;	// IMP=0x0000000000207226
- (void).cxx_destruct;	// IMP=0x0000000000207467
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
- (void)handleCellSelection;	// IMP=0x00000000002073d4
- (_Bool)shouldHighlight;	// IMP=0x00000000002073cb
- (id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000207238
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002070cc
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 tapHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000206f52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


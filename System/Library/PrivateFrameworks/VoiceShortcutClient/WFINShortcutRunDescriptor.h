//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INShortcut;

@interface WFINShortcutRunDescriptor
{
    INShortcut *_shortcut;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015453
- (void).cxx_destruct;	// IMP=0x0000000000015440
@property(readonly, nonatomic) INShortcut *shortcut; // @synthesize shortcut=_shortcut;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000153b6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015329
- (id)initWithShortcut:(id)arg1;	// IMP=0x000000000001522d

@end


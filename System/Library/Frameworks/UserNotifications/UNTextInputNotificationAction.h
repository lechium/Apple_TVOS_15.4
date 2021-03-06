//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface UNTextInputNotificationAction
{
}

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5;	// IMP=0x0000000000007451
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 icon:(id)arg4 textInputButtonTitle:(id)arg5 textInputPlaceholder:(id)arg6;	// IMP=0x000000000000736e
- (id)description;	// IMP=0x0000000000007647
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000750d

// Remaining properties
@property(readonly, copy, nonatomic) NSString *textInputButtonTitle; // @dynamic textInputButtonTitle;
@property(readonly, copy, nonatomic) NSString *textInputPlaceholder; // @dynamic textInputPlaceholder;

@end


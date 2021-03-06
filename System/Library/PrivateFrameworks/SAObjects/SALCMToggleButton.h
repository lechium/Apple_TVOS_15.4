//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, SABaseCommand;

@interface SALCMToggleButton
{
}

+ (id)toggleButtonWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000afa9
+ (id)toggleButton;	// IMP=0x000000000000af97
@property(copy, nonatomic) NSString *onTitle;
@property(copy, nonatomic) NSDictionary *onIconDynamicImage;
@property(copy, nonatomic) NSString *offTitle;
@property(copy, nonatomic) NSDictionary *offIconDynamicImage;
@property(retain, nonatomic) SABaseCommand *commandToToggleToOnMode;
@property(retain, nonatomic) SABaseCommand *commandToToggleToOffMode;
- (id)encodedClassName;	// IMP=0x000000000000af8a
- (id)groupIdentifier;	// IMP=0x000000000000af76

@end


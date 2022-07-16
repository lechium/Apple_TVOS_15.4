//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFDialogButton : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    long long _style;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000094cdd
+ (id)cancelButton;	// IMP=0x0000000000094c80
+ (id)selectButton;	// IMP=0x0000000000094c26
+ (id)okButton;	// IMP=0x0000000000094bcc
+ (id)doneButton;	// IMP=0x0000000000094b72
+ (id)defaultButtonWithTitle:(id)arg1;	// IMP=0x0000000000094b23
- (void).cxx_destruct;	// IMP=0x0000000000094afb
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000094a0b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000094902
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000948f7
- (id)initWithTitle:(id)arg1 style:(long long)arg2;	// IMP=0x0000000000094850
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3;	// IMP=0x0000000000094782

@end


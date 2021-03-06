//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SSDialogButton : NSObject
{
    NSDictionary *_actionDictionary;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

+ (id)buttonWithTitle:(id)arg1;	// IMP=0x00000000000a8862
- (id)valueForActionProperty:(id)arg1;	// IMP=0x00000000000a8936
@property(readonly, nonatomic) NSString *URLTarget;
@property(readonly, nonatomic) NSString *buttonAction;
@property(readonly, nonatomic) id actionParameter;
@property(readonly, copy, nonatomic) NSString *buttonTitle;
- (void)dealloc;	// IMP=0x00000000000a8801
- (id)initWithTitle:(id)arg1 actionDictionary:(id)arg2;	// IMP=0x00000000000a874b
- (id)init;	// IMP=0x00000000000a8735

@end


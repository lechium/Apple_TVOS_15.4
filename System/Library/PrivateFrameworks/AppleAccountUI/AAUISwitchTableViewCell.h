//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;
@protocol AAUISwitchTableViewCellDelegate;

@interface AAUISwitchTableViewCell : UITableViewCell
{
    UISwitch *_control;	// 8 = 0x8
    id <AAUISwitchTableViewCellDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002d2cf
@property(nonatomic) __weak id <AAUISwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UISwitch *control; // @synthesize control=_control;
- (void)_delegate_switchTableViewCellDidUpdateValue;	// IMP=0x000000000002d234
- (void)_controlValueChanged:(id)arg1;	// IMP=0x000000000002d222
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d1de
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000002d0e2

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UILabel;

@interface PXPeopleNamePickerCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    NSArray *_baseConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000812fd1
@property(retain, nonatomic) NSArray *baseConstraints; // @synthesize baseConstraints=_baseConstraints;
@property(readonly, nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;	// IMP=0x0000000000812f52
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000812dc4

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NUIContainerView;

@interface NUITableViewContainerCell : UITableViewCell
{
    NUIContainerView *_containerView;	// 8 = 0x8
}

+ (Class)containerViewClass;	// IMP=0x0000000000004596
- (void).cxx_destruct;	// IMP=0x000000000000489c
@property(readonly, nonatomic) NUIContainerView *containerView; // @synthesize containerView=_containerView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000047e8
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000004795
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000004629

@end
